#include<iostream>
#include "Hybrid_sort_searching.h"

using namespace std;

int variant_lin(int A[],int key,int size)
{
int i=0,j,c=0;
	//cout<<"enter the key to be searched"<<"\n";
	//cin>>key;
	cout<<"search key is:"<<key<<endl;
	j=size-i;
	while(i<j&&i<size)
	{	j=size-i-1;
	
		if(A[i]==key)
			{
				cout<<"the key found in position no."<<i+1<<"\n";
				c++;
				
			}			
		if(A[j]==key)
			{
				cout<<"the key found in position no."<<j+1<<"\n";
				c++;
				
			}	
		i++;
	}


	if(c==0)
	{	
		cout<<"the key doesnt exist"<<"\n";
	}
}
/*
int main()
{

int A[500],loop1,key;

	cout<<"enter the size"<<"\n";

	cin>>size;

	for(loop1=0;loop1<size;loop1++)
	{
		cin>>A[loop1];		
	
	}
	cout<<"enter the key to be searched"<<"\n";
	cin>>key;
	variant_lin(A,key);
return 0;
}
*/
