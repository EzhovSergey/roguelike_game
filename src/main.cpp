#include <BearLibTerminal.h>
#include "cpp/Controls.cpp"
#include "cpp/Person.cpp"

int main() {
  terminal_open();
  terminal_set("window: size=80x25, title: 'Rogalik'");

  Controls keyboard;
  Person person(keyboard);
  person.updatePlayer();

  terminal_refresh();

  while (true) {
      terminal_clear();
      keyboard.inputEnter();
      if(keyboard.isExit()) break;
      person.updatePlayer();
      terminal_refresh();
  }

  terminal_close();
}