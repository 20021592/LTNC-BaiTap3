#include <iostream>
#include <stdlib.h>
using namespace std;



int main()
{
	int n,read,b[1000];
	cin >> n;
	for(int j=0;j<1000;j++)
	b[j]=0;
	for(int i=0;i<n;i++)
	{
	cin >> read;
	b[read]++;
	}
	for(int i=0;i<1000;i++)
	{
		if(b[i]>1)
		{
			cout << "Yes";
			exit(0);
		}
	}
	cout << "No";
	return 0;
}
