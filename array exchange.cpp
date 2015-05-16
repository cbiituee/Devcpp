#include<iostream>
using namespace std;
int exchange(int arr[],int size){
	int temp; int a[size];
	for(int i=0;i<size;i++){
		temp=arr[i];
		a[temp]=i;
		
	}
	for(int j=0;j<size;j++){
		cout<<a[j]<<endl;
	}
}
int main(){

	int arr[]  = {2, 0, 1, 4, 5, 3};
	int size=sizeof(arr)/sizeof(int);
	exchange(arr,size);
	
	return 0;

}
