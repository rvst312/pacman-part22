#pragma once
#include "ConsoleUtils.h"
#include "Map.h"
#include "TimeManager.h"

#include <stdlib.h>
#include <time.h>

class Enemy
{
public:
    COORD position;
private:
    char character = 'E'
    ConsoleUtils::CONSOLE_COLOR foreground = ConsoleUtils::CONSOLE_COLOR::DARK_RED
    ConsoleUtils::CONSOLE_COLOR background = ConsoleUtils::CONSOLE_COLOR::BLACK
    
public:
    Enemy(COORD spawn);
    
    void Logic(Map* pacman_map);
    void Draw();
    
};

