
#pragma once

// Заголовочный файл с объявлением структуры данных

namespace itis {

  // Tip 1: объявите здесь необходимые структуры, функции, константы и прочее

  //Объявление класса "Node" и иницилизация переменных

  struct Node {
    //поля структуры
   public:
    long long value;
    long long cnt;
    long long y;
    Node* left;
    Node* right;

    Node(long long value) {
      this->value = value;
      left = right = NULL;
      y = (rand() << 16) ^ rand();
      cnt = 1;
    }
  };

      // Tip 2: На начальном этапе разработки структуры данных можете определения методов задавать в
      // заголовочном файле, как только работа будет завершена, можно будет оставить здесь только объявления.

      //метод "split" - разделение дерева на два по вершине
      std::pair<Node*, Node*> split (itis::Node* tree, int num);

      // метод "merge" - отвечает за слияние двух деревьев
      Node* merge (itis::Node* left_tree, Node* right_tree);

      // метод "Insert" - отвечает за добавление элемента к дереву
      Node* insert (Node* tree, int value, int num);

      // метод "erase" - операция удаление вершины из дерева
      Node* erase (Node* tree, int num);

      // метод "print_tree" - рисует дерево в порядке очереди
      void print_tree (Node* tree);

      void update (Node* tree);

      int cnt(Node* tree);

      int index(Node* tree);

  };

