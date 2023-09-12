#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    cin >> a;
    
    vector<int> b;
    int c;
    for (int i = 0; i < a; i++) {
        cin >> c;
        b.push_back(c);
    }
    
    int d;
    cin >> d;
    
    vector<int> e;
    for (int i = 0; i < d; i++) {
        cin >> c;
        e.push_back(c);
    }
    
    for (int i = 0; i < d; i++) {
        vector<int>::iterator f;
        f = lower_bound(b.begin(), b.end(), e[i]);
        if (f != b.end() && *f == e[i]) {
            cout << "Yes " << (f - b.begin()) + 1 << endl;
        } else {
            cout << "No " << (f - b.begin()) + 1 << endl;
        }
    }
    
    return 0;
}