#include <iostream>
using namespace std;
int main()
{int n;
cin>>n;
if (n%2==1)
cout<<"odd";
else if (n%2==0 && n>0)
cout<<"even";
else if (n==0)
cout<<"none";
return 0;
}
