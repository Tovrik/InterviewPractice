/*
You have two numberes represented by a linked list, where each node contains a single digit.
The digits are stored in reverse order, such that the 1's digit is at the head of the list.
Write a function that adds the two numbers and returns the sum as a linked list.

EXAMPLE
Input: (7 -> 1 -> 6) + (5 -> 9 -> 2)
Ouput: 2 -> 1 -> 9
*/
#include <iostream>
#include "LinkedList.cpp"

using namespace std;

LinkedList* addLists(LinkedList *list1, LinkedList *list2) {

    node *n1 = list1->head->next, *n2 = list2->head->next;
    int carry = 0;
    LinkedList *ret;
    while(n1 != NULL) {
        ret->add((carry + n1->data + n2->data) % 10);
        carry = (carry + n1->data + n2->data) / 10;
        n1 = n1->next;
        n2 = n2->next;
    }
    if(carry) {
        ret->add(carry);
    }
    return ret;
}



//===========================================================

int main() {
    LinkedList *list1, *list2, *list3;
    list1 = new LinkedList();
    list2 = new LinkedList();
    list3 = new LinkedList();


    list1->add(2);
    list1->add(1);
    list1->add(6);

    list2->add(9);
    list2->add(8);
    list2->add(5);

    list3 = addLists(list1, list2);
    list3->print();
}
