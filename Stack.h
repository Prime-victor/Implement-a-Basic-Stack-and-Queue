#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> items;

public:
    void push(T item) {
        items.push_back(item);
    }

    T pop() {
        if (!items.empty()) {
            T top = items.back();
            items.pop_back();
            return top;
        } else {
            throw std::out_of_range("Stack is empty");
        }
    }

    void display() {
        std::cout << "Stack (top to bottom): ";
        for (auto it = items.rbegin(); it != items.rend(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    }

    bool isEmpty() {
        return items.empty();
    }
};

#endif
