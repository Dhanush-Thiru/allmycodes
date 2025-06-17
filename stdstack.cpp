#include <iostream>
using namespace std;

#define MAX 100

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top >= MAX - 1) return;
        arr[++top] = value;
    }

    void pop() {
        if (top < 0) return;
        top--;
    }

    int peek() {
        if (top < 0) return -1;
        return arr[top];
    }

    bool isEmpty() {
        return (top < 0);
    }

    void display() {
        if (isEmpty()) return;

        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top element is: " << s.peek() << endl;

    s.pop();
    s.display();

    return 0;
}
