#include "list.c"

int main()
{
    /* head pointer for the list */
    struct node* head = malloc(sizeof(struct node));
    struct node* tail = head;

    int i;
    for(i = 0 ; i < 5 ; i++)
    {
        struct node* new_node = malloc(sizeof(struct node));
        new_node -> value = i + 1;
        new_node -> next = NULL; 
        tail -> next = new_node;
        tail = new_node;
    }

    print_List(head);

    return 0;
}