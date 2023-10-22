//Implement an Array Stack
#include <iostream>
#include <vector>
using namespace std;

class ArrayStack {
private:
    vector<int> data;
    int top;

public:
    ArrayStack() : top(-1) {}

    void push(int value) {
        data.push_back(value);
        top++;
    }

    void pop() {
        if (top >= 0) {
            data.pop_back();
            top--;
        }
    }

    int peek() const {
        if (top >= 0) {
            return data[top];
        } else {
            cerr << "Stack is empty." << endl;
            return -1; // Assuming -1 as an invalid value for simplicity
        }
    }

    bool isEmpty() const {
        return top == -1;
    }
};

int main() {
    ArrayStack stack;

    int size;
    cout << "Enter the number of elements to push onto the stack: ";
    cin >> size;

    cout << "Enter elements to push onto the stack: ";
    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        stack.push(value);
    }

    cout << "Top of the stack: " << stack.peek() << endl;

    stack.pop();
    stack.pop();

    cout << "Is the stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
