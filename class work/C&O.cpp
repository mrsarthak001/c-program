#include <iostream>
using namespace std;
class employee
{
	private:
	char name;
	long number;
	
	public:
     void data()
	{
	cout<<"enter the name" ;
   	cout <<"enter the number";
	cin>>name;
	cin>>number;
	cout<<"name: "<<name;
   	cout <<"number: "<<number;
	}
};
int main(){
 employee E1;
 E1.data();
}
