// библиотека для работы с аналоговым акселерометром
#include <TroykaAccelerometer.h>

// пины подключения осей акселерометра
#define PIN_X A1
#define PIN_Y A2
#define PIN_Z A0
unsigned long last_time;
// создаём объект для работы с аналоговым акселерометром
TroykaAccelerometer accel(PIN_X, PIN_Y, PIN_Z);

void setup() {
  // открываем последовательный порт
  Serial.begin(9600);
  Serial.println("Serial begin is OK");
}

void loop() {
  if(millis()-last_time > 1000){
    last_time()= millis(100);
  }
  // выводим сырые некалиброваные значения акселерометра в Serial-порт
  Serial.print(accel.readVoltageX());
  Serial.print("\t");
  Serial.print(accel.readVoltageY());
  Serial.print("\t");
  Serial.println(accel.readVoltageZ());
  millis();
}