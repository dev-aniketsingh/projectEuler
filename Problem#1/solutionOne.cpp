#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int64_t testCases;
    cin>>testCases;
    for(int64_t i = 0; i < testCases; i++) {
        int64_t n;
        cin>>n;
        int64_t a, b, c;
        int64_t n1 = 0,n2 = 0,n3 = 0;
        n1 = (n-1) / 3;
        a = 3*n1*(n1+1)/2;
        n2 = (n - 1) / 5;
        b = 5*n2*(n2+1)/2;
        n3 = (n-1) / 15;
        c = 15*n3*(n3+1)/2;
        cout << a + b - c << endl; 
    }    
    return 0;
}
