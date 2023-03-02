#include "map.h"

Map::Map(){
    head == nullptr;
}
bool Map::empty() const{
    if(head == nullptr){
        return true;
    }
    return false;
}
int Map::size() const{
    if(head == nullptr){
        return 0;
    }
    int count = 0;
    for(Node* traverse = head; traverse != nullptr; traverse++){
        count++;
    }
    return count;
}
bool Map::insert(const KeyType &key, const ValueType &value){}
bool Map::update(const KeyType &key, const ValueType &value){}
bool Map::insertOrUpdate(const KeyType &key, const ValueType &value){}
bool Map::erase(const KeyType &key){}
bool Map::contains(const KeyType &key) const{}
bool Map::get(const KeyType &key, ValueType &value) const{}
bool Map::get(int i, KeyType &key, ValueType &value) const{}
void Map::swap(Map &other){}