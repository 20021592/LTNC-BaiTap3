#include <iostream>
using namespace std;

bool check(char *s)
{
	int t=0, check = true;
	char c;
	while(*(s+t)!='\0') t++;
	for(int i=0;i<t/2;i++)
	{
		if(*(s+i)!=*(s+t-i-1)) check = false;
	}
	return check;
}
int main()
{
	char *s = new char[100];
	cin >> s;
	if(check(s)) cout << "Yes";
	else cout << "No";
	return 0;
}
