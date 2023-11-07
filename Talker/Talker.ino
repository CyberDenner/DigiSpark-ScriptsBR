#include "DigiKeyboardPtBr.h"
void setup() {
}

void loop() {
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.println("powershell");
  DigiKeyboardPtBr.delay(3000);
  DigiKeyboardPtBr.println("Add-Type -AssemblyName System.speech");
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.println("$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer");
  DigiKeyboardPtBr.delay(100);
  // Descomentar para usar uma voz feminina
  //DigiKeyboardPtBr.println("$speak.SelectVoice('Microsoft Zira Desktop')");
  //DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println("$speak.Speak(\"Here's a joke. Why do Java programmers wear glasses? Because they can't C#.\")");
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.print("exit");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  DigiKeyboardPtBr.sendKeyStroke(KEY_N);
  for (;;) {
    /*empty*/
  }

}
