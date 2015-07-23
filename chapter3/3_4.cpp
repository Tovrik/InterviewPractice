/*
Implement a MyQueue class which implements a queue using two stacks.
*/

#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
    private:
        stack<int> in;
        stack<int> out;
    public:
        MyQueue();
        bool empty();
        int size();
        void shiftStack();
        void push(int val);
        int pop();
        int peek();
};

MyQueue::MyQueue() {}

bool MyQueue::empty() {
    if(out.size() + in.size() == 0)
        return true;
    else
        return false;
}

int MyQueue::size() {
    return (in.size() + out.size());
}

void MyQueue::push(int val) {
    in.push(val);
}

void MyQueue::shiftStack() {
    if(out.empty()) {
        while(!in.empty()) {
            out.push(in.top());
            in.pop();
        }
    }
}

int MyQueue::peek() {
    shiftStack();
    return out.top();
}

int MyQueue::pop() {
    shiftStack();
    int temp = out.top();
    out.pop();
    return temp;
}


int main() {
    MyQueue mq;
    mq.push(1);
    mq.push(2);
    mq.push(3);
    mq.push(4);
    mq.push(5);
    mq.push(6);

    cout << "size: " << mq.size() << endl;

    cout << "peek: " << mq.peek() << endl;
    cout << mq.pop() << endl;
    cout << mq.pop() << endl;
    mq.push(100);
    cout << mq.pop() << endl;
    cout << mq.pop() << endl;
    cout << mq.pop() << endl;
    cout << mq.pop() << endl;
    cout << mq.pop() << endl;
}
