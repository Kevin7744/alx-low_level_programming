#0x1A. C - Hash tables
## Author : Kevin Kipkoech
 

##Hash Function and Hash Tables.
Is any function that can be used to map data of arbitrary  size to fixed -size values, though there some hash functions that support variable length output. The values returned by a hash function are called hash values, hash codes , digests or simply hashes. These values are used ti index a fixed-size table called a  hash table. Use of hash function to index a hash table is called hashing or scatter storage addressing.
A hash function takes a key as input, which is associated with a datum or record and used to identify it to the data storage and retrieval application. The key may be fixed length, like an integer, or variabl length, like a name, or even the datum itself. The output is a hash code used to index a hah table holding the data or records, or pointers to them.
 
### For alx Tasks
The objective of this project was;
General
•	What is a hash function
•	What makes a good hash function
•	What is a hash table, how do they work and how to use them
•	What is a collision and what are the main ways of dealing with collisions in the context of a hash table
•	What are the advantages and drawbacks of using hash tables
•	What are the most common use cases of hash tables

Prototypes
-	hash_table_t *hash_table_create(unsigned long int size); -> 0-¬¬-hash_table_create.c
-	unsigned long int hash_djb2(const unsigned char *str); -> 1-djb2.c
-	unsigned long int key_index(const unsigned char *key, unsigned long int size); -> 2-key_index.c
-	int hash_table_set(hash_table_t *ht, const char *key, const char *value); -> 3-hash_table_set.c
-	char *hash_table_get(const hash_table_t *ht, const char *key); - > 4-hash_table_get.c
-	void hash_table_print(const hash_table_t *ht); -> 5-hash_table_print.c
-	void hash_table_delete(hash_table_t *ht); -> 6-hash_table_delete.c


