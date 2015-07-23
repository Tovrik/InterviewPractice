#include "Node.h"

template<class T>
Node<T>::Node() {}

template<class T>
Node<T>::Node(const T& item, Node<T>* nextptr) {
    this->data = item;
    this->next = nextptr;
}

template<class T>
Node<T>*Node<T>:: NextNode() {
    return this->next;
}

template<class T>
void Node<T>::InsertAfter(Node<T>* n) {
    n->next = this->next;
    this->next = n;
}

template<class T>
Node<T>*Node<T>::DeleteAfter() {
    Node<T>* nextNode = next;
    if(next != NULL) {
        next = next->next;
    }
    return tempNode;
}

template<class T>
Node<T>*Node<T> GetNode(const T& item, Node<T>* nextptr) {
    Node<T>* retnode;
    retnode = new Node<T>(item, nextptr);
    if(retnode == NULL) {
        exit(1);
    }
    return retnode;
}
