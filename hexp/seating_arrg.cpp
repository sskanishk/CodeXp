 // You will be given a seat number, 
 // find out the seat number facing you and the seat type, 
 // i.e. WS, MS or AS.

#include <iostream>
using namespace std;

int main(){
	int t, s;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> s;
		if (s <= 108)
		{
			switch( s % 12){
				case 1: cout << s+11 <<" WS\n";
					break;
				case 2: cout << s+9 <<" MS\n";
					break;
				case 3: cout << s+7 <<" AS\n";
					break;

				case 4: cout << s+5 <<" AS\n";
					break;
				case 5: cout << s+3 <<" MS\n";
					break;
				case 6: cout << s+1 <<" WS\n";
					break;

				case 7: cout << s-1 <<" WS\n";
					break;
				case 8: cout << s-3 <<" MS\n";
					break;
				case 9: cout << s-5 <<" AS\n";
					break;

				case 10: cout << s-7 <<" AS\n";
					break;
				case 11: cout << s-9 <<" MS\n";
					break;
				case 12: cout << s-11 <<" WS\n";
					break;
			}
		}
	}
	return 0;
}