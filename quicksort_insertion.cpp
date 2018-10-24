#include "insertion.h"
#include "quicksort.h"

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

	if(r-p+1>20)
	{

		//cout<<"im working"<<"\n";
		q=partition(A,p,r);
	 	quick(A,p,q-1);
		quick(A,q+1,r);	

	}

}
