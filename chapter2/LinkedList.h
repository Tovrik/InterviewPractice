#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};


class LinkedList {
    public:

        node *head;

        LinkedList();
        //adds integer to end of list
        void add(int y);
        //removes integer pointed to by head
        void remove();
        //remove value at index
        void removeAt(int index);
        //returns value of integer pointed to by head
        int peek();
        //returns the size of the list
        int size();
        //returns value at index (starting at 0)
        int get(int index);
        //prints the list
        void print();
};
