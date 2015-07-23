/*
Write a program to sort a stack such that the smallest items are on the top. You can use an additional temporary
stack, but you may not copy the elements into any other data structure (such as an array). The stack supports the
following operations: push, pop, top, empty
*/

#include <iostream>
#include <stack>

using namespace std;

stack<int> sortStack(stack<int> stk1) {
    int tempInt;
    stack<int> stk2;
    while(!stk1.empty()) {
        if(stk2.empty() || stk1.top() < stk2.top()) {
            stk2.push(stk1.top());
            stk1.pop();
        }
        else if(stk1.top() > stk2.top()) {
            tempInt = stk1.top();
            stk1.pop();
            while(!stk2.empty()) {
                if(stk2.top() < tempInt) {
                    stk1.push(stk2.top());
                    stk2.pop();
                }
                else { //stk2.top() > tempInt
                    stk1.push(tempInt);
                    stk1.push(stk2.top());
                    stk2.pop();
                }
            }
        }
    }
    return stk2;
}


int main() {
    stack<int> the_stack;
    stack<int> ret_stack;
    the_stack.push(13);
    the_stack.push(6);
    the_stack.push(5);
    the_stack.push(21);
    the_stack.push(1);
    the_stack.push(15);
    ret_stack = sortStack(the_stack);

    while(!ret_stack.empty()) {
        cout << ret_stack.top() << endl;
        ret_stack.pop();
    }
}
