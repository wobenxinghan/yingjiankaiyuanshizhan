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
