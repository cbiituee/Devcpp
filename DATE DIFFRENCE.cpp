#include<iostream>
using namespace std;
struct Date{
	int d,m,y;
};
const int monthdays[12] = {0,31,59,90,120,151,181,212,243,273,304,334};
 int Leapyearcount(struct Date dt){
 	int i;
 	if(dt.m<=2)
 	dt.y--;
 	
 	i= dt.y/4-dt.y/100+dt.y/400;
 	cout<<i<<endl;
 	return i;
 }
 int getdiffrence(Date dt1,Date dt2){
 	long int n1,n2;
 	
 	n1=dt1.y*365+dt1.d+Leapyearcount(dt1)+monthdays[dt1.m-1];
 	n2=dt2.y*365+dt2.d+Leapyearcount(dt2)+monthdays[dt2.m-1];
 	cout<<n1<<endl;
 	cout<<n2<<endl;
 	cout<<"day differnce : "<<n2-n1<<endl;
 }
 int main(){
 	struct Date dt1={1,2,2000};
 	struct Date dt2={5,9,2000};
 	getdiffrence(dt1,dt2);
 	return 0;
 }
