#include <BearLibTerminal.h>

#include "../include/Player.h"

void printNumber(int x, int y, int number);


void Player::drawPlayer() const {
    terminal_put(x_, y_, symbol_);
}

int Player::getPositionX() const { return x_; }

int Player::getPositionY() const { return y_; }


void Player::setPositionX(int x) { x_ = x; }

void Player::setPositionY(int y) { y_ = y; }

void Player::setStep(int step) { countStep_ += step; }

void Player::setMoney(int money) { money_ += money; }

void Player::showMoney() const {
    terminal_print(62, 5, "Монеты: ");
    printNumber(70, 5, money_);
}

void Player::showStep() const {
    terminal_print(62, 3, "Шаги: ");
    printNumber(70, 3, countStep_);
}
