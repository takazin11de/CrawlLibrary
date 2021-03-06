/*********************************************
   Crawl Blank Code
   C,C++記述プログラムのブランクです

   クロールを
   前進
   右回転
   後退
   左回転
   させるプログラムです

   Written by RuiTamura
   2016 Omniment Inc.
*********************************************/

#include <crawl.h>

int main() {
  crl.init();

  while (1) {
    // crl.setMotorLeft()で左モーターの出力を
    // crl.setMotorRight()で右モーターの出力を設定します
    //カッコの中には -1.00 ~ 0.00 ~ 1.00までの値を設定します
    // 0.00で出力0%
    // 0.50で出力50%    およそ3.7Vがモーターにかかります
    // 1.00で出力100%   およそ7.4Vがモーターにかかります
    //-をつけると逆回転します
    //設定した値は、最後にcrl.updateState()でモータードライバーに送信します

    //前進
    crl.setMotorLeft(0.5);   //左モーターを出力0.5で設定
    crl.setMotorRight(0.5);  //右モーターを出力0.5で設定
    crl.updateState();       //設定した値をモータードライバーに送信
    delay(1000);             // 1秒間待つ

    //右回転
    crl.setMotorLeft(0.5);    //左モーターを出力0.5に設定
    crl.setMotorRight(-0.5);  //右モーターを出力-0.5(逆回転)に設定
    crl.updateState();        //設定した値をモータードライバーに送信
    delay(1000);              // 1秒間待つ

    //後退
    crl.setMotorLeft(-0.5);   //左モーターを出力-0.5(逆回転)で設定
    crl.setMotorRight(-0.5);  //右モーターを出力-0.5(逆回転)で設定
    crl.updateState();        //設定した値をモータードライバーに送信
    delay(1000);              // 1秒間待つ

    //左回転
    crl.setMotorLeft(-0.5);  //左モーターを出力-0.5(逆回転)に設定
    crl.setMotorRight(0.5);  //右モーターを出力0.5に設定
    crl.updateState();       //設定した値をモータードライバーに送信
    delay(1000);             // 1秒間待つ
  }
}
