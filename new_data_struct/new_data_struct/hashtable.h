using namespace std;
typedef struct {
    unsigned int key;
    string value;
} Entry;

class HashTable {
private:
    int size;
    Entry* table;
    unsigned int hash(string);
    int idx;
public:
    HashTable(int size);
    void Clear_HashTable();
    void insert_table(string key, string value);
    string get_value(string key);
};