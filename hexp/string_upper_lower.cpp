#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    int i;
    cin >> s;
    for ( i = 0; i <= strlen(s); i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
    		s[i]=s[i]-32;
        }
        else 
        if(s[i]>=65 && s[i]<=92)
    	{
    		s[i]=s[i]+32;
    	}
    }
    cout << s;
    
}