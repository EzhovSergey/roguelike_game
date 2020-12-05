#ifndef MAIN_CPP_WINDOW_H
#define MAIN_CPP_WINDOW_H

#include <list>
#include "Pointer.h"

class Window {
    const int width = 55;
    const int height = 25;
    std::list<Pointer> positionsMoney;

    const int maxNumberMoneyOnField = 10;
public:
    int getWidthWindow() const;

    int getHeightWindow() const;

    void generateMoney();

    void drawMoney();

    std::list<Pointer>& getList();
};

#endif
