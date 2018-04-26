#include "Applications.h"
#include<iostream>
#include<math.h>

using namespace std;
int A[100][100];
int v=0;
//void ls(int,int,int,int,int);
//void head();

void ls(int n,int x,int y,int k,int l)
{

	int k1,k2,k3,k4,l1,l2,l3,l4;
	
	if(n==1)
	return;	
	
	else 
	{
		v=v+1;
		
		n=n/2;		

			
		if(k<x+n && l<y+n)	//checking for out lier in q1
		{
			A[x+n-1][y+n]=v;	//assigning firsts value in l_shape
			A[x+n][y+n-1]=v;	//assigning second value in l_shape
			A[x+n][y+n]=v;		//assigning third value in l_shape
			k1=k;			//new out lier row in q1
			l1=l;			//new out liercoulmn in q1
			k2=x+n-1;		//new out lier row in q2
			l2=y+n;			//new out liercoulmn in q2
			k3=x+n;			//new out lier row in q3	
			l3=y+n-1;		//new out liercoulmn in q3
			k4=x+n;			//new out lier row in q4
			l4=y+n;			//new out liercoulmn in q4
		}
	
	
		if(k<x+n && l>=y+n)		//checking out layer in q2
		{
			A[x+n-1][y+n-1]=v;
			A[x+n][y+n-1]=v;
			A[x+n][y+n]=v;
			k1=x+n-1;
			l1=y+n-1;
			k2=k;
			l2=l;
			k3=x+n;
			l3=y+n-1;
			k4=x+n;
			l4=y+n;
		}	

	
		if(k>=x+n && l<y+n)		//checking out lier in q3
		{	
			A[x+n-1][y+n-1]=v;
			A[x+n-1][y+n]=v;
			A[x+n][y+n]=v;
			k1=x+n-1;
			l1=y+n-1;
			k2=x+n-1;
			l2=y+n;
			k3=k;
			l3=l;
			k4=x+n;
			l4=y+n;
		}

	
		if(k>=x+n && l>=y+n)		//checking out lier in q4
		{
			A[x+n-1][y+n-1]=v;
			A[x+n-1][y+n]=v;
			A[x+n][y+n-1]=v;
			k1=x+n-1;
			l1=y+n-1;
			k2=x+n-1;
			l2=y+n;
			k3=x+n;
			l3=y+n-1;
			k4=k;
			l4=l;
		}	
		ls(n,x,y,k1,l1);	//recursive call	
		ls(n,x,y+n,k2,l2);	
		ls(n,x+n,y,k3,l3);	
		ls(n,x+n,y+n,k4,l4);
	}		
} 

void lshaped_triomino()	
{

	int N,k,l,i,j,M;
	cout<<"enter no.of squares : ";
	
	cin>>M;
	

	N=sqrt(M);

	cout<<"enter the row and column of outlier : ";

	cin>>k>>l;

	ls(N,0,0,k,l);		//calling function 'ls'

	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cout<<A[i][j]<<"\t";
		}
	cout<<"\n\n\n";	
	}
}	//end of function lshaped_ttriomino
/*
main()
{
lshaped_triomino();
return 0;
}
*/
