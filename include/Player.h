#ifndef MAIN_CPP_PLAYER_H
#define MAIN_CPP_PLAYER_H

class Player {
    const char symbol_ = '@';
    int x_, y_;
    int money_ = 0;
    int countStep_ = 0;
public:
    Player(int x = 1, int y = 1) : x_(x), y_(y) {}

    int getPositionX() const;

    int getPositionY() const;

    void setPositionX(int x);

    void setPositionY(int y);

    void setStep(int step);

    void setMoney(int money);

    void drawPlayer() const;

    void showMoney() const;

    void showStep() const;
};

#endif
