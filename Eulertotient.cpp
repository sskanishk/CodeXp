#include <iostream> 

using namespace std;

// Function to return gcd of a and b 
int gcd(int a, int b) 
{ 
	if (a == 0) 
		return b; 
	return gcd(b % a, a); 
} 

int phi(unsigned int n) 
{ 
	unsigned int result = 1; 
	for (int i = 2; i < n; i++) 
		if (gcd(i, n) == 1) 
			result++; 
	return result; 
} 

int main() 
{ 	
	int t;
	cout<<"Enter Total No. of Test Cases: ";
	cin>>t;
	while(t > 0)
	{
		int x;
		cout<<"Enter Value ";
		cin>>x;
		int n; 
		for (n = 1; n <= x; n++) 
			cout<<phi(n)<<" ";
		cout<<endl;
		t--; 
	}
	return 0; 

} 
