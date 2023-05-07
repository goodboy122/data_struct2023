#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

// 해시 테이블 개체
typedef struct {
    char* key;
    char* value;
} HashEntry;

// 해시 테이블
typedef struct {
    HashEntry* entries[SIZE];
} HashTable;

// 해시 함수
unsigned int hashFunction(const char* key) {
    unsigned int hash = 0;
    for (int i = 0; i < strlen(key); i++) {
        hash += key[i];
    }
    return hash % SIZE;
}

// 해시 테이블에 값 추가
void insert(HashTable* table, const char* key, const char* value) {
    unsigned int hash = hashFunction(key);
    HashEntry* entry = (HashEntry*)malloc(sizeof(HashEntry));
    entry->key = _strdup(key);
    entry->value = _strdup(value);
    table->entries[hash] = entry;
}

// 해시 테이블에서 값 찾기
char* find(HashTable* table, const char* key) {
    unsigned int hash = hashFunction(key);
    HashEntry* entry = table->entries[hash];
    if (entry != NULL && strcmp(entry->key, key) == 0) {
        return entry->value;
    }
    return NULL;
}

// 해시 테이블에서 값 제거
void removeEntry(HashTable* table, const char* key) {
    unsigned int hash = hashFunction(key);
    HashEntry* entry = table->entries[hash];
    if (entry != NULL && strcmp(entry->key, key) == 0) {
        free(entry->key);
        free(entry->value);
        free(entry);
        table->entries[hash] = NULL;
    }
}

// 해시 테이블 메모리 해제
void freeHashTable(HashTable* table) {
    for (int i = 0; i < SIZE; i++) {
        HashEntry* entry = table->entries[i];
        if (entry != NULL) {
            free(entry->key);
            free(entry->value);
            free(entry);
            table->entries[i] = NULL;
        }
    }
}

int main() {
    HashTable table;
    for (int i = 0; i < SIZE; i++) {
        table.entries[i] = NULL;
    }

    insert(&table, "key1", "value1");
    insert(&table, "key2", "value2");
    insert(&table, "key3", "value3");

    char* value1 = find(&table, "key1");
    if (value1 != NULL) {
        printf("Value1: %s\n", value1);
    }

    char* value2 = find(&table, "key2");
    if (value2 != NULL) {
        printf("Value2: %s\n", value2);
    }

    removeEntry(&table, "key2");

    char* value2AfterRemove = find(&table, "key2");
    if (value2AfterRemove == NULL) {
        printf("Value2 has been removed\n");
    }

    freeHashTable(&table);

    return 0;
}
