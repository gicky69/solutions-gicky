#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n;
    long long count = 0;
    string s;

    cin >> s;
    cin >> n;
    
    // Count the 'a' characters in the original string
    for (char c : s) {
        if (c == 'a') {
            count++;
        }
    }
    
    // Calculate the number of 'a' characters in the repeated string prefix
    long long repeated_count = (n / s.length()) * count;

    // Calculate the remaining characters to check for 'a'
    long long remaining_chars = n % s.length();
    
    for (int i = 0; i < remaining_chars; i++) {
        if (s[i] == 'a') {
            repeated_count++;
        }
    }

    cout << repeated_count;
}
