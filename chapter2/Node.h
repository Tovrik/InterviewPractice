#ifndef NODE_H
#define NODE_H
#include <iostream>


using namespace std;

template<class T>
class Node {
    public:
        Node();
        Node(const T& item, Node<T>* nextptr = NULL);
        T data;
        Node<T>* NextNode();
        void InsertAfter(Node<T>* n);
        Node<T>* DeleteAfter();
        Node<T>* GetNode(const T& item, Node<T>* nextptr = NULL);
    private:
        Node<T>* next;
};

#endif
