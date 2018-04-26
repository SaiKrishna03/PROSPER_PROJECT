//c++ program to find maximum no_of_people in a tower such that person below has more height and weight than the above

#include "insertion.h"

#include<iostream>

#include<cstdlib>

int LIS(int *ht,int *wt,int size);


using namespace std;

int circus()
{
	int height[100],weight[100];
	int ht[100],wt[100],ht1[100];


	int size;

	cout<<"enter total no_of people:";
	cin>>size;
	cout<<endl<<endl;


	for(int loop1=0;loop1<size;loop1++)
	{
		cout<<"enter height of person "<<loop1+1<<":";
		cin>>height[loop1];				//getting heights into array
	
		ht[loop1]=height[loop1];			//duplicating array of heights
		ht1[loop1]=height[loop1];
		
		cout<<"enter weight of person "<<loop1+1<<":";	
		cin>>weight[loop1];				//getting weights into array
		
		wt[loop1]=weight[loop1];			//duplicating array of weights
	
		cout<<endl;		
	
	}
	
	cout<<"done with entering data"<<endl;

	cout<<"(height,weight) are:";

	for(int loop2=0;loop2<size;loop2++)
	{
		cout<<"("<<ht[loop2]<<","<<wt[loop2]<<")  ";	//printing the input given
	}
	
	cout<<endl<<endl;

	
	cout<<"sorting heights using binary_insertion"<<endl;

	
	bin_insertion(ht,size);

	cout<<"sorted heights are:";
	
	for(int loop5=0;loop5<size;loop5++)
	{
		cout<<ht[loop5]<<"  ";			//printing heights, that are sorted using bin_insertion
	}					
	
	cout<<endl;
	
	
	
	//align weights to corresponding height of the person

	for(int loop6=0;loop6<size;loop6++)
	{
		int key=ht[loop6];				//gives height to search in original array

		for(int i=0;i<size;i++)		//loop for searching linearly
		{
			if(key==ht1[i])		//condition to get coresponding weight
			{
				wt[loop6]=weight[i];
				ht1[i]=-1;				
				break;
			}//end of 'if'
		}//end of inner loop
	}//end of loop6

	cout<<"data sorted by heights is:";
	for(int loop7=0;loop7<size;loop7++)
	{
		cout<<"("<<ht[loop7]<<","<<wt[loop7]<<")  ";	//printing data sorted by heights
	}
	
	cout<<endl<<endl;

	
	int max_num=LIS(ht,wt,size);		//calling LIS function to get largest subsequence in array of weights

	cout<<"maximum no_of people that can be placed:"<<max_num;


	cout<<endl<<endl;

return 0;

}	//end of main


int LIS(int *ht,int *wt,int size)	//start of LIS function
{
   	int *lis,max=0;
   	int loop1,loop2;
	lis=(int*) malloc (sizeof(int)*size);

	int men[100][100];
	
	for (loop1=0;loop1<size;loop1++)
	{
	      	lis[loop1]=1;		//assigning all values of lis[array] to 1,since minimum no_of people in tower is 1
		for(loop2=0;loop2<size;loop2++)
		{
			men[loop1][loop2]=-1;
		}//end of loop2	
	}//end of loop1  
	
	for (loop1=1;loop1<size;loop1++)
      	{
		
		for (loop2=0;loop2<loop1;loop2++)
         	{
			
			if (wt[loop1]>wt[loop2] && lis[loop1]<lis[loop2]+1)
  			{									
				lis[loop1]=lis[loop2]+1;	//increasing length of subsequence if weight of peer bellow is greater
				men[loop1][loop2]=loop2;
			}//end of 'if'
		
		}//end of loop2
	 }//end of loop1

   	
	int max_index;

	for(int loop3=0;loop3<size;loop3++)
      	{
		if (max<lis[loop3])
	 	{
		        max=lis[loop3];			//finding maximum length of all subsequences 
			max_index=loop3;
		}//end of 'if'
	}//end of loop3
	


	cout<<"largest subsequence is:";

	cout<<"("<<ht[max_index]<<","<<wt[max_index]<<")   ";


	int maxi=-1;

	int loop4=max_index;

        while(loop4!=-1)		//printing largest subsequence
	{
		maxi=men[loop4][0];
			
		for(int loop5=0;loop5<max_index;loop5++)
		{
			if(men[loop4][loop5]>maxi)	//finding previous sub sequence from which the maximum sequence was extended  
			{
				maxi=men[loop4][loop5];
			}
				
		}
		if(maxi!=-1 and maxi<size)
		cout<<"("<<ht[maxi]<<","<<wt[maxi]<<")   ";
		loop4=maxi;
	}	
		

		
	cout<<endl<<endl<<endl;

   	return max;
}

