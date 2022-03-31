#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

// Q.N. 3 -> find the biggest Prime factor of a given number

bool isPrime(long long int &aNum) {
    for(long long int i=sqrt(aNum); i>1; i--) {
        
        if(aNum%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long int num;
    cin >> num;
    //start at sqrt of that number
    for(long long int i=sqrt(num); i>1; i--) {
        if (num%i == 0) {
            if(isPrime(i)) {
                cout << i << "\n";
                break;
            }
        }
    }
}