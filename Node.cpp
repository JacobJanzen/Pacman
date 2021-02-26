#include "Node.h"

Node::Node(){
    data = 0;
    next = nullptr;
}

Node::Node(char newData, Node *nextNode) : data(newData), next(nextNode){}

void Node::setNext(Node *newNode){
    next = newNode;
}

void Node::setData(char newData){
    data = newData;
}

Node *Node::getNext(){
    return next;
}

char Node::getData(){
    return data;
}