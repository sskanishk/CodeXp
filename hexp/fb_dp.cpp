// optimised

#include <iostream>
using namespace std;

int main(){
    int l, t, w, h, i;
    cin >> l;
    cin >> t;
    for (i = 0; i<t; i++)
    {
        cin >> w >> h;
    
            if(w<l || h<l)
            {
                cout<<"UPLOAD ANOTHER\n";
            }

        else 
            
                if(w == h)
                {
                    cout<<"ACCEPTED\n";
                }
                else
                {
                    cout<<"CROP IT\n";
                }
            
    }
}


















n


// #include <iostream>
// using namespace std;

// int main(){
//     int l, t, w, h, i;
//     cin >> l;
//     cin >> t;
//     for (i = 0; i<t; i++)
//     {
//         cin >> w >> h;
//         if(w<l && h<l)
//         {
//             cout<<"UPLOAD ANOTHER\n";
//         }
//         else
//             if(w<l || h<l)
//             {
//                 cout<<"UPLOAD ANOTHER\n";
//             }

//         else 
//             if (w>=l && h>=l)
//             {
//                 if(w == h)
//                 {
//                     cout<<"ACCEPTED\n";
//                 }
//                 else
//                 {
//                     cout<<"CROP IT\n";
//                 }
//             }
//     }
// }

// 640
// 10
// 320 320
// 640 640
// 640 320
// 320 640
// 640 480
// 500 1000
// 1000 500
// 500 500
// 1000 1000
// 1 1