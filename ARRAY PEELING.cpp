#include<iostream>
using namespace std;
int Arraypeel(int [][5],int,int);
int display(int[][5],int,int);
int main(){
	int a[5][5]={};
	int M,N;
	cin>>M;
	cin>>N;
	Arraypeel(a,M,N);
	display(a,M,N);
	
	return 0;
}
int display(int a[][5],int m, int n){
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	{
	cout<<a[i][j]<<endl;
	}
	
	return 0;
}
int Arraypeel(int a[][5],int m,int n){
	int left,right,top,bot;
	a[m][n]={};
	left=0,right=m-1;
	top=0,bot=n-1;
	for(int i=left;i<=right;i++)
	{cin>>a[i][top];
	}
	for(int j=top+1;j<=bot;j++){
		cin>>a[right][j];
	}
	for(int k=right-1;k>=left;k--)
	{cin>>a[k][bot];
	}
	for(int l=bot-1;l<=left+1;l--){
		cin>>a[left][l];
	}
	

}
