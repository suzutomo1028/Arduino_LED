/**
 * @file LED.cpp
 * @brief Arduino向けのLED制御ライブラリ
 * @author suzutomo1028@gmail.com
 * @date 2020-10-13 新規作成
 */

#include "LED.h"

/**
 * @brief コンストラクタ
 * @param pin LEDのピン番号
 */
LED::LED(uint8_t pin) {
  _pin = pin;
  pinMode(_pin, OUTPUT);
  turnOff();
}

/**
 * @brief デストラクタ
 */
LED::~LED() {
  turnOff();
}

/**
 * @brief LEDを消灯する
 */
void LED::turnOff() {
  digitalWrite(_pin, LOW);
}

/**
 * @brief LEDを点灯する
 */
void LED::turnOn() {
  digitalWrite(_pin, HIGH);
}
