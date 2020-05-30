#include<stdio.h>
#include "testapi.h"
#include"listmacro.h"
/* A struct implementing the API */

typedef struct node {
    struct node* next;
    struct node* prev;
    struct node* child;
    void* data;
};

list* head;
list* tail;
list* down;



/* Our implementation of the hello function */

static int say_hello_fn(char* name)
{
    printf("Hello %s\n", name);
    return 0;

}

/* Our implementation of the goodbye function */
static int say_goodbye_fn(void)
{
    printf("Goodbye\n");
    return 0;
}

static list* list_get_next_fn(list* listitem)
{
    if (NULL == listitem) {
        return head;
    }
    else {
        return listitem->next;
    }
}

//list* create_list_fn(list* listitem,size_t datasz)
//{
//    list* newitem;
//    newitem = (list*)malloc(sizeof(list));
//    return newitem;
//}

static void destroy_list_fn(void* list)
{
    free(list);
}

static void init_list_fn()
{
    head = tail = down = NULL;
}

static list* _create_fn() {
    
    return (struct node*)malloc(sizeof(struct node));
    //add_to_list_fn(nodeptr,data,&datasize);
}
void create_list_fn(list** listptr)
{
    *listptr = _create_fn();
}
static void append_list_fn(list* nodeptr, void* data, size_t datasize) {
    list* searchtop = nodeptr;//global pointer
    add_to_list_fn(nodeptr, data, datasize);
}
 static void add_to_list_fn(list** nodeptr, void* data, size_t dsize)
{
    //nodeptr = tail;
    struct node* new_list = (struct node*)malloc(sizeof(struct node));
    new_list->data = malloc(sizeof(dsize));
    memcpy(new_list->data, data, dsize);
    printf("%s\n", (char*)new_list->data);
   // new_area = list;
    
    if (NULL == tail) {
        head = tail = *nodeptr = new_list;
        new_list->child = NULL;
        new_list->next = NULL;
        new_list->prev = NULL;
    }
    else{
        (*nodeptr)->next = new_list;
        new_list->next = (*nodeptr)->next;
        new_list->prev = (*nodeptr)->prev;
        new_list->next = NULL;
        new_list->child = NULL;
        *nodeptr = (*nodeptr)->next;
    }
}

 static void print_list_all_fn() {
    list* search;
    search = head;
    list* subsearch;
    while (search != NULL) {
        printf("%s -> ", (char*)search->data);
        while (search->child != NULL) {
            subsearch = search->child;
            printf("child found: %s  \n",(char *)subsearch->data);
        }
        search = search->next;
    }
}


 static void new_child_fn(list** under,void* data,size_t dsize) {
    if (head == NULL) {
        printf("must init and allocate node prior to child init\n");
        exit(12);
    }
    list* tempptr;
    struct node* new_list = (struct node*)malloc(sizeof(struct node));
    new_list->data = malloc(sizeof(dsize));
    memcpy(new_list->data, data, dsize);
    tempptr = *under;
    if(tempptr->child == NULL){
        tempptr->child = new_list;
        tempptr->next = NULL;
    }
}

