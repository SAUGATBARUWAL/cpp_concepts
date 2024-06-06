#include <stdio.h>

int hash_Table[5];

// This function computes the hash value 
// for input item "key" and returns a
// hash value (i.e., index value)
int hash_function(int key) {
   return key % 5;
}

// This function inserts the item "key"
// into the hash table hash_Table[5]
void insert(int key) {
   int hv = hash_function(key);
   // Linear probing to handle collisions(Linear probing is a scheme in computer programming for resolving collisions in hash table)
   while (hash_Table[hv] != 0) {
      hv = (hv + 1) % 5;
   }
   hash_Table[hv] = key;
}

void search(int key) {
   int hv = hash_function(key);
   int initial_hv = hv; // Save the initial hash value for checking cycle
   // Linear probing to find the key
   while (hash_Table[hv] != 0 && hash_Table[hv] != key) {
      hv = (hv + 1) % 5;
      // If we have cycled through the entire array and not found the key, break the loop
      if (hv == initial_hv) {
         break;
      }
   }

   if (hash_Table[hv] == key) {
      printf("%d is found at location %d in the Hash Table.\n", key, hv);
   } else {
      printf("%d is not found in the Hash Table.\n", key);
   }
}

int main() {
   int i, item;
   insert(23);
   insert(12);
   insert(15);
   insert(34);
   insert(26);

   printf(" Hash Value\t Key\n");
   for (i = 0; i < 5; i++) {
      printf(" %d \t\t %d", i, hash_Table[i]);
      printf("\n");
   }

   search(34);
   search(55);

   return 0;
}
