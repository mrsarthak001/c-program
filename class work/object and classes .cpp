#include <iostream>
using namespace std;
class employee
{
	private:
	string name;
	long number;
	
	public:
     void data()
	{
	cout<<"enter the name"<<endl;
   	cout <<"enter the number"<<endl;
	cin>>name;
	cin>>number;
	cout<<"name: "<<name<<endl;
   	cout <<"number: "<<number<<endl;
	}
};
int main()
{{
 employee E1;
 E1.data();
}
{
 employee E2;
 E2.data();
}}
