#include<iostream>
#include<string>
using namespace std;


void swap(char*a ,char*b){
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void reverse(char str[])
{
    // get size of string
    int n = sizeof(str)/sizeof(char);
 cout<<n<<endl;
    for (int i = 0; i < n/2; i++)
        swap(str[i], str[n-i-1]);
}
 
// Driver program to test above functions
int main()
{
    char str[] = "GEEK";
 
    reverse(str);
    cout<<str<<endl;
 
    return 0;
}

