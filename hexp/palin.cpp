#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s[500];
	cin >> s;
	int i, flag = 0;
	int len = strlen(s);

	for(i=0; i<len; i++){
		if(s[i] != s[len-i-1]){
			flag = 1;
			break;
		}
	}

	if (flag)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES";
	}
	return 0;
}