#include <fstream>
#include <iostream>
#include <conio.h>
void main ()
{
	ofstream fout;
	fout.open("sarthak.dat")
    fout<<"hello"';
    
	ifstream fin;
	char ch;
	fin.open ("sarthak.dat")
	fin>>ch;
	while (!fin.eof())
	{
		cout<<ch;
		fin>>ch;
	}
fin.close();
}
