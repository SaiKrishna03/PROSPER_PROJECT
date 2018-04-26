#include "insertion.h"
#include "Hybrid_sort_searching.h"

int count=0,key;

void merge(int A[],int p,int q,int r)	//p is start index and q is end index
{
	int i,j,k,n1,n2,B[500],C[500];

	n1=q-p+1;	//q-p+1 gives size of left sub array
	n2=r-q;		//r-q gives size of right sub array

	for(i=1;i<=n1;i++)
	{
		B[i]=A[p+i-1];		//duplicating left array
	}

	for(j=1;j<=n2;j++)
	{
		C[j]=A[q+j]; 		//duplicating right array
	}
	i=1;j=1;

	for(k=p;k<=r;k++)
	{
		if(i<=n1&&j<=n2&&B[i]<=C[j])	//element corresponding to index 'i' in array'c' is greater than array 'b' 
		{
		 	A[k]=B[i];		//storing sorted inputs in array 'a'
		 	i=i+1;	
		}	
	
		else if(i<=n1&&j<=n2&&B[i]>C[j])	//element corresponding to index 'i' in array'b' is greater than array 'c'
		{
			A[k]=C[j];
			j=j+1;
		}

		else if(j>n2)		//this condition says that all remaining elements belongs to b[i]
		{
			A[k]=B[i];	
			i++;
		}

		else if(i>n1)		//this condition says that all remaining elements belongs to c[i]
		{
			A[k]=C[j];
			j++;	
		}
		
	}
}


void mergesort_insertion(int A[],int p,int r,int size)
{
	int mid;
	if(p<r)	//p is start index and r is end index
	{
		if(r-p<=20)
		{
			//recursive_insertion(A,p,r,size);	//caling recursive_insertion on array size <=20
			iterative_insertion(A,r-p+1);
		}
	
		if(r-p>20)
		{  
			mid=(p+r)/2;
			mergesort_insertion(A,p,mid,size);
		
			mergesort_insertion(A,mid+1,r,size);		
	
			merge(A,p,mid,r);
		}
	}
}

