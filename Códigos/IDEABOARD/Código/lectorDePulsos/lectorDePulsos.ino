#define USE_ARDUINO_INTERRUPTS true
#include <PulseSensorPlayground.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int PulseSensorPin = 33;  // Pin donde está conectado el sensor de pulso
const int LEDPin = 13;          // Pin donde está conectado el LED
const int Threshold = 3800;     // Ajusta el umbral para hacer menos sensible la detección

PulseSensorPlayground pulseSensor;
LiquidCrystal_I2C lcd(0x27, 16, 2); // Dirección I2C de la pantalla LCD (puede variar, ajusta si es necesario)

unsigned long lastBeatTime = 0;   // Tiempo del último latido detectado
const int debounceTime = 100;     // Retardo entre latidos en milisegundos

void setup() {
  Serial.begin(9600);            // Iniciar la comunicación serial
  Wire.begin(21, 22);              // Iniciar la comunicación I2C en los pines 21 y 22
  lcd.init();                      // Inicializar la pantalla LCD
  lcd.backlight();                 // Encender la luz de fondo de la pantalla LCD

  pinMode(LEDPin, OUTPUT);         // Configurar el pin del LED como salida
  digitalWrite(LEDPin, LOW);       // Asegurarse de que el LED esté apagado inicialmente

  pulseSensor.analogInput(PulseSensorPin);   // Configurar el pin del sensor
  pulseSensor.setThreshold(Threshold);       // Configurar el umbral
  pulseSensor.blinkOnPulse(LEDPin);          // Configurar el LED para parpadear en cada pulso

  if (pulseSensor.begin()) {
    Serial.println("Sensor de pulso iniciado correctamente.");
    lcd.setCursor(0, 0);
    lcd.print("Sensor Iniciado");
  } else {
    Serial.println("Error al iniciar el sensor de pulso.");
    lcd.setCursor(0, 0);
    lcd.print("Error Iniciando");
  }
  delay(2000); // Esperar 2 segundos para mostrar el mensaje inicial
  lcd.clear(); // Limpiar la pantalla LCD
}

void loop() {
  int myBPM = pulseSensor.getBeatsPerMinute();  // Obtener los BPM

  // Comprobar si se ha detectado un latido y aplicar debounce
  unsigned long currentTime = millis();
  if (pulseSensor.sawStartOfBeat() && (currentTime - lastBeatTime > debounceTime)) {
    lastBeatTime = currentTime;  // Actualizar el tiempo del último latido
    Serial.print("BPM: ");
    Serial.println(myBPM);       // Mostrar los BPM en el monitor serial

    // Mostrar los BPM en la pantalla LCD
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Pulsos:");
    lcd.setCursor(0, 1);
    lcd.print(myBPM);
    lcd.print(" BPM");
  }

  delay(10);  // Pequeño retraso para evitar sobrecarga
}