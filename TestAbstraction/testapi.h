#pragma once

extern struct node;
typedef struct node list;

struct linkedlistapi {
    /*list* (*get_next)(list* list);
    void (*destroy_list)(void* list);
    void(*init_list)(void);
    void (*add_to_list)(list**, void*, size_t);
    void(*printlist)(list* list);
    void (*print_list_all)();
    void(*new_child)(list*, void*, size_t);*/
    void (*create)(list**);
};

struct greet_api
{
    int (*say_hello)(char* name);
    int (*say_goodbye)(void);
};

static int say_hello_fn(char* name);
static int say_goodbye_fn(void);
static list* list_get_next_fn(list* list);
static void destroy_list_fn(void* list);
static void init_list_fn(void);
static void add_to_list_fn(list**, void*, size_t);
static void print_list_all_fn();
static list* _create_fn();

void create_list_fn(list** listptr);
void init_single();

 /*

 typedef struct node {
     struct node* next;
     struct node* prev;
     struct node* child;
     void* data;
 }list;

 list* head;
 list* tail;
 list* down;

 struct linkedlistapi {
     list* (*get_next)(list* list);
     void (*destroy_list)(void* list);
     void(*init_list)(void);
     void (*add_to_list)(list**, void*, size_t);
     void(*printlist)(list* list);
     void (*print_list_all)();
     void(*new_child)(list*, void*, size_t);
     list* (*create)(list**);
 };*/

