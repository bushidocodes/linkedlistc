#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "linkedlist.c"

int main(void)
{
    node *head = NULL;
    insert_node(&head, 5);
    insert_node(&head, 10);
    insert_node(&head, 15);
    insert_node(&head, 20);
    print_list(head, true);
    delete_node(&head, 15);
    print_list(head, true);

    return 0;
}