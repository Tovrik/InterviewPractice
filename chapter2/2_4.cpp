/*
Write code to partition a linked list around a value x, such that all nodes less than x
come before all nodes greater than or equal to x. If x is contained within the list, the
values of x only need to be after the elements less than x (See below).

EXAMPLE
Input: 3 -> 5 -> 8 -> 5 -> 10 -> 2 -> 1 {(partition = 5)}
Ouput: 3 -> 1 -> 2 -> 10 -> 5 -> 5 -> 8
*/
#include <iostream>
#include <unordered_map>
#include "LinkedList.cpp"

using namespace std;





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

}
