/*
Implement an algorithm to delete a node in the middle of a singly linked list given only access to that node
EXAMPLE
Input: a -> b -> c -> d
Result(given b): a -> c -> d
*/
#include <iostream>
#include <unordered_map>
#include "LinkedList.cpp"

using namespace std;

void deleteMiddleNode(node *n) {
    n->data = n->next->data;
    n->next = n->next->next;
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
    list->add(6);
    list->add(7);
    list->add(8);
    list->add(9);
    list->add(10);
    list->add(11);
    list->add(12);

    list->print();

    node *n;
    n = list->head->next->next->next;
    deleteMiddleNode(n);
    list->print();
}
