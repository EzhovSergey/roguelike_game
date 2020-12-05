#include <BearLibTerminal.h>

#include "Player.h"
#include "Controls.h"
#include "Interface.h"
#include "Pointer.h"
#include "MathUtil.h"

int main() {
    terminal_open();

    Window window;
    Player player;
    Controls controls;
    Interface interface(window, player, controls);

    terminal_refresh();

    window.generateMoney();
    window.drawMoney();

    player.drawPlayer();
    player.showMoney();
    player.showStep();

    terminal_refresh();

    while (true) {
        terminal_clear();

        controls.update();

        if (controls.isExit()) break;

        interface.movePlayer();
        interface.collectMoney();

        player.drawPlayer();
        window.drawMoney();
        player.showMoney();
        player.showStep();

        terminal_refresh();
    }
}
