#include <iostream>
#define MAX 100
using namespace std;
int queue[MAX];
int top = 0;
int bot = 0;
void endqueue(int data) {
    if (bot == MAX)
        return;
    else {
        queue[bot++] = data;
    }
}
void dequeue() {
    if (top == bot) {
        return;
    }
    else {
        queue[top] = 0;
        top++;
    }
}
int TOP() {
    return queue[top];
}
void print() {
    if (top == -1)
        return;
    else {
        for (int i = top; i <= bot; i++)
            cout << queue[i] << " ";
            cout << endl;
    }
}
int main()
{
    endqueue(41);
    endqueue(23);
    endqueue(4);
    endqueue(14);
    endqueue(56);
    endqueue(1);
    cout << "Before" << endl;
    print();
    cout << endl;
    dequeue();
    dequeue();
    endqueue(55);
    cout << "After" << endl;
    print();
    return 0;
}

