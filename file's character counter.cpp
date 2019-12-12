#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream fin;
	string line;
	int count=0;
	fin.open("filename.cpp");
	while (getline(fin,line))
	{
		count+=line.length();
	}
	cout << "Number of characters including blank spaces : " << count;	
	system("pause>0");
}
