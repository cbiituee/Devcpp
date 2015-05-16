#include<iostream>
using namespace std;
int swap(int[],int,int);
int part(int[],int,int);
int quickSort(int[],int,int);
int main(){
	int a[]={34,23,12,67,45,27,86,17,90,78,81};
	quickSort(a,0,10);
	for(int i=0;i<11;i++){
		cout<<"a["<<i<<"]  : "<<a[i]<<endl;
	}
	return 0;
}
 
inline int swap(int a[],int i,int j)
{int temp;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
int part(int a[],int l,int r){
	
	int x;
	x=a[l];
	int i=l+1;
	for(int j=l+1;j<=r;j++)
	{ if(a[j]<=x){
	swap(a,i,j);
	i++;
	

		}
	}
		swap(a,l,i-1);
		return i;
	}
int quickSort(int a[],int l,int r){
	if(l<r){
		int p=part(a,l,r);
		quickSort(a,l,p-1);
		quickSort(a,p+1,r);
	}
}
