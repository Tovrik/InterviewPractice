/*
Implement a function to check if a linked list is a palindrome.
*/
#include <iostream>
#include <unordered_map>
#include "LinkedList.cpp"
#include <stack>

using namespace std;

bool palindrome(LinkedList *list) {
    node *n1, *n2;
    n1 = list->head->next;
    n2 = list->head->next;
    stack<int> mystack;
    int count = 0;
    while(n2 != NULL && n2->next!= NULL) {
        mystack.push(n1->data);
        n1 = n1->next;
        n2 = n2->next->next;
        count++;
        cout << count << endl;
    }
    if(n2 != NULL) {
        n1 = n1->next;
    }
    //n1 will be at the midpoint
    while(n1->next != NULL) {
        if(mystack.top() != n1->data) {
            return false;
        }
        mystack.pop();
        n1 = n1->next;
    }
    return true;
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
    list->add(6);
    list->add(5);
    list->add(4);
    list->add(3);
    list->add(2);
    list->add(1);

    list->print();

    cout << palindrome(list) << endl;
}
