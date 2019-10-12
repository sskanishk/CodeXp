#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// int main() {
//     int n, q, size, value, which, index;
//     cin >> n >> q;

//     vector< vector<int> > nvec;


//     for (int i = 0; i < n; ++i) 
//     {
//         cin >> size;
//         vector<int> ivec;
//         for (int j = 0; j < size; ++j) 
//         {
//             cin >> value;
//             ivec.push_back(value);
//         }
//         nvec.push_back(ivec);
//     }


//     for (int k = 0; k < q; ++k) 
//     {
//         cin >> which >> index;
//         cout << nvec[which][index] << endl;
//     }
//     return 0;
// }


// Input (stdin)
// no of row, no of query
// 2 2
// these two are row
// 3 1 5 4
// 5 1 2 8 9 3
// these two are query
// 0 1
// 1 3

// Output (stdout)
// 5
// 9




int main() {
    int n, q, i, x, j, i_val, k, ii, jj;
    cout<<"Enter no of row and no of query (__  __)";
    cin >> n >> q;
    vector< vector<int> > n_vec;
    for (i = 0; i < n; ++i)
    {
        vector<int> i_vec;
        cout<<"x";
        cin >> x;
        for (j = 0; j < x; ++j)
        {   
            cout<<"arr";
            cin >> i_val;
            i_vec.push_back(i_val);
        }
        n_vec.push_back(i_vec);
    }
    for (k = 0; k < q; ++k)
    {
        cout << "entr query (like __  __)";
        cin >> ii >> jj;
        cout << n_vec[ii][jj] << endl;
    }
    return 0;
}


