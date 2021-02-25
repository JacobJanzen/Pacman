#pragma once
#define UP      'w'
#define LEFT    'a'
#define DOWN    's'
#define RIGHT   'd'

class Game;

class Entity{
private:
    char appearance;
protected:
    int x;
    int y;
    int defaultX;
    int defaultY;
    Game *game;
public:
    Entity(int, int, char);
    int getX();
    int getY();
    virtual void move(char)=0;
    virtual void respawn()=0;
};