/**
 * @file Blink.ino
 * @brief LED制御ライブラリを使ってLEDを点滅する
 * @author suzutomo1028@gmail.com
 * @date 2020-10-13 新規作成
 */

#include <Arduino.h>
#include <LED.h>

LED led(13);

/**
 * @brief 起動時に一度だけ実行するルーチン
 */
void setup() {
}

/**
 * @brief setupの後に繰り返し実行するルーチン
 */
void loop() {
  // LEDを点灯する
  led.turnOn();
  delay(1000);

  // LEDを消灯する
  led.turnOff();
  delay(1000);
}