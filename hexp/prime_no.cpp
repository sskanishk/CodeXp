#include <iostream>
using namespace std;

int main(){
	int num, i, count, n;
	cin >> num;

	for (int n = 2; n < num; n++)
	{
		count = 1;
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				count = 0;
				break;
			}
		}
		if (count != 0)
		{
			cout << n << " ";
		}
	}
	return 0;
}







