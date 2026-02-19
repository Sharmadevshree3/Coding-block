#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int frequency=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				frequency++;
			}
		}
		if(frequency > n / 2)
        {
            cout << a[i];
            return 0;   
        }
    }

    cout << -1;   
    return 0;
}
