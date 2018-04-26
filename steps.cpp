#define MAX_STEPS 2//As maximum steps which can be taken are 2 only.
#define ARR_SIZE 100//Defining the array as 100.
#include<iostream>
using namespace std; 
/* Function to print array arr[] */
void printArray(int arr[], int arr_size);
 
// The function prints all combinations of numbers 1, 2 that sum up to n
//i is used in recursion keep track of index in arr[] where next element is to be added. Initital value of i must be passed as 0 
void printCompositions(int n, int i)
{
 
  /* array must be static as we want to keep track of values stored in arr[] using current calls of printCompositions() in function call stack*/
  static int arr[ARR_SIZE];
 
  if (n == 0)
  {
    printArray(arr, i);
  }
  else if(n > 0)
  {
    int k; 
    for (k = 1; k <= MAX_STEPS; k++)
    {
      arr[i]= k;
      printCompositions(n-k, i+1);
    }
  }
}
 
//Function to print array arr[]
void printArray(int arr[], int arr_size)
{
  int i;
  for (i = 0; i < arr_size; i++)
{
    cout<<" "<<arr[i];
}
  cout<<"\n";
}

int fibo(int n)//fibanocci series function as the numer of ways of climbing is the nth term in a fibanocci series
{
	if(n==0)
		return 0;

	else if (n==1)
		return 1;

	else if (n==2)
		return 2;

	else 
		return fibo(n-1)+fibo(n-2);//returning sum of (n-1) and (n-2)th terms respectively
}

 

void monkey_steps()
{
 		 int n,s;
 
	 cout<<"Enter your number of steps\n";	
 	 cin>>n;
 		      s=fibo(n);//calling our function to find the number of ways
	cout<<"The number of ways possible of climbing the steps is :  "<<s;
	cout<<"\n";

 		 cout<<"Differnt possibilties of climbing "<<n<<" steps are : \n";
 			 printCompositions(n, 0);//Function call to print the possible ways.
 
}
