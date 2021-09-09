#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "hashmap.h"
#include <string.h>

// Implement Hash_map Data structure using open addressing and linear probing.
// By default Hash_map SIZE 200.
#define SIZE 200

bool flag=true;
// varible to keep map_element_count

int map_element_count=0;
// Hash_map structure having 3 information key , data and count_of_occurrence.

struct Hash_map{
    int key;
    int data;
    int count_of_occurrence;
};

// creating an Hash_map_array of struct type.
struct Hash_map* Hash_map_array[SIZE];

// Function to return Hash_index ( O(1) Time complexity ).
int Hash_index(int val)
{
    return (val + SIZE)%SIZE;
}

// Function to return maximum size of Hash_map_array.
void Max_Element_store()
{
    printf("Map_default_size is %d\n",SIZE);
}

// Function to return current element count in Hash_map_array.
void Map_Size()
{
    printf("Map_Element_count is %d\n",map_element_count);
}

// Function to return count of occurrence of key.
int get_count(int key)
{
    struct Hash_map *temp=search(key,0);
    if(temp==NULL)
    return -1;
    
    return temp->count_of_occurrence;
}

// Function to find key present or not in Hash_map_array ( O(SIZE) Time complexity in Worst ).
struct Hash_map * search(int key,int call)
{
    // Finding Hash_index corresponding to key.
    int Hash_insert_index=Hash_index(key);

    // if Hash_map_array[Hash_insert_index] is not NULL.
    // keep checking untill we found empty (NULL) Node .
    while(Hash_map_array[Hash_insert_index]!=NULL)
    {
        // if value is find then key corresponding to Hash_map_array[Hash_insert_index] == key.
        if(Hash_map_array[Hash_insert_index]->key == key)
        {
            if(!call)
            printf("%d Key present in Hash_map\n",key);
            // return Hash_map Node corresponding to Hash_map_array[Hash_insert_index].
            return Hash_map_array[Hash_insert_index];
        }
         // increment Hash_insert_index by 1.
        Hash_insert_index++;
        // Finding new Hash_insert_index using modulus operation.
        Hash_insert_index=(Hash_insert_index + SIZE)%SIZE;
    }
    if(!call)
    printf("%d Key not present in Hash_map\n",key);

    // if Hash_map_array[Hash_insert_index]== NULL i.e value Not present.
    return NULL;
}


// Function to update data corresponding to key.
void update(int key,void* value)
{
    // first check weather key present in Hash_map_array or not.
    struct Hash_map* temp=search(key,1);
    // if Not present , then insert into Hash_map_array.
    if(temp==NULL)
    {
        // insert key and value to Hash_map_array.
        insert(key,value);
    }
    else
    {
        // update data corresponding to key.
        temp->data=*(int *)value;
        // increment count_of_occurrence by 1.
        temp->count_of_occurrence+=1;
        
        printf("%d key value updated %d\n",temp->key,temp->data);
    }
    return;
}

// Function to insert Key into Hashmap using open addressing ( O(1) average & O(map_element_count) Worst ).
void insert(int key,void* data)
{
    struct Hash_map *check_exit=search(key,1);
    if(check_exit!=NULL)
    {
        update(key,data);
        return;
    }

    // creating a struct Node using calloc Function.
    struct Hash_map* temp=(struct Hash_map*)calloc(1,sizeof(struct Hash_map));
    // assign key , data and count_of_occurrence to Node.
    temp->key=key;
    temp->data=*(int *)data;
    temp->count_of_occurrence=1;
    // Finding Hash_index corresponding to key.
    int Hash_insert_index=Hash_index(key);

    // increment Hash_insert_index untill there is a NULL corresponding to Hash_insert_index.
    // if delete operation perform prior then key corresponding to Hash_insert_index is -1.
    while(Hash_map_array[Hash_insert_index]!=NULL && Hash_map_array[Hash_insert_index]->key!=-1)
    {
        // increment Hash_insert_index by 1.
        Hash_insert_index++;
        // Finding new Hash_insert_index using modulus operation.
        Hash_insert_index=(Hash_insert_index + SIZE)%SIZE;
    }
    // assign value to Hash_map_array.
    Hash_map_array[Hash_insert_index]=temp;
    // increment map_element_count by 1.
    map_element_count++;

    printf("(%d , %d) inserted in Hash_map\n",key,*(int*)data);
}

// Function to clear Hash_map_array. ( O(N) Time complexity. ).
void clear()
{
    // iterate over Hash_map_array.
    for(int i=0;i<SIZE;i++)
    {
        // if Hash_map_array[i] is not NULL.
        if(Hash_map_array[i]!=NULL)
        {
            struct Hash_map *temp=Hash_map_array[i];
            free(temp);
            // Assign NULL to Hash_map_array.
            Hash_map_array[i]=NULL;
        }
    }
    // make map_element_count equal 0.
    map_element_count=0;
    printf("Hashmap clear successfully \n");
    return;
}

// Function to erase key in Hash_map.
void erase(int key)
{
    // first check weather key present in Hash_map_array or not.
    struct Hash_map* temp=search(key,1);
    // if Not present , then print warning for user.
    if(temp==NULL)
    {
        printf("%d Key Not present in Hash_map_array\n",key);
    }
    else
    {
        printf("%d Key erase from Hash_map_array\n",key);
        // mark key to -1.
        temp->key=-1;
        // mark count_of_occurrence to 0.
        temp->count_of_occurrence=0;
        map_element_count--;
    }
    return;
}

// Function to check weather Hash_map_array is empty or Not ( O(1) Time complexity ).
void empty()
{
    // if map_element_count is 0, return true.
    if(map_element_count == 0){
    printf("Yes, Hash_map is empty\n");
    return;
    }

    // else if Hash_map_array contain element.
    printf("No, Hash_map is not empty\n");
}

void value_find(int key)
{
    struct Hash_map *temp=search(key,1);
    if(temp==NULL)
    {
	printf("Key Not present in Hash_map");
    }
    else
    {
    	printf("%d , value present corresponding %d Key\n",temp->data,temp->key);
    }
}

// Function to display content of Hash_map.
void display() {
   int i = 0;
   // iterate over Hash_map array.
   for(i = 0; i<SIZE; i++) {
       // check if Key present or not. 
       if(Hash_map_array[i] != NULL && Hash_map_array[i]->key!=-1){
          printf("(%d,%d)\n",Hash_map_array[i]->key,Hash_map_array[i]->data);
       }
   }

   printf("\n");
}
