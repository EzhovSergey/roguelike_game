#include "../h/Controls.h"

void Controls::inputEnter() {
    exit = false;
    up = false;
    down = false;
    left = false;
    right = false;
    auto key = terminal_read();
    if (key == TK_CLOSE) exit = true;
    if (key == TK_UP) up = true;
    if (key == TK_DOWN) down = true;
    if (key == TK_RIGHT) right = true;
    if (key == TK_LEFT) left = true;
}

bool Controls::isExit() const { return exit; }
bool Controls::isUp() const { return up; }
bool Controls::isDown() const { return down; }
bool Controls::isLeft() const { return left; }
bool Controls::isRight() const { return right; }