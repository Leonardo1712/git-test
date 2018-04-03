// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(void)
{
	int aux;

	cout<<"Please select one option..."<<endl;
	cout<<"1) To log in"<<endl;
	cout<<"2) To log out"<<endl;
	cin>>aux;

	if(aux==1)
	{
		cout<<"Welcome Back Leonardo"<<endl;
	}else 
	{
		cout<<"See you Later Leonardo"<<endl;
	}

	//system("pause");
	return 0;
}

