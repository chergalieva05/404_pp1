#include <iostream>
#include <cmath>
using namespace std;
int main()
{int n,a,b,c,d;
cin>>n;
a=n/8;
b=(n%8)/4;
c=((n%8)%4)/2;
d=(((n%8)%4)%2);
cout<<a+b*2+c*4+d*8;
return 0;
}

