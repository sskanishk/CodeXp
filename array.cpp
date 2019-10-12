#include <iostream>
using namespace std;
int main() 
{
	int size, i;
	cin>>size;
    int numbers[size];

    for (int i = 0; i < size; ++i) 
    {
        cin >> numbers[i];
    } 

    // normal print
    // for (int i = 0; i < size; i++){
    // 	cout<<numbers[i]<<" ";
    // }

    // reverse print
    for(i=size-1; i>=0; i--){
    	cout<<numbers[i]<<" ";
    }
    
    return 0;
}