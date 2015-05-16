#include<iostream>
 using namespace std;
int dayofweek(int d, int m, int y)
{  int M; 
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
   return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
   
  
}
 
/* Driver function to test above function */
int main()
{ int day ,month,year; int D;
cin>>day;
cin>>month;
cin>>year;
   D=dayofweek(day,month,year);
 
   
    switch(D){
 		case 0: cout<<"It's Sunday "<<endl;
		  break;
 	case 1: cout<<"It's Monday "<<endl; 
	 break;
 	case 2: cout<<"It's Tuesday "<<endl;
	  break;
 	case 3: cout<<"It's Wednesday "<<endl; 
	 break;
 	case 4: cout<<"It's Thursday "<<endl; 
	 break;
 	case 5: cout<<"It's Friday "<<endl; 
	 break;
 	case 6: cout<<"It's Saturday "<<endl;
	  break;
 	
 }
    return 0;
}
