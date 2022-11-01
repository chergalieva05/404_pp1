#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
if (n%2==1)
cout <<"super";

else if(n%2==0 && 2<n<5)
cout<<"not super";


else if (n%2==1 && 6<n<20)
cout<<"super";


else if (n%2==1 && n>20)
cout<<"not super";



return 0;
}
