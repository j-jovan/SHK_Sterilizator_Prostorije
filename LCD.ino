void LCD()
{
  lcd.begin(); //Ako displej nije povezan, ne radi ostali kod. Treba neki try catch
  lcd.backlight();
  lcd.print("Red 123");
  lcd.setCursor (5, 1);
  lcd.print("Red 234");
  lcd.setCursor (10, 2);
  lcd.print("Red 3");
  lcd.setCursor (15, 3);
  lcd.print("Red 4");
}
