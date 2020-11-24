#pragma once

class Controls {
private:
    bool exit = false;
    bool up = false;
    bool down = false;
    bool left = false;
    bool right = false;
public:
    bool isExit() const;
    bool isUp() const;
    bool isDown() const;
    bool isLeft() const;
    bool isRight() const;

    void inputEnter();
};