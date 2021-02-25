#include "Ghost.h"

Ghost::Ghost(int xpos, int ypos, char look) : Entity(xpos, ypos, look){
    movementMode = 's';
}

void Ghost::respawn(){
    x = defaultX;
    y = defaultY;
}