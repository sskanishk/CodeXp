#include <iostream>
#include <string>
using namespace std;

int main() {
	string x, y;
    cin >> x >> y;
    cout << x.size() <<" "<< y.size()<<endl;
    // cout << y.size();
    cout << x + y << endl;

    char temp;
    temp = x[0];
    x[0] = y[0];
    y[0] = temp;

    cout << x +" "+ y << endl;
    
    return 0;
}

// input
// abcdef xyz
// output
// 6 3
// abcdefxyz
// xbcdef ayz