#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d)
{
    // return max({a,b,c,d});
    return max(max(a,b),max(c,d));
}

int main() {
    int a, b, c, d;
    // scanf("%d %d %d %d", &a, &b, &c, &d);
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}


// <algorithm> to use max function like python
// or 
// if(a > b){
//     if(a > c){
//         if(a>d)return a;
//         else return d;
//     }
//     else {
//         if(c > d)return c;
//         else return d;
//     }
// }
// else{
//     if(b > c){
//         if(b > d)return b;
//         else return d;
//     }
//     else{
//         if(c > d)return c;
//         else return d;
//     }
// }