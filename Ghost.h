#pragma once
#include "Entity.h"

class Pacman;
class Queue;

class Ghost : public Entity{
private:
    char movementMode;
    int targetX;
    int targetY;
    Pacman *pacman;
    Queue *nextMoves;
public:
    Ghost(int, int, char);
    virtual void respawn();
    virtual void move(char);
    virtual void calculateNextPos()=0;
};