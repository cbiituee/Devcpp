#include<iostream>
using namespace std;
int swap(int [],int ,int);
int Insertion(int [], int);
int main()
{
	int a[]={5,7,9,1,23,16,78,0,2};
	int size=sizeof(a)/sizeof(int);
	Insertion(a,size);
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
int Insertion(int a[],int size)
{int min;
	for(int i=1;i<size;i++)
	{ min=i;
	while(min>0){if(a[min]<a[min-1])
	swap(a,min,min-1);
	min=min-1;
	
	}
	}
}
