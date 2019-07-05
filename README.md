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

morse keywords

```
Morse	KEYWORD1
dash	KEYWORD2
dot	KEYWORD2
```
## 第三天
  small-car
  
  ```c
  //f前进  d后退  l左转  r右转  s停止


void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}

  int income=0;
  
void loop()
{
  if(Serial.available()>0){
      income=Serial.read();
}
  switch(income){
    case'f':
    forword();
    break;
    
    case'b':
    backword();
    break;
    
    case'l':
    left();
    break;
    
    case'r':
    right();
    break;
    
    
    case's':
    stop();
    break;
    
    default:
    break;
  }
}

void forword(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void backword(){
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
}

void right(){
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void left(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
}

void stop(){
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}
```


## 第四天
```c
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

byte income;
void loop()
{
  if(Serial.available()>0){
    income=Serial.read();
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    delay(100);
    if(income&1==1) digitalWrite(2, HIGH);
    else digitalWrite(2, LOW);
    if(income>>1&1==1) digitalWrite(3, HIGH);
    else digitalWrite(3, LOW);
    if(income>>2&1==1) digitalWrite(4, HIGH);
    else digitalWrite(4, LOW);
    if(income>>3&1==1) digitalWrite(5, HIGH);
    else digitalWrite(5, LOW);
  }
  delay(100);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(100);
  
  	digitalWrite(8,HIGH);
  
  if(Serial.available()>0){//第二次输入
    income=Serial.read();
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    delay(100);
    if(income&1==1) digitalWrite(2, HIGH);
    else digitalWrite(2, LOW);
    if(income>>1&1==1) digitalWrite(3, HIGH);
    else digitalWrite(3, LOW);
    if(income>>2&1==1) digitalWrite(4, HIGH);
    else digitalWrite(4, LOW);
    if(income>>3&1==1) digitalWrite(5, HIGH);
    else digitalWrite(5, LOW);
  }
  delay(100);
  //digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(100);
  
  	digitalWrite(9,HIGH);
  
  if(Serial.available()>0){//第三次输入
    income=Serial.read();
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    delay(100);
    if(income&1==1) digitalWrite(2, HIGH);
    else digitalWrite(2, LOW);
    if(income>>1&1==1) digitalWrite(3, HIGH);
    else digitalWrite(3, LOW);
    if(income>>2&1==1) digitalWrite(4, HIGH);
    else digitalWrite(4, LOW);
    if(income>>3&1==1) digitalWrite(5, HIGH);
    else digitalWrite(5, LOW);
  }
  delay(100);
  //digitalWrite(8, LOW);
  //digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(100);
  
  	digitalWrite(10,HIGH);
  
  if(Serial.available()>0){//第三次输入
    income=Serial.read();
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    delay(100);
    if(income&1==1) digitalWrite(2, HIGH);
    else digitalWrite(2, LOW);
    if(income>>1&1==1) digitalWrite(3, HIGH);
    else digitalWrite(3, LOW);
    if(income>>2&1==1) digitalWrite(4, HIGH);
    else digitalWrite(4, LOW);
    if(income>>3&1==1) digitalWrite(5, HIGH);
    else digitalWrite(5, LOW);
  }
  delay(100);
  //digitalWrite(8, LOW);
  //digitalWrite(9, LOW);
  //digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(100);
  
  	digitalWrite(11,HIGH);
  
  if(Serial.available()>0){//第三次输入
    income=Serial.read();
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    delay(100);
    if(income&1==1) digitalWrite(2, HIGH);
    else digitalWrite(2, LOW);
    if(income>>1&1==1) digitalWrite(3, HIGH);
    else digitalWrite(3, LOW);
    if(income>>2&1==1) digitalWrite(4, HIGH);
    else digitalWrite(4, LOW);
    if(income>>3&1==1) digitalWrite(5, HIGH);
    else digitalWrite(5, LOW);
  }
  delay(100);
  //digitalWrite(8, LOW);
  //digitalWrite(9, LOW);
  //digitalWrite(10, LOW);
  //digitalWrite(11, LOW);
  delay(100);
}
```





small-car 7/4日课堂作业 小车代码、截图

morse  7/3日 课后作业 摩斯电码 代码 库

7 7/4日 课后作业 七段显示器 代码 截图

0705  7月5日 课后作业 4个7段显示器 代码 截图
