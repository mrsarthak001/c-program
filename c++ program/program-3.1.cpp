#include <iostream>
using namespace std;
class A 
{
public:

}; 
class B:public A 
{
 public:
void f1 (float y) 
  {
cout << "f2 works";}
void f1 (int x) 
  {
cout << "f1 works";}
};
int 
main () 
{
B obj;
int m= 5;
obj.f1(m);
} 
