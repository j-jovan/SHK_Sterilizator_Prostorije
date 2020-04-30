#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SD.h>
#include <SPI.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

File myFile;



void setup()
{

}


void loop()
{
  LCD();
  SDCard();

}
