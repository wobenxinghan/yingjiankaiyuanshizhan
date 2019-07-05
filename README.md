# yingjiankaiyuanshizhan的开源硬件作业
>hanjiahang

## 第一天
#### 学习内容
·如何学习开源硬件

·怎样学习开源硬件

·三个软件
  
  arduino
  
  fritzing
  
  processing
·几个常用网址
 
 [arduino网址](https://arduino.cc)
 
 [fritzing网址](https://fritzing.org)
 
 [processing网址](https://processing.org)
  

## 第二天

  morse.h
```c

#ifndef _MORSE_H
#define _MORSE_H
class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void c_space();
    void w_space();
  private:
    int _pin;
    int _dottime;
};
#endif /*_MORSE_H*/

```

  morse.cpp
```c
  
  #include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_dottime=250;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime*4);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::c_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*3);
}

void Morse::w_space()
```
## 第三天
## 第四天
small-car 7/4日课堂作业 小车代码、截图

morse  7/3日 课后作业 摩斯电码 代码 库

7 7/4日 课后作业 七段显示器 代码 截图
