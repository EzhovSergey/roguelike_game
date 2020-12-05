#include <BearLibTerminal.h>
#include <cstdlib>
#include <ctime>
#include <list>

#include "../include/Window.h"
#include "Pointer.h"

int Window::getWidthWindow() const { return width; }

int Window::getHeightWindow() const { return height; }

std::list<Pointer>& Window::getList() { return positionsMoney; }

void Window::generateMoney() {
    srand(time(NULL));
    for (int i = 0; i < maxNumberMoneyOnField; ++i) {
        positionsMoney.emplace_back(rand() % width, rand() % height);
    }
}

void Window::drawMoney() {
    for (auto it = positionsMoney.begin(); it != positionsMoney.end(); ++it) {
        terminal_put((*it).x_, (*it).y_, '$');
    }
}