#include <iostream>
using namespace std;
class Students
{
	public:
		char Name;
		int Age;
		long Sap_Id;
	    void Data()
	    {
   cout<<"Enter the Name"<<endl;
   cin>>Name;
   cout<<"Name "<<Name<<endl;
   cout<<"Enter the Age"<<endl;
   cin>>Age;
   cout<<"Age "<<Age<<endl;
   cout<<"Enter the Sap Id"<<endl;
   cin>>Sap_Id;
   cout<<"Sap Id "<<Sap_Id<<endl;
	    }
};

int main()
{
	Students A1;

	A1.Data();
return 0;
}

