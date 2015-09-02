/*
Given a circular linked list, implement an algorithm that returns the node at the beginning of the loop.

*/

#include <iostream>
#include <unordered_map>
#include "LinkedList.cpp"

using namespace std;

node* circular(LinkedList *list) {
    node *slow, *fast;
    slow = list->head->next;
    fast = list->head->next->next;
    while(slow != fast && slow->next != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    if(slow == fast) {
        return fast->next;
    }
}



//===========================================================

int main() {
    LinkedList *list;
    list = new LinkedList();

    list->add(1);
    list->add(2);
    list->add(3);
    list->add(4);
    list->add(5);

    list->head->next->next->next->next = list->head->next;
    node *n;
    n = circular(list);
    cout << n->data << endl;
}
