#include <iostream>
#include <string>
#include "hashtable.h"
using namespace std;
unsigned int HashTable::hash(string k) {
    unsigned int hash = 0;
    for (int i = 0; i < k.length(); i++) {
        hash = 31 * hash + k[i];
    }
    return hash % size;
}

HashTable::HashTable(int size) {
    this->size = size;
    idx = 0;
    table = new Entry[this->size];

}

void HashTable::Clear_HashTable() {
    delete[] table;
    table = nullptr;
}

void HashTable::insert_table(string key, string value) {
    if (idx == size) {
        cout << "table is full" << endl;
        return;
    }
    unsigned int index = hash(key);
    table[idx].key = index;
    table[idx].value = value;
    idx++;
}

string HashTable::get_value(string k) {
    unsigned int index = hash(k);
    for (int i = 0; i < idx; i++) {
        if (table[i].key == index)
            return table[i].value;
    }
    cout << "There is no data matching the key" << endl;
    return "";
}