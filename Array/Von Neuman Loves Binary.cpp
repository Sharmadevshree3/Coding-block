#include<iostream>
using namespace std;
int main() {
	int decimal=0;
	int base=1;
	long binary=0;
	int n;
	cin>>n;
	long a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int decimal=0;
	    int base=1;
	    long binary=a[i];
		while(binary>0)
		{
			int a=binary%10;
			decimal=decimal+base*a;
			base=base*2;
			binary=binary/10;
		}
		cout<<decimal<<endl;
	}
	return 0;
}
