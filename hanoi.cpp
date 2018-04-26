#include "Applications.h"
#include<iostream>
using namespace std;

int s=1;

void hanoi_fn(int n,int rod1,int rod2,int rod3)
{

	if(n>0)
	{
		hanoi_fn(n-1,rod1,rod3,rod2);
		cout<< s++ << ") " <<"disc"<<n<<"   "<<"rod"<<rod1 <<" --> "<<"rod"<<rod3<<"\n";
		hanoi_fn(n-1,rod2,rod1,rod3);
	}
}

void hanoi()
{
	int k,rod1=1,rod2=2,rod3=3;

	cout<<"enter no of discs:";
	cin>>k;
	cout<<"follow below steps\n";
	hanoi_fn(k,rod1,rod2,rod3);
}

