// Programming projects I've done for my school

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i]; 
    }

    int m = a[0];
    for (int j=0; j<n; j++){
        if (a[j]>m){
            m = a[j];
        }
    }
    cout << m;
}