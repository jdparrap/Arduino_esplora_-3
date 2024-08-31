
#include <Esplora.h>

void setup() {
  Serial.begin(9600);
  Esplora.begin();
}

void loop() {
  int buttonA = Esplora.readButton(Esplora.BUTTON_A);
  int buttonB = Esplora.readButton(Esplora.BUTTON_B);

  if (buttonA == 1) {
    Esplora.writeRGB(0, 0, 255);
    Serial.println("Botón A Presionado: Azul");
  } else if (buttonB == 1) {
    Esplora.writeRGB(255, 0, 0);
    Serial.println("Botón B Presionado: Rojo");
  } else {
    Esplora.writeRGB(0, 0, 0);
  }

  delay(100);
}
