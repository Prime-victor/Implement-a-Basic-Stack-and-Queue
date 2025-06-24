#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <queue>

template <typename T>
class Queue {
private:
    std::queue<T> items;

public:
    void enqueue(T item) {
        items.push(item);
    }

    T dequeue() {
        if (!items.empty()) {
            T front = items.front();
            items.pop();
            return front;
        } else {
            throw std::out_of_range("Queue is empty");
        }
    }

    void display() {
        std::queue<T> temp = items; // copy to avoid modifying the queue
        std::cout << "Queue (front to back): ";
        while (!temp.empty()) {
            std::cout << temp.front() << " ";
            temp.pop();
        }
        std::cout << std::endl;
    }

    bool isEmpty() {
        return items.empty();
    }
};

#endif
