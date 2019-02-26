#include <iostream>
using namespace std;
class A 
{
public:
virtual void f1 (int x) 
  {
cout << "f1 works";}

}; 
class B:public A 
{
 public:
void f1 (float y) 
  {
cout << "f2 works";}

};
int main () 
{
    A *p=new B;
    int m=5;
    p->f1(m);
}

// virtual //