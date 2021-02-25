#pragma once
#include "Entity.h"

class Ghost : public Entity{
private:
    char movementMode;
    int targetX;
    int targetY;
public:
    Ghost(int, int);
    virtual void respawn();
    virtual void move(char)=0;
    virtual void calculateNextPos()=0;
};