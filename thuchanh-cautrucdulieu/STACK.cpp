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
int pop() {
    if (isempty())
        return 0;
    else {
        top--;
        return top;
    }
}
void print() {
    for (int i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }
}
int TOP() {
    return a[top];
}
int size() {
    return top + 1;
}
int main()
{
    push(41); 
    push(23);
    push(4);
    push(14);
    push(56);
    push(1); 
    print();
    cout << endl;
    cout << "size = " << size();
    return 0;
}


