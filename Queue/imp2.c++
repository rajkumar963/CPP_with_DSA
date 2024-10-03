#include <bits/stdc++.h>
using namespace std;

// Implementation of queue using circular array (circular queue)
class Queue {
    int *arr;
    int front, rear, size;

public:
    Queue(int n) {
        arr = new int[n];
        front = rear = -1;
        size = n;
    }

    // Check if the queue is empty
    bool IsEmpty() {
        return front == -1;
    }

    // Check if the queue is full
    bool IsFull() {
        return (rear + 1) % size == front;
    }

    // Push element into queue
    void push(int x) {
        if (IsFull()) {
            cout << "Queue is overflow" << endl;
            return;
        }

        if (IsEmpty()) {
            front = rear = 0; // Initialize front and rear when adding the first element
        } else {
            rear = (rear + 1) % size;
        }

        arr[rear] = x;
        cout << "Pushed " << x << " into queue" << endl;
    }

    // Pop element from queue
    void pop() {
        if (IsEmpty()) {
            cout << "Queue is underflow" << endl;
            return;
        }

        cout << "Popped " << arr[front] << endl;
        if (front == rear) {
            front = rear = -1; // Reset queue to empty state if last element is popped
        } else {
            front = (front + 1) % size;
        }
    }

    // Start element of queue
    int start() {
        if (IsEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            return arr[front];
        }
    }
};

int main() {
    Queue q(5);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    q.pop();
    q.push(234);
    cout << "Top element: " << q.start() << endl;

    return 0;
}
