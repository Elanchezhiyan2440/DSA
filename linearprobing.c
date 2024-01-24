#include <stdio.h>

#define SIZE 10

int hashTable[SIZE];

// Division hash function
int hashFunction(int key) {
    return key % SIZE;
}

// Insert key into hash table using linear probing
void insert(int key) {
    int index = hashFunction(key);

    while (hashTable[index] != 0) {
        // Linear probing: move to the next index
        index = (index + 1) % SIZE;
    }

    hashTable[index] = key;
}

// Search for key in hash table using linear probing
int search(int key) {
    int index = hashFunction(key);

    while (hashTable[index] != key) {
        if (hashTable[index] == 0) {
            return -1;  // Key not found
        }

        // Linear probing: move to the next index
        index = (index + 1) % SIZE;
    }

    return index;
}

int main() {
    // Insert some keys into the hash table
    insert(5);
    insert(15);
    insert(25);

    // Search for keys
    int index5 = search(5);
    int index15 = search(15);
    int index25 = search(25);

    if (index5 != -1) {
        printf("Key 5 found at index %d\n", index5);
    } else {
        printf("Key 5 not found\n");
    }

    if (index15 != -1) {
        printf("Key 15 found at index %d\n", index15);
    } else {
        printf("Key 15 not found\n");
    }

    if (index25 != -1) {
        printf("Key 25 found at index %d\n", index25);
    } else {
        printf("Key 25 not found\n");
    }

    return 0;
}
