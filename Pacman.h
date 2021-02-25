#pragma once
#include "Entity.h"
#define PACMAN '>'

class Pacman : public Entity{
private:
    bool ghostThreat;
    int lives;
    int score;
    void eat(Ghost *);
    void calcNewPos(int,int,Ghost *);
public:
    Pacman(int, int);
    bool isThreat();
    virtual void move(char);
    virtual void respawn();
};