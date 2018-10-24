#include "Applications.h"
#include<iostream>
using namespace std;

void hanoi_fn(int n, char from_rod, char to_rod, char aux_rod) 
{ 
    if (n == 1) 
    { 
        cout<<"Move disk 1 from rod "<<from_rod<<" to rod "<<to rod<<endl; 
        return; 
    } 
    hanoi_fn(n-1, from_rod, aux_rod, to_rod); 
    cout<<"Move disk "<<n<<" from rod "<<from rod<<" to rod "<<to rod<<endl; 
    hanoi_fn(n-1, aux_rod, to_rod, from_rod); 
} 
void hanoi()
{
	int k,rod1=1,rod2=2,rod3=3;

	cout<<"enter no of discs:";
	cin>>k;
	cout<<"follow below steps\n";
	hanoi_fn(k,rod1,rod3,rod2);
}

