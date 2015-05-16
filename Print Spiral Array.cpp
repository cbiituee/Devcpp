#include<iostream>
using namespace std;
void PrintSpiral(int a[][3],int n ,int m){
	int T,B,L,R; 
	int dir=0;
	T=0; B=n-1,L=0;R=m-1;
	while(T<=B&&L<=R){
		if(dir==0){ for(int i=L;i<=R;i++) 
		{ cout<<a[T][i]<<endl;}
		T++;
		}
	    if(dir==1){  for(int j=T;j<=B;j++)
		{    cout<<a[j][R]<<endl;}
		R--;
		}
		if(dir==2){ for(int k=R; k>=L;k-- )
		{ cout<<a[B][k]<<endl;	}
		B--;
		}
		if(dir==3){ for(int l=B;l>=T;l--)
		{  cout<<a[l][L]<<endl;}
		L++; 
		}
		
		dir=(dir+1)%4;
	}
}
int main(){ 
	int a[][3]={{10,25,33}, {21,32,43},{20,42,51}}; 
	int n,m;
	n=3;m=3;
	 PrintSpiral(a,n,m);
	 return 0;

}
