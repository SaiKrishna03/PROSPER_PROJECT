#include "insertion.h"

#include "quicksort.h"

#include "Hybrid_sort_searching.h"

#include "Applications.h"

#include "plot.h"

#include <iostream>
#include<fstream>
#include<cstdlib>
#include<math.h>

using namespace std;

int main()
{
int select;

while(1)
{
	
cout<<"instructions:"<<endl;
cout<<"1.Insertion sort and its variants"<<endl<<"2.Quicksort and its variants"<<endl<<"3.Hybridsort and Searching"<<endl<<"4.Applications"<<endl<<"5.Exit"<<endl;

cout<<"Select Module\n";				
		cin>>select;

switch(select)							//selecting the module
{

	case 1:
			insertionsort_variants();
			break;
	case 2:
			quicksort_variants();
			break;
	case 3:
			hybridsort_variants();
			break;
	case 4:
			cout<<"Tower of hanoi:\n";
			hanoi();				//calling hanoi from Applications.h header file


			cout<<"lshaped triomino:\n";		//calling lashaped chess board function from Applications.h header file
			lshaped_triomino();

			cout<<"Monkey steps:\n";			//calling monkey steps function from Applications.h header file
			monkey_steps();

			cout<<"circus:\n";			//calling circus function from Applications.h header file
			circus();
			break;
	case 5:
			return 0;
}
}
}
