#include <iostream>
using namespace std;

void linear(int a[],int size,int key)
{
int i,c=0;
for(i=0;i<size;i++)
{
if(a[i]==key)
cout<<"key is found in index:"<<i+1<<endl;
c++;
}
if(c==0)
cout<<"key is not found"<<endl;
}
/*
main()
{
int size,a[100],key,i;
cin>>size;
for(i=0;i<size;i++)
cin>>a[i];
cin>>key;
linear(a,size,key);
}
*/
