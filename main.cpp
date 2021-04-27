#include <iostream>

#include "data_structure.hpp"

using namespace std;

int main()
{

  itis::Node* my_tree = NULL;
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    int val, num;
    cin >> val >> num;
    my_tree = insert(my_tree, val, num);
    print_tree(my_tree);
    cout << "\n";
  }
  for (int i = 0; i < n - 5; ++i)
  {
    my_tree = erase(my_tree, 0);
    print_tree(my_tree);
    cout << "\n";
  }

  my_tree = erase(my_tree, -1);
  print_tree(my_tree);
  cout << "\n";
  my_tree = erase(my_tree, 3);
  print_tree(my_tree);
  cout << "\n";

  return 0;
}