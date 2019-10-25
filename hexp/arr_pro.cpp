#include <iostream>
using namespace std;

int main()
{
    int n, i, a;
    cin >> n;
    // int arrList[n];
    // for (i = 0; i<n; i++)
    // {
    //     cin >> arrList[i];
    // }
    long long int ans = 1;
    for (i = 0; i<n; i++)
    {
        cin >> a;
        ans = (ans * a)%1000000007;
    }
    cout << ans;
    return 0;
}