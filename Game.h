#pragma once
#define MAX_HEIGHT  31
#define MAX_WIDTH   28
class Entity;
class Pacman;
class RedGhost;
class PinkGhost;
class BlueGhost;
class OrangeGhost;

class Game{
private:
    char board[MAX_HEIGHT][MAX_WIDTH];
    Pacman *pacman;
    RedGhost *blinky;
    PinkGhost *pinky;
    BlueGhost *inky;
    OrangeGhost *clyde;
public:
    Game();
    void runGame();
    char getItemAt(int,int);
    Entity *getEntityAt(int, int);
    void setItemAt(int,int,char);
    void print();
};