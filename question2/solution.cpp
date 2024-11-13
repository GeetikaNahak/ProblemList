#include <iostream>
#include <cmath>  // For the pow function
using namespace std;

// Function to check if a number is a power of 4
bool isPowerOfFour1(int n){
    return ((n > 0) &&(( n & n-1) == 0) && ( n%3 == 1));
}


bool isPowerOfFour(int n) {
    // Loop through powers of 4, from 4^0 to 4^15
    for (int i = 0; i <= 15; i++) {
        int powerOfFour = pow(4, i);
        
        // If we find a power of four equal to 'n', return true
        if (powerOfFour == n)
            return true;
        
        // If the current power of four is greater than 'n', there's no need to continue
        if (powerOfFour > n)
            return false;
    }
    
    // 'n' is not a power of four
    return false;
}

int main() {
    int t;  // number of test cases
    cin >> t;

    // Process each test case
    while (t--) {
        int m;  // number of numbers in this test case
        cin >> m;
        
        // Process each number
        for (int i = 0; i < m; ++i) {
            int num;
            cin >> num;
            
            // Output "true" or "false" based on the result of the check
            cout << (isPowerOfFour(num) ? "true" : "false") << " ";
        }
        
        cout << endl;
    }

    return 0;
}
