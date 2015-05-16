#include<iostream>
using namespace std;
int merge(int [],int ,int [],int,int [],int);
int main()
{


	int a[]={1,2,5,6,10,12};
	int b[]={1,3,7,9,13};
	int n=sizeof(a)/sizeof(int);
	int m=sizeof(b)/sizeof(int);

	int size=m+n;
	int c[size];
	merge(a,n,b,m,c,size);
	for(int i=0;i<m+n;i++)
	{cout <<"c["<<i<<"]  "<<c[i]<<endl;
	}
	return 0;
}

int merge(int a[],int n,int b[],int m,int c[],int size){
	int i=0;
	int j=0;
	int k=0;
	c[size]={0};
	while(i<n && j<m){
		if (a[i]>b[j])	
	{	c[k]=b[j];
		 j++,k++;}
	if(a[i]<b[j]) 
		{
		c[k]=a[i];
		i++,k++;}
		if(a[i]==b[j]){c[k]=a[i];
		i++,j++,k++;
		}
		
		}
	while(i<n)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<m)
	{
		c[k]=b[j];
		j++;
		k++;
	}
}

