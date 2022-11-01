#include<iostream>
 
using namespace std;
int main()
{ int a,b,c, sum=0,firstdigit,lastdigit;
cin>>a;
cin>>b;
lastdigit =b%10;
while(b>=10){
	b=b/10;
	
}
firstdigit=b;
sum=firstdigit+lastdigit;
c=a+sum;
cout<<c;
return 0;



}
