#include <iostream>
#include <string>
#include "stack.h"
#include "queue.h"
#include "hashtable.h"
using namespace std;
int main() {
	HashTable hash(100);
	hash.insert_table("gpodboy122", "hello");
	hash.insert_table("byebye", "godbye");
	string val1=hash.get_value("byebye");
	cout << val1 << endl;
	hash.Clear_HashTable();
}