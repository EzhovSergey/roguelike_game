#include "../h/Person.h"

void Person::changeXY() {
    if(keyboard.isUp()) upStep();
    if(keyboard.isDown()) downStep();
    if(keyboard.isLeft()) leftStep();
    if(keyboard.isRight()) rightStep();
}

void Person::printPlayer() {
    terminal_put(x, y, img);
}

void Person::updatePlayer() {
    changeXY();
    printPlayer();
}

void Person::leftStep() {
    if(x > 0) x--;
}

void Person::rightStep() {
    if(x < 80 - 1) x++;
}

void Person::upStep() {
    if(y > 0) y--;
}

void Person::downStep() {
    if(y < 25 - 1) y++;
}