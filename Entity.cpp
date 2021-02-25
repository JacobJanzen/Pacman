#include "Entity.h"

Entity::Entity(int xpos, int ypos, char look) : 
    x(xpos), y(ypos), appearance(look), defaultX(xpos), defaultY(ypos){}

int Entity::getX(){
    return x;
}

int Entity::getY(){
    return y;
}