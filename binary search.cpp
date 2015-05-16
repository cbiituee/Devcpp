#include<iostream>
using namespace std;
int binarysearch (int [],int ,int,int);
int main()
{    int key ,z;
	int a[]={1,2,9,13,15,22,24,27};
	int size= sizeof(a)/sizeof(int);
     cin>>key;
 int f=0;
		z=binarysearch(a,0,size,key);
		cout<<" the value of z is : \t"<<z<<endl;
		return 0;
}

int binarysearch(int a[],int f,int l,int key)
{
if(f>=0){

	int m=f+(l-f)/2;
	if(a[m]==key)
	return m;
	if(a[m]>key)
	return binarysearch(a,f,m-1,key);
	else
	return binarysearch(a,m+1,l,key);
		return -1;}
	

	
}
