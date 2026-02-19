#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int target;
	int a[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>target;
    bool found=false;
	for(int i=0;i<n;i++)
	{
		if(a[i]==target)
		{
			cout<<i<<endl;
			found=true;
			break;
		}
	}
	if(found==false)
	{
		cout<<-1<<endl;
	}
	return 0;
}
