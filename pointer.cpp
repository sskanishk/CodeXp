#include <iostream>
#include <cmath>

void update(int *a,int *b) {
    // int temp = *a;
    // *a = *a + *b;
    // if(temp > *b){
    //     *b = temp - *b;
    // }else{
    //     *b = *b - temp;
    // }

    // or

    // using ternary operator
    // int sum = *a + *b;
    // int abs_ = *a - *b > 0 ? *a - *b : -(*a - *b);
    // *a = sum;
    // *b = abs_; 

    // or

    // Using cmath or cstdlib library
    *a+=*b;
    *b=abs(*a-2**b); 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}



// Sample Input
// 4
// 5
// Sample Output
// 9
// 1
