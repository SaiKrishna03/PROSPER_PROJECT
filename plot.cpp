#include "insertion.h"

#include "quicksort.h"

#include "Hybrid_sort_searching.h"


#include <iostream>
#include<fstream>
#include<cstdlib>
#include<math.h>

using namespace std;


void insertionsort_variants()
{
	cout<<"Module1:Insertionsort and its variants\n";
	
	int a[210],size,count;
	int z[210],y[210],x[210],i,loop;
		
	cout<<"give an array size\n";				//initializing size
	cin>>size;

	for(loop=1;loop<=100;loop++)
	{	
		cout<<"input array is:\n";
		for(i=0;i<size;i++)			//initializing array
		{		
			a[i]=rand()%100+1;
			z[i]=a[i];
			y[i]=a[i];
			x[i]=a[i];
			cout<<" "<<a[i];
		}
	cout<<endl;


	
//getting time for iterative insertion
		size_t start1=clock();
	
		iterative_insertion(a,size);				//calling iterative insertion sort from insertion.h header file
	
		cout<<"sorted array using insertion is:";	
			for(i=0;i<size;i++)				//printing output
			cout<<"\t"<<a[i];
		cout<<endl;
		
		size_t stop1=clock();
		FILE *fptr1;
		fptr1=fopen("iterative_insertion.txt","a");
		fprintf(fptr1,"%f\n",(stop1-start1)/double(CLOCKS_PER_SEC)*1000);
		fclose(fptr1);


//getting time for recursive_insertion
		size_t start2=clock();	
		
		recursive_insertion(z,0,size-1,size);			//calling recursive insertion sort from insertion.h header file
	
		cout<<"sorted array using rec_insertion is:";
			for(i=0;i<size;i++)				//printing output
			cout<<"\t"<<z[i];
		cout<<endl;
	
		size_t stop2=clock();
		FILE *fptr2;
		fptr2=fopen("recursive_insertion.txt","a");
		fprintf(fptr2,"%f\n",(stop2-start2)/double(CLOCKS_PER_SEC)*1000);
		fclose(fptr2);


	

//getting time for binary based insertion
		size_t start3=clock();	
	
		bin_insertion(y,size);				//calling insertion sort using binary search from insertion.h header file
	
		cout<<"sorted array using bin_insertion is:";
			for(i=0;i<size;i++)				//printing output
			cout<<"\t"<<y[i];
		cout<<endl;
		
	
		size_t stop3=clock();
		FILE *fptr3;
		fptr3=fopen("bin_insertion.txt","a");
		fprintf(fptr3,"%f\n",(stop3-start3)/double(CLOCKS_PER_SEC)*1000);
		fclose(fptr3);




//getting time forn0_of_inversions in array
		size_t start4=clock();	
		
		count=counting_inversion(x,size);			//calling counting inversions function from insertion.h header file
	
		cout<<"no.of inversions:"<<count<<endl;			//printing output
		
		size_t stop4=clock();
		FILE *fptr4;
		fptr4=fopen("countig_inversion.txt","a");
		fprintf(fptr4,"%f\n",(stop4-start4)/double(CLOCKS_PER_SEC)*1000);
		fclose(fptr4);
	
	}
}
//break;

//case 2:
	void quicksort_variants()
	{
		cout<<"Module2:Quicksort and its variants\n";
		
		int A[500],B[500],C[500],D[500],size1,loop;
 		int p=0,q,k,r,l;

		cout<<"enter size\n";					//initializing size
			cin>>size1;
	for(loop=1;loop<=100;loop++)
	{	
		cout<<"input array is:"<<endl;
		 for(k=0;k<size1;k++)				//initializing array
		{    
			A[k]=rand()%100+1;
			B[k]=A[k];
			C[k]=A[k];
			D[k]=A[k];
			cout<<" "<<A[k];
		}   
 	cout<<endl;
	
	q=size1;



//getting time for classic quick sort
	size_t start1=clock();	

	quickSort(A,p,q-1);					//calling normal Quicksort function from quicksort.h header file
	cout<<"quicksort:::"<<endl;

    	for(int f=0; f<size1; f++)				//printing output
 		cout<<A[f]<<" ";

	cout<<endl;
	
	size_t stop1=clock();
	FILE *fptr1;
	fptr1=fopen("quicksort.txt","a");
	fprintf(fptr1,"%f\n",(stop1-start1)/double(CLOCKS_PER_SEC)*1000);
	fclose(fptr1);
	



//getting time for quick_sort pivot first
	size_t start2=clock();
	quick_first(B,p,q-1);					//calling Quicksort_pivotfirst from quicksort.h header file
	
	cout<<"quicksort_first:::"<<endl;
        for (int i = 0 ; i <size1 ; ++i)		//printing output
           cout << B[i] << " " ;

	cout<<endl;
	
	size_t stop2=clock();
	FILE *fptr2;
	fptr2=fopen("quick_first.txt","a");
	fprintf(fptr2,"%f\n",(stop2-start2)/double(CLOCKS_PER_SEC)*1000);
	fclose(fptr2);
	


//getting time for quick sort with middle as pivot
	size_t start3=clock();
	quick_middle(C,p,q-1);					//calling Quicksort_pivotmiddle from quicksort.h header file
	cout<<"quicksort_middle:::"<<endl;
        	for (int i = 0 ; i <size1 ; ++i)		//printing output
        	    cout << C[i] << " " ;
	cout<<endl;

	size_t stop3=clock();
	FILE *fptr3;
	fptr3=fopen("quick_middle.txt","a");
	fprintf(fptr3,"%f\n",(stop3-start3)/double(CLOCKS_PER_SEC)*1000);
	fclose(fptr3);




//getting time for quick sort with random element as pivot
	size_t start4=clock();	
	quick_random(D,0,q-1,size1);                            //calling normal quicksort_random function from quicksort.h header file
	cout<<"quicksort_random :"<<endl;                 
	             for(int i=0;i<q;i++)                       //printing output
	             cout<<D[i]<<" ";
		cout<<endl;

	size_t stop4=clock();
	FILE *fptr4;
	fptr4=fopen("quick_random.txt","a");
	fprintf(fptr4,"%f\n",(stop4-start4)/double(CLOCKS_PER_SEC)*1000);
	fclose(fptr4);
	
	}
}
//break;
		
//case 3:
void hybridsort_variants()					//calling hybrid_sort variants and searching
{
	cout<<"Module3:Hybridsort and searching\n";
	
	int A[500],B[500],C[500],loop1,size2,key,loop;

	cout<<"enter the size"<<"\n";				//initializing size
		cin>>size2;
	for(loop=1;loop<=100;loop++)
	{	
	cout<<"enter the elements:"<<"\n";
	for(loop1=0;loop1<size2;loop1++)			//initializing array
		{
			A[loop1]=rand()%100+1;	
			B[loop1]=A[loop1];
			C[loop1]=A[loop1];	
		}
	cout<<endl;
	


//getting time for quick sort using insertion
	size_t start1=clock();
	quickinsert(A,0,size2-1,size2);				//calling quicksort using insertion from Hybrid_sort_searching.h header file
	cout<<"Quick_insertion:\n";
		for(loop1=0;loop1<size2;loop1++)		//printing output
			{
				cout<<A[loop1]<<"\t";				
			}
	cout<<"\n";

	size_t stop1=clock();
	FILE *fptr1;
	fptr1=fopen("quickinsertion.txt","a");
	fprintf(fptr1,"%f\n",(stop1-start1)/double(CLOCKS_PER_SEC)*1000);
	fclose(fptr1);





//getting time for merge sort using insertioon
	size_t start2=clock();
	mergesort_insertion(B,0,size2-1,size2);			//calling mergesort using insertion from Hybrid_sort_searching.h header file
  	cout<<"Merge_insertion:\n";
		for(loop1=0;loop1<size2;loop1++)		//printing output
			{
				cout<<B[loop1]<<"\t";			
			}
 	cout<<"\n";

	size_t stop2=clock();
	FILE *fptr2;
	fptr2=fopen("mergesort_insertion.txt","a");
	fprintf(fptr2,"%f\n",(stop2-start2)/double(CLOCKS_PER_SEC)*1000);
	fclose(fptr2);
	}




//getting time for variant linear search
	cout<<"variant_linear search\n";

	size_t start3=clock();
	key=rand()%100+1;
	variant_lin(C,key,size2);				//calling variant linear search from Hybrid_sort_searching.h header file
	cout<<endl;

	size_t stop3=clock();
	FILE *fptr3;
	fptr3=fopen("variantlin.txt","a");
	fprintf(fptr3,"%f\n",(stop3-start3)/double(CLOCKS_PER_SEC)*1000);
	fclose(fptr3);


//geting time for linear search
	cout<<"linear search\n";
	
	size_t start4=clock();
	linear(C,size2,key);
	cout<<endl;

	size_t stop4=clock();
	FILE *fptr4;
	fptr4=fopen("linear.txt","a");
	fprintf(fptr4,"%f\n",(stop4-start4)/double(CLOCKS_PER_SEC)*1000);
	fclose(fptr4);
	
	
}
//endfile


