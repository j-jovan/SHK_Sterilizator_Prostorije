#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SD.h>
#include <SPI.h>
LiquidCrystal_I2C lcd(0x27, 20, 4);
#include <SoftwareSerial.h>
SoftwareSerial pmsSerial(2, 3); //tx rx

File myFile;
int z = 0;

struct pms5003data {
  uint16_t framelen;
  uint16_t pm10_standard, pm25_standard, pm100_standard;
  uint16_t pm10_env, pm25_env, pm100_env;
  uint16_t particles_03um, particles_05um, particles_10um, particles_25um, particles_50um, particles_100um;
  uint16_t unused;
  uint16_t checksum;
};

struct pms5003data data;

void setup()
{
  Serial.begin(115200);

  // sensor baud rate is 9600
  pmsSerial.begin(9600);
}


void loop()
{

  LCD();
  //SDCard();
  z++;
  PMS7003();

}
