#include<iostream>
  using namespace std;
 class area
{
  float side1,side2;
  public: area()
{ 
  cout<<"\n enter side1="<<endl;
  cin>>side1;
  cout<<"\n enter side2="<<endl;
  cin>>side2;
  }
 int calculate(int a)
{
 a=side1;
 return a*a;
}
 
 int calculate(int b, int c)
{
  b=side1;
  c=side2;
  return b*c;
 }
 
float calculate1(int d, int e)
{
 d=side1;
e=side2;
   return 0.5*d*e;
 }

void choice()
{
  int k,s1,s2,y,u;
  float i;
  cout<<"\n enter 1st side=";
  cin>>s1;
  cout<<"\n enter 2nd side=";
  cin>>s2;
 cout<<"\n 1. for area of square=";
 cout<<"\n 2. for area of rectangle=";
 cout<<"\n 3. for area of triangle=";
  switch(k)
{ 
  case 1:  
    y=calculate(s1);
     cout<<"\n area of square="<<y;
   break;
   case 2:
    u=calculate1(s1,s2);
   cout<<"\n area of rectangle="<<u;
    break;
   case 3: i=calculate(s1,s2);
   cout<<"\n area of triangle="<<i;
   break;
}
}
};
int main()

{
 area a;
 a.choice();

return 0;
}
 









