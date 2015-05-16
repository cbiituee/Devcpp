#include<iostream>
using namespace std;
int unionfind(int a[],int b[],int ,int);
int main(){
	int a[]={1,2,2,3,3,5,5,6,7,8,9,10,10,11,15,18};
	int b[]={2,3,4,10,11,13,14,15};
	int n=sizeof(a)/sizeof(int);
	int m=sizeof(b)/sizeof(int);
	unionfind(a,b,n,m);
	return 0;
	}
int unionfind(int a[],int b[],int n,int m){
	int i=0;int j=0; int temp1=0; int temp2=0;
	while(i<n&&j<m){
		if(a[i]<b[j])
		{ if(temp1<a[i])
		 {cout<<a[i]<<endl;
		 temp1=a[i];
		i++;}
		 else //reptition of argument;
		 i++;}
		if(a[i]>b[j])
		{	if(temp2<b[j])
		{cout<<b[j]<<endl;
		temp2=b[j];
		j++;  }
		else //again for reptition 
		j++;
		}
		if(a[i]==b[j])
		
		{ if(temp1<a[i]&&temp2<b[j])
		{
		cout<<a[i]<<endl;
		temp1=a[i];temp2=b[j];
		i++,j++;}
		else 
		i++; j++;
		}
	}
    while(i<n)
    { cout<<a[i]<<endl;
    i++;
	}
	while(j<m){
		 cout<<b[j]<<endl;
		 j++;
	}
}
