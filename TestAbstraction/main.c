#include <stdio.h>
#include<stdlib.h>
#include "implement.h"
#define COMPARE_CHARS(x,y)(x != y ? 1 : 0);
enum Boolean
{
    FALSE,
    TRUE
}bool_t;

/* Our implementation of the hello function */

struct subattr 
{
    void* data;
    struct subattr* next;
};
struct datastruct
{
    char* data;
    struct subattr* subattribute;
};


void inputdata(struct datastruct* input) 
{
    printf("%s -> ", (char*)input->data);
}
void reverse(char* s) {
    for (int x = 0; x < strlen(s) / 2; x++) {
        char* sptr;
        int count = strlen(s) - (1 + x);
        sptr = s[count];
        s[count] = s[x];
        s[x] = sptr;
    }
}

enum Boolean palindrome(char *s) {
    for (int i = 0; i <= strlen(s); i++)
        if (s[i] != s[strlen(s) - (1 + i)]) return FALSE; 
    return TRUE;
}
/* main() doesn't need to know anything about how the
 * say_hello/goodbye works, it just knows that it does */
int main(int argc, char* argv[])
{
    char* chars = "civic";
    if (!palindrome(chars))
        printf("not a palindrome");
    char data2[5] = "hell\0";
    char downdata[5] = "down\0";
    char data3[6] = "hello\0";
    char data4[7] = "hello2\0";
    char data5[7] = "hello4\0";
    const char* names[] = { "gilmore\0" };
    //listptr newlist = NULL;
    
    list* listptr = NULL;
    linkedlistapi.create(&listptr);
    //new_list(&listptr);
    /*linkedlistapi.add_to_list(&newlist, data2, sizeof(data2) + 1);
    for (int i = 0; i != 3; i++) {
        linkedlistapi.new_child(&newlist, downdata, sizeof(downdata) + 1);
    }
    linkedlistapi.add_to_list(&newlist, data3, sizeof(data3) + 1);
    linkedlistapi.add_to_list(&newlist, data4, sizeof(data4) + 1);
    linkedlistapi.add_to_list(&newlist, data5, sizeof(data5) + 1);
    linkedlistapi.print_list_all();*/

   // sptr->id = 1;
  //  printf("return code %d", sptr->id);
    //linkedlistapi.add_to_list(&sptr,data2,4);
   /* linkedlistapi.add_to_list(&sptr, data3, sizeof(data3));
    linkedlistapi.printlist(&sptr);
    free(sptr);*/
   // linkedlistapi.create_list(&sptr, sizeof(sptr));

    return 0;
}