#pragma once

class Node{
private:
    char data;
    Node *next;
public:
    Node();
    Node(char, Node *);
    void setNext(Node *);
    void setData(char);
    Node *getNext();
    char getData();
};