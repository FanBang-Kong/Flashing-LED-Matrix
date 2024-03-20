#include <Arduino.h>
int pin_a =2;
int pin_b =3;
int pin_c =4;
int pin_d =5;
int pin_e =6;
int pin_f =7;
int pin_g =8;

int arr[7]={pin_a, pin_b, pin_c, pin_d, pin_e, pin_f, pin_g};

int status[10][7]={
  {0,0,0,0,0,0,1},//0
  {1,0,0,1,1,1,1},//1
  {0,0,1,0,0,1,0}, //2
  {0,0,0,0,1,1,0}, //3
  {1,0,0,1,1,0,0}, //4
  {0,1,0,0,1,0,0}, //5
  {0,1,0,0,0,0,0}, //6
  {0,0,0,1,1,1,1}, //7
  {0,0,0,0,0,0,0}, //8
  {0,0,0,0,1,0,0}  //9
};

void setup() {
  // put your setup code here, to run once:
for(int i = 0; i<=6; i++)
{
pinMode(arr[i],OUTPUT);

}
}

void loop() {
// put your main code here, to run repeatedly:
  for(int i=0; i<=9; i++)
  {
    for(int j=0; j<=6; j++)
    {
      digitalWrite(arr[j],status[i][j]);
    }
    delay(300);
  }
  
}