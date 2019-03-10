#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int testCase;
    cin>>testCase;
    for(int64_t i = 0; i < testCase; i++) {
        int64_t sum = 0, f2 = 0, f1 = 2, f = 0;
        int64_t num;
        cin>>num;
        while(f2 < num) {
            sum += f2;
            f = 4*f1 + f2;
            f2 = f1;
            f1 = f;
        }
        cout << sum << endl;
    }
    return 0;
}
