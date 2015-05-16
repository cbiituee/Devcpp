#include<iostream>
using namespace std;
int sub(int a[],int size,int k);
int main(){
	int array[]={1,2,13,14,50,17,81,9,10,11,34,67};
	int size=sizeof(array)/sizeof(int);
	int k;
	cin>>k;
	sub(array,size,k);
	return 0;
	
}
int sub(int a[],int size,int k){
	int max;

	   
	
	int*b=new int[k];
	for(int i=0;i<=size-k;i++){
		max=a[i];
		for(int j=0;j<k;j++){ 
		 b[j]=a[j+i];
		 if(max<=b[j])
		 max=b[j];
			}
			cout<<i<<" th iteraion max is : \t"<<max<<endl;
	}
	
	return 0;
}

