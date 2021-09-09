// --------- Implementation  of hashmap using linear probing ---------

// hashmap.h contain all function declaration.
// include <stdbool.h> for using bool as return type.
#include <stdbool.h>

// Fuction to return Hash_index. (O(1) Time complexity).
int Hash_index(int value);

// Fuction to display Max_Element_store in Hash_map. (O(1) Time complexity).
void Max_Element_store();

// Fuction to search key in Hash_map. (O(N) worst Time complexity , O(1) average ).
struct Hash_map * search(int key,int call);

// Fuction to update value of key in Hash_map (O(N) worst Time complexity , O(1) average ).
void update(int key,void* value);

// Fuction to insert key in Hash_map. (O(N) worst Time complexity , O(1) average ).
void insert(int key,void* data);

// Fuction to clear Hash_map. (O(N) Time complexity).
void clear();

// Fuction to erase key in Hash_map. (O(N) worst Time complexity , O(1) average ).
void erase(int key);

// Fuction to check Hash_map empty or not. (O(1) Time complexity).
void empty();

// Fuction to display Hash_map. (O(size) Time complexity).
void display();

// Fuction to print size of Hash_map.  (O(1) Time complexity).
void Map_Size();

// Fuction to return occurrence of key in Hash_map. (O(1) Time complexity).
int get_count(int key);

// Function to find value attached with key in Hash_map. ( O(N) Time complexity worst case).
void value_find(int key);
