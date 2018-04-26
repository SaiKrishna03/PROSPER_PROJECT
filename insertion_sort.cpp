#include "insertion.h"

void iterative_insertion(int b[],int n)
{
int j,i,k;


for(j=1;j<n;j++)
	{
		i=j-1;
		k=b[j];
			while(b[i]>k&&i>=0)	//finding index to place b[j] 
			{
				b[i+1]=b[i];
				i--;
			}
		b[i+1]=k;
	}
}//end of iterative insertion

void recursive_insertion(int z[],int l,int j,int n)
{
int i,k;

	if(j>0)
		{
		recursive_insertion(z,l,j-1,n);	
		k=z[j];
		i=j-1;
			while(z[i]>k&&i>=0)
			{
				z[i+1]=z[i];
				i--;			
			}		
		z[i+1]=k;			
		}
}//end of recursive insertion

void bin_insertion(int c[],int n)
{
int low,high,mid;
int j,i,k,l,t;

for(j=1;j<n;j++)
	{
	
		k=c[j];
		low=0;
		high=j;
	
		while(low<high)			//ends when low overlaps high,i.e entire array is covered
			{
				mid=(low+high)/2;	
				
				if(k>=c[mid])
				low=mid+1;
				else
				high=mid;
			}
       		
		for(l=j;l>low;--l)		//swaps element besides it until l is greater than low
			{
				t=c[l];
				c[l]=c[l-1];
				c[l-1]=t;
			}
	}

}//end of binary search based insertion

int counting_inversion(int a[],int n)
{

int count=0,i,j;

for(j=1;j<n;j++)
	{
		i=0;
		while(i<j)		//checks until index j
			{
				if(a[i]>a[j])
				{				
				count++;	//increases count if a[i]>a[j]
				}
			i++;
			}
	}

return count;
}//end of counting no_of_invertions


