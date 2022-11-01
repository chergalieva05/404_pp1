#include<iostream>
#include<cmath>
using namespace std;
int main()
{int n;
cin>>n;
int a[n];
int min=0,max=0,maxpos,minpos,temp;
for (int i=0;i<n;i++)
{cin>>a[i];
}
max=a[0];
min=a[0];
maxpos=0;
minpos=0;
for (int i=0;i<n;i++)
{if (a[i]>max)
{max=a[i];
maxpos=i;
}
else if (a[i]<min)
{min=a[i];
minpos=i;
}
temp=a[maxpos];
a[maxpos]=a[minpos];
a[minpos]=temp;

cout<<a[i]<<" ";
}
}

