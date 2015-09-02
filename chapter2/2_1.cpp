/*
Write code to remove duplicates from an unsorted linked list.
*/
#include <iostream>
#include <unordered_map>
#include "LinkedList.cpp"

using namespace std;

void removeDuplicates(LinkedList *list) {
    node *n;
    n = list->head->next;
    unordered_map<int,int> mymap;
    int index = 0;
    while(n != NULL) {
        cout << index << endl;
        unordered_map<int,int>::const_iterator got = mymap.find(n->data);
        if(got != mymap.end()) {
            list->removeAt(index);
            index--;
        }
        else {
            mymap.insert(make_pair<int,int>(n->data,1));

        }
        index++;
        n = n->next;
    }
}


//===========================================================

int main() {
    LinkedList *list;
    list = new LinkedList();
    list->add(6);
    list->add(7);
    list->add(8);
    list->add(7);
    list->add(5);
    list->add(7);
    list->add(7);
    list->add(4);
    list->add(7);
    list->add(19);
    list->add(7);
    list->add(7);

    list->print();
    removeDuplicates(list);
    list->print();
}
