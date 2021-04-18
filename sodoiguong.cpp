#include <iostream>
#include <stdlib.h>
using namespace std;

bool check(int n)
{
	int temp = n, d, sum = 0;
	if(temp < 10) return false;
	else
	{
	while(temp > 0)
	{
		d = temp%10;
		sum = sum*10 +d;
		temp = temp/10;
	}
	}
	if(sum == n) return true;
	else return false;
}

int main()
{
	int test;
	cin >> test;
	for(int t=0; t < test; t++)
	{
	int a, b, cnt=0;
	cin >> a >> b;
	for(int i = a; i <= b; i++)
	if(check(i)) cnt++;
	cout << cnt << endl;
	}
	return 0;
}
