void SDCard() {

  String imeFajla = "test.txt";


  Serial.begin(9600);
  while (!Serial) {
  }

  Serial.print("Provera SD kartice...");
  if (!SD.begin(10)) {
    Serial.println("Neispravna SD kartica");
    while (1);
  }
  Serial.println("Ispravna SD kartica");

  myFile = SD.open(imeFajla, FILE_WRITE);
  if (myFile) {
    Serial.println("Pisanje na karticu " + z);
    myFile.println("Test");
    myFile.println("....");

    /*
      for (int i = 0; i < 20; i++) {
      myFile.println(i);
      }
    */

    myFile.close();
    Serial.println("Upisivanje zavrseno.");
  } else {
    Serial.println("Greska prilikom otvaranja fajla" + imeFajla);
  }
  Serial.println("...........");
  delay(1000);
}
