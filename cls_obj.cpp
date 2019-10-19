#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student{
    private:
        int total = 0;
        int marks[5];

    public:
        void input(){
            for(int i = 0; i<5; i++){
                cin>>marks[i];
            }
        } 
        int calculateTotalScore(){
            for(int i = 0; i<5; i++){
                total += marks[i];
            }
            return total;
        }

// //In a few lines
// class Student{   
//     private:
//         int a, b, c, d, e;
//     public:
//         void input(){
//             cin>>a>>b>>c>>d>>e;
//         }
//         int calculateTotalScore(){
//             return (a+b+c+d+e);
//         }    
// };



        
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}



// input

// 3
// 30 40 45 10 10
// 40 40 40 10 10
// 50 20 30 10 10

// output - 1