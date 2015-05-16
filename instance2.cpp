#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n=0;
	cin>>n;
	float y=0;
	for(int i=1;i<=n;i++){
		y=y+log(i);
	}
	
	cout<<exp(y);
}
