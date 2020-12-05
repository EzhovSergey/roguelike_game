#include <BearLibTerminal.h>

#include "../include/MathUtil.h"

int printNumeral(int x, int y, int number) {
    if (!number) return 0;
    int count = printNumeral(x, y, number / 10);
    terminal_put(x + count, y, (number % 10) + 48);
    return ++count;
}

void printNumber(int x, int y, int number) {
    if (!number) {
        terminal_put(x, y, 48);
        return;
    }
    printNumeral(x, y, number);
}
