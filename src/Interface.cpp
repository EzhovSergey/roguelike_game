#include "../include/Interface.h"

void Interface::movePlayer() {
    if (controls_.isPressUp()) upStep();
    if (controls_.isPressDown()) downStep();
    if (controls_.isPressRight()) rightStep();
    if (controls_.isPressLeft()) leftStep();
}

void Interface::upStep() {
    if (player_.getPositionY() > 0) {
        player_.setPositionY(player_.getPositionY() - 1);
        player_.setStep(1);
    }
}

void Interface::downStep() {
    if (player_.getPositionY() < window_.getHeightWindow() - 1) {
        player_.setPositionY(player_.getPositionY() + 1);
        player_.setStep(1);
    }
}

void Interface::rightStep() {
    if (player_.getPositionX() < window_.getWidthWindow() - 1) {
        player_.setPositionX(player_.getPositionX() + 1);
        player_.setStep(1);
    }
}

void Interface::leftStep() {
    if (player_.getPositionX() != 0) {
        player_.setPositionX(player_.getPositionX() - 1);
        player_.setStep(1);
    }
}

void Interface::collectMoney() {
    for (auto it = window_.getList().begin(); it != window_.getList().end(); ++it) {
        if ((*it).x_ == player_.getPositionX() && (*it).y_ == player_.getPositionY()) {
            window_.getList().erase(it);
            player_.setMoney(1);
        }
    }
}