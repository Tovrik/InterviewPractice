#include <iostream>
#include "LinkedList.h"


LinkedList::LinkedList() {
    head = new node;
    head->next = NULL;
    head->data = 0;
}

void LinkedList::add(int y) {
    node *end;
    end = new node;
    end->data = y;
    end->next = NULL;
    node *n;
    n = this->head;
    while(n->next != NULL) {
        n = n->next;
    }
    n->next = end;
}

void LinkedList::remove() {
    node *n1, *n2;
    if(this->head->next != NULL && this->head->next->next != NULL) {
        n1 = this->head->next;
        n2 = this->head->next->next;

        this->head->next = n2;
        delete n1;
    }
}

void LinkedList::removeAt(int index) {
    node *n;
    n = this->head;
    node *temp;
    if(index > this->size()) {
        return;
    }
    while(index != 0) {
        n = n->next;
        index--;
    }
    temp = n->next->next;
    delete n->next;
    n->next = temp;
}

int LinkedList::peek() {
    return this->head->next->data;
}

int LinkedList::size() {
    node *n;
    n = this->head;
    int count = 0;
    while(n->next != NULL) {
        n = n->next;
        count++;
    }
    return count;
}

int LinkedList::get(int index) {
    node *n;
    n = this->head;
    if(index > this->size()) {
        return NULL;
    }
    index--;
    while(index != 0) {
        n = n->next;
        index--;
    }
    return n->data;
}

void LinkedList::print() {
    node *n;
    n = this->head;
    n = n->next;
    while(n->next != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << n->data << endl;
}



