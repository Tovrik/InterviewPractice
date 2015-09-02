/*
Implement an algo to find the Kth to last element of a linked list
*/
#include <iostream>
#include <unordered_map>
#include "LinkedList.cpp"

using namespace std;

node findKthToLast(LinkedList *list, int k) {
    node *n, *m;
    n = list->head->next;
    int count = 0;
    bool active = false;
    while(n != NULL) {
        n = n->next;
        if(active) {
            m = m->next;
        }
        count++;
        if(count == k) {
            active = true;
            m = list->head->next;
        }
    }
    return *m;
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
    cout << findKthToLast(list, 3).data << endl;
}
