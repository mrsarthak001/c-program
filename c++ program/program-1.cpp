#include<iostream>
using namespace std;
class Sals
{
public:
  double BS,DA,HRA,gross_sal,tax,total_sal;
  Sals()
  {
    BS=0;
    DA=0;
    HRA=0;
  }
  void set_salary(double a,double b,double c)
  {
    BS=a;
    DA=b;
    HRA=c;
   }
};
class Gross: public Sals
{
public:
  void cal_gross()
  {
    gross_sal=BS+DA+HRA;
  }
};
class Tax: public Gross
{
public:
  void cal_tax()
  {
    tax=0.1*gross_sal;
    total_sal=gross_sal-tax;
  }
};

int main()
{
  Tax z;
  double a,b,c;
  cout<<"enter BS,DA,HRA resp "<<endl;
  cin>>a>>b>>c;
  z.set_salary(a,b,c);
  z.cal_gross();
  cout<<"the gross salary is "<<z.gross_sal<<endl;
  z.cal_tax();
  cout<<"the tax is "<<z.tax<<endl<<"total salary is "<<z.total_sal;
  return 0;
}