#include<iostream>
using namespace std;
int swap(int[],int,int);
int part(int[],int,int);
int quickSort(int[],int,int);
int main(){
	int a[]={4,2,7,9,21,45,67,32,30};
	int size=sizeof(a)/sizeof(int);
	quickSort(a,0,size-1);
	int k;
	cin>>k;
	cout<<"the element at kth place is "<<a[k-1]<<endl;
	return 0;
}
inline int swap(int a[],int i,int j)
{int temp;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
inline int part(int a[],int l,int r){
	
	int x;int n;
	x=a[l];
	int i=l+1;
	for(int j=l+1;j<r+1;j++)
	{ if(a[j]<=x){
	swap(a,i,j);
	i++;
	
	n=i;
		}
	}
		swap(a,l,i-1);
		return i;
	}
inline int quickSort(int a[],int l,int r){
	if(l<r){
		int p=part(a,l,r);
		quickSort(a,l,p-1);
		quickSort(a,p+1,r-1);
	}
}
