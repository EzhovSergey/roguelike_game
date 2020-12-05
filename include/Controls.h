#ifndef MAIN_CPP_CONTROLS_H
#define MAIN_CPP_CONTROLS_H

class Controls {
    bool is_exit = false;
    bool is_press_up = false;
    bool is_press_down = false;
    bool is_press_left = false;
    bool is_press_right = false;
public:
    bool isExit() const;

    bool isPressUp() const;

    bool isPressDown() const;

    bool isPressLeft() const;

    bool isPressRight() const;

    void update();
};

#endif
