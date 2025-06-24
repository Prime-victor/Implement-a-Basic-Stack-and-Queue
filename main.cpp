#include <iostream>
#include "Stack.h"
#include "Queue.h"

int main() {
    Stack<int> myStack;
    Queue<int> myQueue;

    // Stack operations
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.display();
    std::cout << "Popped from stack: " << myStack.pop() << std::endl;
    myStack.display();

    std::cout << "----------------------" << std::endl;

    // Queue operations
    myQueue.enqueue(100);
    myQueue.enqueue(200);
    myQueue.enqueue(300);
    myQueue.display();
    std::cout << "Dequeued from queue: " << myQueue.dequeue() << std::endl;
    myQueue.display();

    return 0;
}
