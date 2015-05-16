#include<iostream>
using namespace std;
int swap(int [],int ,int);
int Selection(int [], int);
int main()
{
	int a[]={1,6,2,8,90,56,34,21,26,78,0};
	int size=sizeof(a)/sizeof(int);
	Selection(a,size);
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
int Selection(int a[],int size)
{int min;
	for(int i=0;i<size;i++){
	min=i;
	for(int j=min+1;j<size;j++){
		
		if(a[min]>a[j])
		
		swap(a,i,j);
	
	}
}
	}

