#include "quicksort.h"


#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


/*int partition_first(int A[], int start, int end)
{
  	int pivot=A[start] ;	//assigning first element to pivot
  	int L = start + 1 ;
  	int R = end ;
  	int temp = 0 ;
 
	while (L<=R)
	{
	   	while ( (L < R) && (A[R] >= pivot) )  //checking entire array with pivot and making a box
	    		--R ;
	   	while ( (L < R) && (A[L] < pivot) )  
	    		++L ;

	   	if (L == R)	//base case if l=end index 
	    		break ;


	   	temp=A[L] ;	//swaping la
	   	A[L]=A[R] ;
	 	A[R]=temp ;
	}


  	if (pivot <= A[L])  
   		return start ;


  	A[start] = A[L] ; 
  	A[L] = pivot ;
  	return L ;

}//end of partion_first
*/
void quick_first(int A[], int start, int end)	

{

  	if (start < end)
  	{
		int t;
	        t=A[start];                                	//swapping pivot with the first element
	        A[start]=A[end];
	        A[end]=t;
   		

		int boundary = partition(A, start, end) ;
   		quick_first(A, start, boundary - 1) ;	//calling quick_first recursively
   		quick_first(A, boundary + 1, end) ;
 	}
 
}//end of quick_first
 

int partition(int A[], int p,int q)
{
    int x= A[q];	//assigning last element to pivot
    int i;
    int temp;
    int j=p-1;

    for(i=p; i<q; i++)
    {
        if(A[i]<x)	//checking entire array with pivot and making box
        {
            j=j+1;
            temp= A[j];
            A[j]=A[i];
            A[i]=temp;
        }

    }

    temp= A[q];
    A[q]=A[j+1];
    A[j+1]=temp;

    return j+1;
}//end of classic partition


void quickSort(int A[], int p,int q)
{
    int r;
    if(p<q)
    {
        r=partition(A, p,q);
        quickSort(A,p,(r-1)); 
        quickSort(A,(r+1),q);
    }
}//end quick sort


void quick_middle(int a[], int left_index, int right_index)
{
	int left, right, pivot;
	
	left = left_index;
	right = right_index;
        int r=right_index;              
	
	if(left_index<right_index)
		{ 

			int m = (left_index + right_index) /2;
   
		    	int t;
	                t=a[m];                                	//swapping pivot with the middle element
	                a[m]=a[r];
	                a[r]=t;
			int q=partition(a,left_index,right_index);                  
		        quick_middle(a,left_index,q-1);                  
		        quick_middle(a,q+1,right_index);                 
		 }                 

}//end quick_middle



//start of quick_random
void quick_random(int a[],int p,int x,int size)               
        {
		int q,r;

             if(p<x)
                   {
			int l=x;
	r=rand()%(x-p)+p;	//generating random pivot
        
             if(r!=l)
                 {
		    int t;
                    t=a[l];                                	//swapping pivot with the last element
                    a[l]=a[r];
                    a[r]=t;
                 }
                        q=partition(a,p,x);                  
                        quick_random(a,p,q-1,size);                  
                        quick_random(a,q+1,x,size);                 
                   }
        }
//end of quick_random

