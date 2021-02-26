#include "Queue.h"
#include "Node.h"

Queue::Queue(){
    front = nullptr;
}

void Queue::enqueue(char data){
    front = new Node(data, front);
}

char Queue::dequeue(){
    Node *temp;
    char data{};
    if(front != nullptr){
        data = front->getData();
        temp = front;
        front = front->getNext();
        delete(temp);
    }

    return data;
}

bool Queue::isEmpty(){
    return front == nullptr;
}