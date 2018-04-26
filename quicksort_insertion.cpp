#include "insertion.h"
#include "quicksort.h"
//#include "Hybrid_sort_searching.h"

/*
#include<iostream>

using namespace std;
*/
//int count=0,size,i=0,key,temp;
void quick(int A[500],int p,int r);

void quickinsert(int A[500],int p,int r,int size)
{
	int q,l;
			// cout<<"im working quick insert "<<"\n";
		
		   quick(A,0,r-1);

iterative_insertion(A,size);
	
}


void quick(int A[500],int p,int r)
{
	int q;

	if(r-p>20)
	{

		//cout<<"im working"<<"\n";
		q=partition(A,p,r);
	 	quick(A,p,q-1);
		quick(A,q+1,r);	

	}

}
/*
int partition(int A[500],int p,int r)
{

	cout<<"im quick partition"<<"\n";
	int x,temp1,temp2,temp;
	x=A[r];
	temp1=p-1;

	for(temp2=p;temp2<r;temp2++)
	{
		if(A[temp2]<=x)	
		{	temp=A[temp2];
			A[temp2]=A[temp1+1];
			A[temp1+1]=temp;					
	
			temp1=temp1+1;
		}
	}
	
	temp=A[temp1+1];
	A[temp1+1]=A[r];
	A[r]=temp;


return temp1+1;
}



int main()
{
	int A[500],loop1,size;

	cout<<"enter the size"<<"\n";

	cin>>size;
	
	cout<<"enter the elements:"<<"\n";
	
	for(loop1=0;loop1<size;loop1++)
	{
		cin>>A[loop1];		
	
	}

	quickinsert(A,0,size-1,size);

	for(loop1=0;loop1<size;loop1++)
	{
		cout<<A[loop1]<<"\t";		
	
	}


return 0;
}
*/
