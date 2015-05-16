#include<iostream>
using namespace std;
int search (int [],int ,int);
int main()
{    int key ,z;
	int a[]={1,6,9,23,45,2,4};
	int size= sizeof(a)/sizeof(int);
 cin>>key;

		z=search(a,size,key);
		cout<<" the value of z is : \t"<<z<<endl;
		return 0;
}


int search (int a[],int size,int key){
	
	for(int i=0;i<size;i++){ 
	if(a[i]==key)
	return i;}
	return -1;
}
