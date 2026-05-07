
#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
  Serial.println("RFID Summer Camp System Ready");
}

void loop() {
  if (!rfid.PICC_IsNewCardPresent()) return;
  if (!rfid.PICC_ReadCardSerial()) return;

  String cardID = "";

  for (byte i = 0; i < rfid.uid.size; i++) {
    cardID += String(rfid.uid.uidByte[i], HEX);
  }

  Serial.print("Card ID: ");
  Serial.println(cardID);

  if (cardID == "a1b2c3d4") {
    Serial.println("Welcome John");
    Serial.println("Attendance Recorded");
  } else {
    Serial.println("Unknown Card");
  }

  delay(2000);
}
