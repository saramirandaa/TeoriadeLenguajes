#include "TablaSim.h"

using namespace std;

// sybol index
unsigned long hash_function(const char* str)
{
    unsigned long i = 0;
    for (unsigned int j = 0; str[j]; j++)
        i += str[j];

    return i % CAPACITY;
}

void collision_list_insert(HashTable& table, unsigned int position_item, Ht_item * item)
{
    unsigned int position = table.size_of_collision_list[position_item]++;
    table.collision_list[position_item][position] = item;
}

//creates an Ht_item object and makes strings of the chars i give the function as a parameter
Ht_item* create_item(const char* value)
{
    // Creates a pointer to a new HashTable item.
    Ht_item* item = (Ht_item*)malloc(sizeof(Ht_item));
    item->identifier_string = (char*)malloc(strlen(value) + 1);
    strcpy(item->identifier_string, value);
    return item;
}

//crea la tabla completa
void create_table(HashTable & table)
{
    // Creates a new HashTable.
    table.count = 0;
    for (unsigned int i = 0; i < CAPACITY; i++)
    {
        table.items[i] = NULL;
        table.size_of_collision_list[i] = 0;
        for (unsigned int j = 0; j < CAPACITY_COLLISION_LIST; j++)
            table.collision_list[i][j] = NULL;
    }
}

//libera un item
void free_item(Ht_item* item)
{
    // Frees an item
    free(item->identifier_string);
    free(item);
}

//libera la tabla
void free_table(HashTable & table)
{
    // Frees the table.
    for (unsigned int i = 0; i < CAPACITY; i++)
        if (table.items[i] != NULL)
        {
            free_item(table.items[i]);
            table.items[i] = NULL;
            table.size_of_collision_list[i] = -1;
            for (unsigned int j = 0; j < CAPACITY_COLLISION_LIST; j++)
                if (table.collision_list[i][j] != NULL)
                {
                    free(table.collision_list[i][j]);
                    table.collision_list[i][j] = NULL;
                }
        }
    table.count = 0;
}

//inserta en la tabla
void ht_insert(HashTable& table, const char* value, data_value data)
{
    // Creates the item.
    Ht_item* item = create_item(value);
    item->value.bytes_size = data.bytes_size;
    item->value.type = data.type;
    item->value.memory_assign = data.memory_assign;
    item->value.scope = data.scope;
    item->value.source_line_definition = data.source_line_definition;
    strcpy(item->value.source_lines_used, data.source_lines_used);
    // Computes the index.
    unsigned int index = hash_function(value);
    if (table.items[index] == NULL)
        // Insert directly.
        table.items[index] = item;
    else
        //Handle the collision.
        collision_list_insert(table, index, item);
    table.count++;
}


bool ht_search(HashTable table, const char* key, unsigned long & index, long & collision_list_position)
{
    // Searches for the key in the HashTable.
    // Returns NULL if it doesn't exist.
    index = hash_function(key);
    Ht_item* item = table.items[index];
    
    // Provide only non-NULL values.
    if (item != NULL)
    {
       if (strcmp(item->identifier_string, key) == 0)
            return true;

       collision_list_position = -1;
       for (Ht_item* actual : table.collision_list[index])
       {
           collision_list_position++;
           if (strcmp(actual->identifier_string, key) == 0)
               return true;
       }
    }
    return false;
}

void ht_delete(HashTable & table, const char* key)
{
    // Deletes an item from the table.
    int index = hash_function(key);
    Ht_item* item = table.items[index];
    if (item == NULL)
        // Does not exist.
        return;
    else
    {
        if (strcmp(item->identifier_string, key) == 0 && table.size_of_collision_list[index] == -1)
        {
            // Collision list does not exist.
            // Remove the item.
            // Set table index to NULL.
            table.items[index] = NULL;
            free_item(item);
            table.count--;
            return;
        }
        else if (strcmp(item->identifier_string, key) == 0 && table.size_of_collision_list[index] != -1)
        {
            // Collision list exists.
            if (strcmp(item->identifier_string, key) == 0)
            {
                // Remove this item.
                // Set the head of the list as the new item.
                strcpy(table.items[index]->identifier_string, table.collision_list[index][0]->identifier_string);
                table.items[index]->value.bytes_size = table.collision_list[index][0]->value.bytes_size;
                table.items[index]->value.type = table.collision_list[index][0]->value.type;
                table.items[index]->value.memory_assign = table.collision_list[index][0]->value.memory_assign;
                table.items[index]->value.scope = table.collision_list[index][0]->value.scope;
                table.items[index]->value.source_line_definition = table.collision_list[index][0]->value.source_line_definition;
                strcpy(table.items[index]->value.source_lines_used, table.collision_list[index][0]->value.source_lines_used);
                for (int j = 0; j < table.size_of_collision_list[index] - 1; j++)
                {
                    strcpy(table.collision_list[index][j]->identifier_string, table.collision_list[index][j + 1]->identifier_string);
                    table.collision_list[index][j]->value.bytes_size = table.collision_list[index][j + 1]->value.bytes_size;
                    table.collision_list[index][j]->value.memory_assign = table.collision_list[index][j + 1]->value.memory_assign;
                    table.collision_list[index][j]->value.scope = table.collision_list[index][j + 1]->value.scope;
                    table.collision_list[index][j]->value.source_line_definition = table.collision_list[index][j + 1]->value.source_line_definition;
                    table.collision_list[index][j]->value.type = table.collision_list[index][j + 1]->value.type;
                    strcpy(table.collision_list[index][j]->value.source_lines_used, table.collision_list[index][j + 1]->value.source_lines_used);
                }
                free(table.collision_list[index][table.size_of_collision_list[index] - 1]->identifier_string);
                table.collision_list[index][table.size_of_collision_list[index] - 1] = NULL;
                table.size_of_collision_list[index]--;
                table.count--;
                return;
            }
        }
        // Find on collision list and delete.
        for (int it = 0; it < table.size_of_collision_list[index]; it++)
            if (strcmp(table.collision_list[index][it]->identifier_string, key) == 0)
            {
                for (int j = it; j < table.size_of_collision_list[index] - 1; j++)
                {
                    strcpy(table.collision_list[index][j]->identifier_string, table.collision_list[index][j + 1]->identifier_string);
                    table.collision_list[index][j]->value.bytes_size = table.collision_list[index][j + 1]->value.bytes_size;
                    table.collision_list[index][j]->value.memory_assign = table.collision_list[index][j + 1]->value.memory_assign;
                    table.collision_list[index][j]->value.scope = table.collision_list[index][j + 1]->value.scope;
                    table.collision_list[index][j]->value.source_line_definition = table.collision_list[index][j + 1]->value.source_line_definition;
                    table.collision_list[index][j]->value.type = table.collision_list[index][j + 1]->value.type;
                    strcpy(table.collision_list[index][j]->value.source_lines_used, table.collision_list[index][j + 1]->value.source_lines_used);
                }
                free(table.collision_list[index][table.size_of_collision_list[index] - 1]->identifier_string);
                table.collision_list[index][table.size_of_collision_list[index] - 1] = NULL;
                table.size_of_collision_list[index]--;
                table.count--;
                return;
            }
        
    }
}
char** ids_array(const char* word){
    int times = 100;
    if (word == NULL || times <= 0) {
        return NULL;
    }

    int length = strlen(word);
    char** arr = (char**)malloc(times * sizeof(char*)); // Explicitly cast malloc's return


    if (arr != NULL) {
        for (int i = 0; i < times; ++i) {
            arr[i] = (char*)malloc((length + 1) * sizeof(char)); 
            if (arr[i] != NULL) {
                strcpy(arr[i], word); 
            }
            printf("size %d word %s\n", arr[i]);
        }
    }

    return arr;
}

void print_search(HashTable & table, const char* key)
{
    unsigned long pos = 0;
    long collision_pos_lis = -1;
    if (!ht_search(table, key, pos, collision_pos_lis))
    {
        printf("Key:%s does not exist\n", key);
        return;
    }
    else if (collision_pos_lis != -1)
            printf("Key:%s, Index:%d, Collision list position:%d\n", key, pos, collision_pos_lis);
         else
            printf("Key:%s, Index:%d\n", key, pos);
}

void print_table(HashTable table)
{
    printf("\nHash Table\n-------------------\n");

    for (int i = 0; i < CAPACITY; i++)
        if (table.items[i])
        {
            printf(" Index:%d, Key:%s, Memory Asign: %d, Type: %d, Size: %d, Source Line: %d, Lines Used: %s \n", i, table.items[i]->identifier_string, table.items[i]->value.memory_assign
                    , table.items[i]->value.type, table.items[i]->value.bytes_size, table.items[i]->value.source_line_definition, table.items[i]->value.source_lines_used);
            //for (int it = 0; it < table.size_of_collision_list[i]; it++)
                //printf("Index:%d, Collision list position:%d, Key:%s\n", i, it, table.collision_list[i][it]->identifier_string);
        }
    printf("-------------------\n\n");
}


void prueba() {
    printf("hola");
}
/*
int main()
{
    HashTable ht;
    create_table(ht);
    data_value data_1 = { 0, BOOLEAN, 20, 1000, "12 , 13, 14", 1 };
    ht_insert(ht, "X1", data_1);
    data_value data_2 = { 4,FLOAT,30,2000, "112 , 113, 114", 2 };
    ht_insert(ht, "H1", data_2);
    data_value data_3 = { 10,INTEGER,40,3000, "212 , 213, 214", 3 };
    ht_insert(ht, "Z1", data_3);
    data_value data_4 = { 15,STRING,80,5000, "312 , 313", 4};
    ht_insert(ht, "P1", data_4);
    data_value data_5 = { 20,BOOLEAN,100,6000, "412 , 413, 414", 1 };
    ht_insert(ht, "A1", data_5);
    data_value data_6 = { 24,FLOAT,130,7000, "512 , 513, 14", 2 };
    ht_insert(ht, "B1", data_6);
    data_value data_7 = { 210,INTEGER,140,8000, "913, 914", 3 };
    ht_insert(ht, "C1", data_7);
    data_value data_8 = { 215,STRING,180,9000, "712 , 713, 714", 4 };
    ht_insert(ht, "K1", data_8);
    print_table(ht);
    ht_delete(ht, "X1");
    print_table(ht);
    ht_delete(ht, "B1");
    print_table(ht);
    print_search(ht, "C1");
    print_search(ht, "K1");
    free_table(ht);
    print_table(ht);
    return 0;
}
*/