#include<iostream>
using namespace std;
int swap(int [],int ,int);
int Ssertion(int [], int);
int main()
{
	int a[]={16,78};
	int size=sizeof(a)/sizeof(int);
	Ssertion(a,size);
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
int Ssertion(int a[],int size)
{int min;
	for(int i=0;i<size;i++){
	min=i;
	for(int j=min+1;j<size;j++){
		
		if(a[min]>a[j])
		min=j;
		swap(a,i,min);
	//	min=j;
	}
}
	}

