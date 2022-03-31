#include <stdio.h>
#include <iostream>

using namespace std;

// problem no. 2
int main() {
    cout << "first euler" << "\n";
    // 1, 2, 3, 5, 8, 13, 21, 34
    long long int x = 1;
    long long int y = 2;
    long long int totalEven = 0;
    cout << x << ", " << y;
    while(x+y <= 4000000) {
        long long int temp = y;
        y = x+y;
        x = temp;
        cout << ", " << y;
        if (!(y & 1))
            totalEven += y;
    }
    //we missed the number 2, so add that at last
    cout << "\nTotal: " << totalEven+2 << "\n";
}