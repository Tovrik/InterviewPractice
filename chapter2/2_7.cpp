/*
Given two linked lists, determine if the two lists intersect.
Return the interscting node. Not that the intersection is defined based
on reference, not value. That is, if the kth node of the first linked list
is the exact same node (by reference) as the jth node of the second linked list,
then they are intersecting.
*/

#include <iostream>
#include <unordered_map>
#include "LinkedList.cpp"

using namespace std;

node intersection(LinkedList *list1, LinkedList *list2) {
    node *first, *second;
    first = list1->head->next;
    second = list2->head->next;
    bool which = false;
    while(first->next != NULL) {
        first = first->next;
    }
    while(second->next != NULL) {
        second = second->next;
    }

    if(first == second) {
        int difference = first->size() - second->size();
        if(difference < 0) {
            difference = difference * -1;
            which = true;
        }
        first = list1->head->next;
        second = list2->head->next;
        for(int i = 0; i < difference; i++) {
            if(which) {
                second = second->next;
            }
            else {
                first = first->next;
            }
        }
        while(first->next != NULL) {

        }
    }
}



//===========================================================

int main() {
    LinkedList *list1, *list2;
    list1 = new LinkedList();
    list2 = new LinkedList();

    list->print();

}
