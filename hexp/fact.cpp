#include <iostream>
using namespace std;

int main(){
    int num, ans = 1;
    int i;
    cin >> num;
    for (i = 1; i<=num; i++){
        ans = ans * i;
    }
    cout << ans;
}