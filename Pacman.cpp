#include "Pacman.h"
#include "Ghost.h"
#include "Game.h"

#define EMPTY   ' '
#define DOT     '.'
#define BIGDOT  'O'

Pacman::Pacman(int xpos, int ypos) : Entity(xpos,ypos,PACMAN){
    ghostThreat = false;
    lives = 3;
    score = 0;
}

bool Pacman::isThreat(){
    return ghostThreat;
}

void Pacman::move(char direction){
    Ghost *ghost = nullptr;
    int newX = -2, newY = -2;
    switch (direction){
    case UP:
        newX = x;
        newY = y-1;
        break;
    case LEFT:
        newX = x-1;
        newY = y;
        break;
    case DOWN:
        newX = x;
        newY = y+1;
        break;
    case RIGHT:
        newX = x+1;
        newY = y;
        break;
    }

    calcNewPos(newX, newY, ghost);
}

void Pacman::calcNewPos(int newX, int newY, Ghost *ghost){
    if(newX>=0 && newX < MAX_WIDTH && newY >= 0 && newY < MAX_HEIGHT){
        char oldChar = game->getItemAt(newX,newY);
        game->setItemAt(x,y,PACMAN);
        ghost = dynamic_cast<Ghost *>(game->getEntityAt(newX,newY));

        if(ghost != nullptr)
            eat(ghost);
        else if(oldChar == DOT){
            score++;
            x = newX;
            y = newY;
        }else if(oldChar == BIGDOT){
            ghostThreat = true;
            x = newX;
            y = newY;
        }else if(oldChar == EMPTY){
            x = newX;
            y = newY;
        }else
            game->setItemAt(newX,newY,oldChar);
    }else if(newX==-1){
        x = MAX_WIDTH-1;
        y = newY;
        game->setItemAt(x,y,PACMAN);
    }else if(newY==MAX_WIDTH){
        x = 0;
        y = newY;
        game->setItemAt(x,y,PACMAN);
    }
}

void Pacman::respawn(){
    if(lives-- > 0){
        x = defaultX;
        y = defaultY;
    }else;
        // add gameover
}

void Pacman::eat(Ghost *ghost){
    if(isThreat)
        ghost->respawn();
    else
        respawn();
}