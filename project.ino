
#include <SoftwareSerial.h>
#include <LiquidCrystal.h>
#include "U8glib.h"

const int rs = 12, en = 9, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);

SoftwareSerial BT(11, 10); 
String voice = "Welcome";


void draw(void) {
  // graphic commands to redraw the complete screen should be placed here  
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0,40); 
  // call procedure from base class, http://arduino.cc/en/Serial/Print

  u8g.println(voice);
}

void setup() {
 BT.begin(9600);

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // initialize the serial communications:
  Serial.begin(9600) ;
  
}
//-----------------------------------------------------------------------//  
void loop() {
  while (BT.available()){  //Check if there is an available byte to read
  delay(10); //Delay added to make thing stable 
  char c = BT.read(); //Conduct a serial read
  if (c == '#') {break;} //Exit the loop when the # is detected after the word
  voice += c; //Shorthand for voice = voice + c
  }  
  if (voice.length() > 0) {
   Serial.println(voice); 
   lcd.clear();
  lcd.print(voice);
    u8g.firstPage();  
  do {
    draw();
  } while( u8g.nextPage() );
  
 
  delay(500);
  delay(1000);
 
   

voice="";}} 
