#include<iostream>
using namespace std;
int swap(int [],int ,int);
int Bubble(int [], int);
int main()
{
	int a[]={1,6,2,8,90,56,34,21,26,78,0};
	int size=sizeof(a)/sizeof(int);
	Bubble(a,size);
	for(int i=0; i<size;i++)
	{cout<<"a["<<i<<"]  "<<a[i]<<endl;

	}
	return 0;
	
}
int swap(int a[],int x,int y){
	int temp;
	temp=a[x];
	a[x]=a[y];
	a[y]=temp;

}
int Bubble(int a[],int n){
	for(int i=0;i<n;i++)
	for(int j=0;j<n-i-1;j++)
	if(a[j]>a[j+1])
	swap(a,j,j+1);
}
