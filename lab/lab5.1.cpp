#include<iostream>
 using namespace std;
class temperature
{
   float t1,t2;
  public: temperature(float t3=98)
  { 
    t1=t3;
    cout<<"\n temperature in celsius="<<t1;
     
   }
  float calculate1()
{
 t2=(t1*9/5)+32;
  cout<<"\n temperature in farhenheit="<<t2;
  return t2;
 }
 
 };
  

 class temp: public virtual temperature
 {
  float t4,t5;
   public: void calculate()
{
  t5=calculate1();
  t4=(t5-32)*5/9+273.15;
  cout<<"\n temperature in kelvin="<<t4;
  }
};

int main()
{
 temperature t;
 t.calculate1();
 temp p;
 p.calculate();
 return 0;
}
  
