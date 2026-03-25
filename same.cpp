#include <iostream>
#include <vector> // Good practice to use vector instead of arrays
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n, s, x;
        int sum = 0; // Reset sum for each test case

        // FIX 1: Read n, s, and x BEFORE using them
        cin >> n >> s >> x;

        // FIX 2: Create the array AFTER reading n
        vector<int> a(n); 

        for(int j = 0; j < n; j++) {
            // FIX 3: Use 'j' (inner loop variable), not 'i'
            cin >> a[j];
            sum += a[j];
        }

        if(sum > s) {
            cout << "NO" << endl;
        } 
        else {
            // Logic note: Assuming you want the difference between s and sum
            int k = s - sum; 
            if(k % x == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}