#include <iostream>
using namespace std;

void main()
{
	int i,n,m;
	double *p,*q;
	double a[100],b[100],s;
	cout<<"Numarul de elemente= ";
cin>>n;
for(i=0;i<n;i++)
{
  cout<<"Elementul "<<i<<" = ";
  cin>>a[i];
}
	cout<<"Numarul de elemente= ";
cin>>m;
for(i=0;i<m;i++)
{
  cout<<"Elementul "<<i<<" = ";
  cin>>b[i];
}
if(n!=m)
{
  cout<<"numarul de componente ale vectorilor difera deci nu se poate face produsul scalar";
  exit(1);
}
s=0;
for(p=a,q=b,i=0;i<n;i++,p++,q++) 
s+=*p * *q;
cout<<"(a,b)="<<s;
system("pause");
}


