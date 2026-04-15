#ifndef HASHMAP_HPP
#define HASHMAP_HPP
#include "HashNode.hpp"
#include <vector>

template <typename K, typename V>
class HashMap {
public:
    HashMap(int size = 31);

    bool empty() const;
    bool full() const;

    void insert(const K& key, const V& value);
    void print() const;

    //  TODO
    //  if the key doesnt, throw e, or return the reference
    const V& search(const K& key) const;



private:
    std::vector<HashNode<K, V>*> data;
    int n; // The number of records in the table

    HashNode<K, V>* deleted;

    int hash(const K& key) const;

    //  TODO
    //  return the index, of the key, if the key exists else {-1}
    int searchIndex(const K& key) const;

};

#include "HashMap.tpp"

#endif
