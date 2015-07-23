/*
Write code to remove duplicates fron an unsorted linked list.
How would you solve this problem if a temporary buffer is not allowed?
EXAMPLE
INPUT  : 12 -> 11 -> 12 -> 21 -> 41 -> 43 -> 21
OUTPUT : 12 -> 11 -> 21 -> 41 -> 43
*/

#include <iostream>
#include "Node.h"

using namespaces std;

void removeDuplicates(Node *start) {
    Node *ptr1, *ptr2, *dup;
    ptr1 = start;

    while(ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
        while(ptr2->next != NULL) {
            if(ptr1->data == ptr2->next->data) {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                free(dup);
            }
            else {
                ptr2 = ptr2->next;
            }
        }
        ptr1 = ptr1->next;
    }
}

int main() {
    Node *start = NULL;
    Node *one =
}
