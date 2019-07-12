# SUBTITLE-Iot-based-smart-application-for-hearing-impaired
There are several approaches to help the hearing impaired through smart applications and web services. Here we propose a perfect substitute for the latter by using the IOT Technology. IOT is one of the emerging technologies these days. We design a IOT device and connect it with the application through which the input is given and then the input voice gets converted to text and displayed on a smart
##INTRODUCTION
There are several approaches to help the hearing impaired through smart applications and web services. Here we propose a perfect substitute for the latter by using the IOT Technology. IOT is one of the emerging technologies these days. We design a IOT device and connect it with the application through which the input is given and then the input voice gets converted to text and displayed on a smart IOT Glass. 
###1.1 OBJECTIVE:
The objective of this project is to make the process interesting and reducing the real time captioning of the speech of nearest person.
The work that is to done in this project are:
•	Make it simple to use and interactive.
•	To use smart application and the IoT device.
•	Convert the speech to text real time.
•	Display on the smart glasses IoT .
###1.2 EXISTING SYSTEMS
                                                                           
There’s no stopping technology from revolutionizing the way we live our lives and assisting those who need help. This is evident with the increasing ownership of the ‘Internet of Things’ (IoT) technologies. The existing systems Earfy or Live caption, apps turn speech into subtitles. Ideal for  persons who are deaf or hard of hearing. With a Tablet or Smartphone on the table and you can read what is being said. The Earfy app converts voice into text. Spoken text is shown as subtitles on your tablet or Smartphone. The app was developed for persons with deafness. Our system tries to remove the barriers faced in communication between deaf and normal person.

###1.3 DRAWBACKS OF EXISITING SYSTEMS
It is important to know the loopholes and drawbacks of the existing system so as to compare it in contrast to the proposed system. 
•	Requires a lot of manual work. 
•	Not so interesting.

###1.4 PROPOSED SYSTEM
In the PROPOSED SYSTEM, the speech is automatically converted to the text preferably in the English and visualized onto the footer of the smart screen enabling ease for the deaf and making them communicate with the normal.

###1.5 ADVANTAGES OF THE PROPOSED SYSTEM
 The advantages of proposed system are:
•	Can be accessed across the globe.
•	Absorbing and Captivating. 
•	Interactive. 

##SYSTEM REQUIREMENTS
There are various requirements which are required to complete the proposed system to get into working condition. The required things are divided into two major requirements. 
2.1 SOFTWARE REQUIRMENTS:
•	Arduino IDE
The Arduino Integrated Development Environment - or Arduino Software (IDE) - contains a text editor for writing code, a message area, a text console, a toolbar with buttons for common functions and a series of menus. It connects to the Arduino and Genuino hardware to upload programs and communicate with them.

•	Google Speech to Text API
Google Cloud Speech API enables developers to convert audio to text by applying powerful neural network models in an easy to use API. The API recognizes over 110 languages and variants, to support your global user base. You can transcribe the text of users dictating to an application’s microphone, enable command-and-control through voice, or transcribe audio files, among many other use cases. Recognize audio uploaded in the request, and integrate with your audio storage on Google Cloud Storage, by using the same technology Google uses to power its own products.








###2.2HARDWARE REQUIREMENTS
•	Windows 8/10
•	Intel®core ™ i5 processor
•	4 GB RAM
•	64 bit operating system
•	Arduino UNO

The Arduino UNO is a widely used open-source microcontroller board based on  the ATmega328P microcontroller and developed by Arduino.cc. The board is equipped with sets of digital and analog input/output (I/O) pins that may be interfaced to various expansion boards (shields) and other circuits. The board features 14 Digital pins and 6 Analog pins. It is programmable with the Arduino IDE(Integrated Development Environment) via a type B USB cable. It can be powered by a USB cable or by an external 9 volt battery, though it accepts voltages between 7 and 20 volts. It is also similar to the Arduino Nano and Leonardo. The hardware reference design is distributed under a Creative Commons Attribution Share-Alike 2.5 license and is available on the Arduino website. Layout and production files for some versions of the hardware are also available. "Uno" means one in Italian and was chosen to mark the release of Arduino Software (IDE) 1.0. The Uno board and version 1.0 of Arduino Software (IDE) were the reference versions of Arduino, now evolved to newer releases. The Uno board is the first in a series of USB Arduino boards, and the reference model for the Arduino platform. The ATmega328 on the Arduino Uno comes preprogrammed with a bootloader that allows to upload new code to it without the use of an external hardware programmer.


•	Bluetooth HC-05
 
                  
HC‐05 module is an easy to use Bluetooth SPP (Serial Port Protocol) module, designed for transparent wireless serial connection setup. The HC-05 Bluetooth Module can be used in a Master or Slave configuration, making it a great solution for wireless communication. This serial port Bluetooth module is fully qualified Bluetooth V2.0+EDR (Enhanced Data Rate)3Mbps Modulation with complete 2.4GHz radio transceiver and baseband. It uses CSR Blue core 04‐External single chip Bluetooth system with CMOS technology and with AFH (Adaptive Frequency Hopping Feature).
The Bluetooth module HC-05 is a MASTER/SLAVE module. By default the factory setting is SLAVE. The Role of the module (Master or Slave) can be configured only by AT COMMANDS. The slave modules cannot initiate a connection to another Bluetooth device, but can accept connections. Master module can initiate a connection to other devices. The user can use it simply for a serial port replacement to establish connection between MCU and GPS, PC to your embedded project, etc. Just go through the datasheet for more details.





•	OLED SSD-1306
 
                   
An Organic Light Emitting Diode(OLED) is a display device which has self light-emitting technology composed of a thin, multi-layered organic film placed between an anode and cathode. In contrast to LCD technology, OLED does not require a back-light. OLED offers wide viewing range, almost 180 degree from left to right and up to down and also consumes less power than existing LCD's. OLEDs have been used in television screens, computer monitors, mobile phones, Personal Digital Assistants, etc. In the following, OLED with two different types of interfaces are discussed. OLED Display are small, only about 1.3" diagonal, but very readable due to the high contrast of an OLED. This display is made of 128x64 individual white OLED pixels, each one is turned on or off by the controller chip. Because the display makes its own light, no backlight is required. This reduces the power required to run the OLED and is why the display has such high contrast; we really like this miniature display for its crispness! A major area of research is the development of white OLED devices for use in solid-state lighting applications.


•	LCD REES-52
 
                              
A liquid-crystal display (LCD) is a flat-panel display or other electronically modulated optical device that uses the light-modulating properties of liquid crystals. Liquid crystals do not emit light directly, instead using a backlight or reflector to produce images in color or monochrome.LCDs are available to display arbitrary images (as in a general-purpose computer display) or fixed images with low information content, which can be displayed or hidden, such as preset words, digits, and 7-segment displays, as in a digital clock. They use the same basic technology, except that arbitrary images are made up of a large number of small pixels, while other displays have larger elements.

•	Potentiometer


##Modules Used

3.4 Module Description
3.4.1 Speech input to the Application
The input is given through an android application as voice , The application checks if the device is connected or not, If the device is connected , The speech input of the person speaking is taken and is converted to text using the Google API
.  
3.4.2Text from application to the Arduino UNO
The converted speech-to-text is sent to the Arduino UNO board. The board processes the text received on a first come basis and sends to the displays that are connected to the board .

3.4.3Arduino UNO to the Smart Glasses
The OLED Display is attached to the prism , so whenever a text to be displayed is received it projects it onto the footer of the Smart Glasses.  





##SYSTEM IMPLEMENTATION
System implementation is most important part of project where we combine all the planning and design. The planning and design consist of data flow diagram, activity diagram, use case diagram, sequence diagram in terms of code.
4.1 METHODOLOGY
Methodology is a system of methods used in a particular area of study or activity.
Here in this project there are five modules used
•	Speech Input to the Application
•	Text from the Application to the Arduino UNO
•	Arduino UNO to the OLED Display(Smart Glasses)
      1. Open the Android Application that is designed for Speech to text Conversion. 
 



2. Navigate to Connect and the connect the IOT Arduino Kit with Bluetooth. 

3. Open the Arduino IDE , click on create new file. 

4. Open the file and write the required code for the Text to be sent to the OLED and LCD Displays.

 5. Transfer the code from the Arduino IDE to the Arduino UNO Kit by uploading the code. 
 6. Now, Board receives the text and processes it to the LCD 
 7. The OLED Display is connected to the prism inorder to the project the text that is being shown in the LCD.
 8. The OLED Display receives the text that is projected from the Prism and displays the Output. 







##4.2 ALGORITHM
•	Initialize the header files for the LCD display and serial numbers of the pins. 
•	Declare the pin numbers as the integers. 
•	Call the pin numbers into the LCD Display
•	Call the OLED Libraries. 
•	Call the pin numbers for the Bluetooth module. 
•	Check if there is Bluetooth connectivity and print “status completed” if there is connectivity. 
•	Declare the function draw() in order to display the speech input as text. 
•	Declare the function setup() to start and initialize all the modules required for the app. 
•	Declare the function loop() to avoid re-initializing and app and continue the functions and to implement delay. 
•	In function draw():
•	Set the font and the position of text.
•	Print the text. 
•	In function setup():
•	Begin LCD, Bluetooth and serial numbers. 
•	In function Loop().
•	Check for Bluetooth availability.
•	Check for voice length.




##4.2.1 Technique used
Google Speech to Text API
▸ Using voice as Input
▸ Input converts to text using the Android application

##4.3 SAMPLE CODE
`#include <SoftwareSerial.h>
#include <LiquidCrystal.h>
#include "U8glib.h"
constintrs = 12, en = 9, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystallcd(rs, en, d4, d5, d6, d7);
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);
SoftwareSerialBT(11, 10); 
String voice = "Status:Completed";
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
delay(1000)
voice="";}}
`





























