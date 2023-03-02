#include <string>
using KeyType = std::string;
using ValueType = double;

class Map
{
public:
  Map();
  bool empty() const;
  int size() const;
  bool insert(const KeyType &key, const ValueType &value);
  bool update(const KeyType &key, const ValueType &value);
  bool insertOrUpdate(const KeyType &key, const ValueType &value);
  bool erase(const KeyType &key);
  bool contains(const KeyType &key) const;
  bool get(const KeyType &key, ValueType &value) const;
  bool get(int i, KeyType &key, ValueType &value) const;
  void swap(Map &other);
private:
  class Node{
    Node* next;
    Node* previous;
    ValueType value;
  };
  Node* head;
};