#include <bits/stdc++.h>
using namespace std;

int main() {
    double x = 3.7;
    double y = -3.7;

    int f1 = floor(x);  // 3
    int f2 = floor(y);  // -4

    int c1 = ceil(x);   // 4
    int c2 = ceil(y);   // -3

    int r1 = round(x);  // 4
    int r2 = round(3.2); // 3

    int t1 = trunc(x);  // 3
    int t2 = trunc(y);  // -3
}