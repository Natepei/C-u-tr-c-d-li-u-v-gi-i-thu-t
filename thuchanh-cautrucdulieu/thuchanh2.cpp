#include <iostream>
#define MAX 100
using namespace std;
int top = -1;
int a[MAX];
bool isfull() {
    if (top >= MAX - 1)
        return true;
    else
        return false;
}
bool isempty() {
    if (top == -1)
        return true;
    else
        return false;
}
void push(int data) {
    if (isfull())
        return;
    else {
        top++;
        a[top] = data;
    }
}
void pop() {
    if (isempty())
        return;
    else {
        top--;
    }
}
int size() {
    return top + 1;
}
int peak() {
    return a[top];
}
int main()
{
    push(41);
    cout << peak() << endl;
    push(23);
    cout << peak() << endl;
    push(4);
    cout << peak() << endl;
    push(14);
    cout << peak() << endl;
    push(56);
    cout << peak() << endl;
    push(1);
    cout << peak() << endl;
    return 0;
}


