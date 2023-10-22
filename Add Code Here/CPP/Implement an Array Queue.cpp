//Implement an Array Queue
#include <iostream>
#include <vector>
using namespace std;

class ArrayQueue {
private:
    vector<int> data;
    int front, rear;

public:
    ArrayQueue() : front(0), rear(-1) {}

    void enqueue(int value) {
        data.push_back(value);
        rear++;
    }

    void dequeue() {
        if (!isEmpty()) {
            data.erase(data.begin());
            rear--;
        }
    }

    int peek() const {
        if (!isEmpty()) {
            return data[front];
        } else {
            cerr << "Queue is empty." << endl;
            return -1; // Assuming -1 as an invalid value for simplicity
        }
    }

    bool isEmpty() const {
        return front > rear;
    }
};

int main() {
    ArrayQueue queue;

    int size;
    cout << "Enter the number of elements to enqueue: ";
    cin >> size;

    cout << "Enter elements to enqueue: ";
    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        queue.enqueue(value);
    }

    cout << "Front of the queue: " << queue.peek() << endl;

    queue.dequeue();
    queue.dequeue();

    cout << "Is the queue empty? " << (queue.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
