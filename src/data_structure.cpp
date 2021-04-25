#include "data_structure.hpp"

// файл с определениями

namespace itis {

#include <iostream>
#include <ctime>

using namespace std;

#define mp make_pair

  struct Node
  {
    Node *left, *right;
    long long value, cnt, y;
    Node() {}
    Node(long long value)
    {
      this->value = value;
      left = right = NULL;
      y = (rand() << 16) ^ rand();
      cnt = 1;
    }
  };

  Node* nulltree = NULL;

  int cnt(Node* tree) // Подсчёт вершин в дереве
  {
    if (tree == NULL)
      return 0;
    return tree->cnt;
  }

  int index(Node* tree)
  {
    if (tree == NULL)
      return -1;
    return cnt(tree->left);
  }

  void update (Node* tree) // Обновление информации о вершине через ее дочерний элемент
  {
    tree->cnt = cnt(tree->left) + cnt(tree->right) + 1;
  }

  Node* merge (Node* left_tree, Node* right_tree) // Слияние двух деревьев
  {
    if (left_tree == NULL)
      return right_tree;
    if (right_tree == NULL)
      return left_tree;
    if (left_tree->y > right_tree->y)
    {
      left_tree->right = merge(left_tree->right, right_tree);
      update(left_tree);
      return left_tree;
    }
    right_tree->left = merge(left_tree, right_tree->left);
    update(right_tree);
    return right_tree;
  }

  pair<Node*, Node*> split (Node* tree, int num) // Разбиение дерева по номеру
  {                                              // Получение номера, который будет последним в левой части
    if (tree == NULL)                          // Нумерация начинается с 0
      return mp(nulltree, nulltree);
    if (index(tree) <= num)
    {
      auto tt = split(tree->right, num - index(tree) - 1);
      tree->right = tt.first;
      return mp(tree, tt.second);
    }
    auto tt = split(tree->left, num);
    tree->left = tt.second;
    return mp(tt.first, tree);
  }

  Node* insert (Node* tree, int value, int num) // Вставка элемента по его значению и номеру
  {                                             // Если в деревьях такого числа нет, элемент будет добавлен в ближайшее место
    auto tt = split(tree, num - 1);
    Node* new_elem = new Node(value);
    tt.first = merge(tt.first, new_elem);
    tree = merge(tt.first, tt.second);
    return tree;
  }

  Node* erase (Node* tree, int num) // Стирание элемента по номеру
  {                                 // Если такого номера нет, ничего не будет стёрто
    auto tt = split(tree, num);
    auto tt2 = split(tt.first, num - 1);
    tree = merge(tt2.first, tt.second);
    return tree;
  }

  void print_tree (Node* tree) // Рисует дерево в порядке очереди
  {
    if (tree == NULL)
      return;
    print_tree(tree->left);
    cout << tree->value << ' ';
    print_tree(tree->right);
  }

}  // namespace itis