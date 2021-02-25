#pragma once
#include "Entity.h"

class Ghost : public Entity{
private:
    char movementMode;
    int targetX;
    int targetY;
    Pacman *pacman;
public:
    Ghost(int, int, char);
    virtual void respawn();
    virtual void move(char);
    virtual void calculateNextPos()=0;
};