#pragma once
class Node;

class Queue{
private:
    Node *front;
public:
    Queue();
    void enqueue(char);
    char dequeue();
    bool isEmpty();
};