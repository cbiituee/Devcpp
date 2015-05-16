#include<iostream>
using namespace std;
int main(){
	int x=0; int y=0; float z=0;
	cin>>x;
	cin>>y;
	z=(float)y;
while(x>0 &&x<=2000&&x%5==0)
	{ if(y>0&&y<=2000&&y>x)
	    { y=y-x;
	    z=(float)y-(0.50);
		 }
	   break;
      }

	cout<<z<<endl;
	return 0;
}
