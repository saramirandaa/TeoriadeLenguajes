#ifndef TABLASIM_H
#define TABLASIM_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable: 4996 6011 6387 6001)

#define CAPACITY 100 // Size of the HashTable.
#define CAPACITY_COLLISION_LIST 10 // Collision list capacity
#define MAX_LINES_REFERENCE 10 // Array's size of reference lines for identifier


#ifdef __cplusplus
extern "C" {
#endif

void prueba();  
#ifdef __cplusplus
}
enum Var_Types { BOOLEAN, INTEGER, FLOAT, STRING, REAL, CHAR, VOID };
enum Var_concept { VAR_VARIABLE, VAR_ARRAY, VAR_FUNCTION, VAR_PROCEDURE };

struct data_value
{
    char* identifier;
    unsigned long memory_assign;
    Var_Types type;
    unsigned long bytes_size;
    unsigned long source_line_definition;
    char source_lines_used[MAX_LINES_REFERENCE];
    unsigned int scope;
};

struct Ht_item
{// Defines the HashTable item, identifier REVISAR
    char* identifier_string;
    data_value value;
    
};

struct HashTable
{// Contains an array of pointers to items.
    Ht_item* items[CAPACITY] = { NULL };
    Ht_item* collision_list[CAPACITY][CAPACITY_COLLISION_LIST] = { NULL };
    data_value collision_list_data[CAPACITY][CAPACITY_COLLISION_LIST] = { NULL };
    int size_of_collision_list[CAPACITY] = { -1 };
    unsigned int count = 0;
};

unsigned long hash_function(const char* str);
void collision_list_insert(HashTable& table, unsigned int position_item, Ht_item * item);
Ht_item* create_item(const char* value);
void create_table(HashTable & table);
void free_item(Ht_item* item);
void free_table(HashTable & table);
void ht_insert(HashTable& table, const char* value, data_value data);
bool ht_search(HashTable table, const char* key, unsigned long & index, long & collision_list_position);
void ht_delete(HashTable & table, const char* key);
void print_search(HashTable & table, const char* key);
void print_table(HashTable table);
char** ids_array(const char* word);


#endif
#endif 