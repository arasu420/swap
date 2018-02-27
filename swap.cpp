#include <iostream>
using namespace std;
int  main()
{
	int num1,num2,temp;
	cout<<"enter 1st num";
	cin>>num1;
	cout<<"enter 2st num";
	cin>>num2;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<"num1:"<<num1<<"\n"<<"num2:"<<num2;
	return 0;
}
