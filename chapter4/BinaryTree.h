#include <iostream>
using namespace std;

struct node {
    int data;
    node *left, *right
};


class btree {
    public:

        node *root;

        btree();
        //adds integer to end of list
        void insert(int key);
        //removes integer pointed to by head
        node search(int key);
        //remove value at index
        void destroy_tree();
        //returns value of integer pointed to by head
        int peek();
        //returns the size of the list
        int size();
        //returns value at index (starting at 0)
        int get(int index);
        //prints the list
        void print();
};
