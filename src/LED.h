/**
 * @file LED.h
 * @brief Arduino向けのLED制御ライブラリ
 * @author suzutomo1028@gmail.com
 * @date 2020-10-13 新規作成
 */

#ifndef LED_h
#define LED_h

#include <Arduino.h>

/**
 * @brief LEDクラス
 */
class LED {
private:
  uint8_t _pin; /**< LEDのピン番号 */

public:
  /**
   * @brief コンストラクタ
   * @param pin LEDのピン番号
   */
  LED(uint8_t pin);

  /**
   * @brief デストラクタ
   */
  ~LED();

  /**
   * @brief LEDを消灯する
   */
  void turnOff();

  /**
   * @brief LEDを点灯する
   */
  void turnOn();
};

#endif /* LED_h */
