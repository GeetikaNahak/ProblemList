#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;  // Read the number of chocolate purchases
    
    vector<int> chocolates(N);
    int maxID = 0;
    
    // Read the chocolate IDs and find the maximum ID
    for (int i = 0; i < N; ++i) {
        cin >> chocolates[i];
        maxID = max(maxID, chocolates[i]);
    }

    // Create a frequency array to count occurrences of each chocolate ID
    vector<int> freq(maxID + 1, 0);  // Using maxID + 1 because IDs are 1-based

    // Count the frequency of each chocolate ID
    for (int i = 0; i < N; ++i) {
        freq[chocolates[i]]++;
    }

    // Find the maximum frequency
    int maxFreq = 0;
    for (int i = 0; i <= maxID; ++i) {
        maxFreq = max(maxFreq, freq[i]);
    }

    // Count how many chocolates have the maximum frequency
    int favoriteCount = 0;
    for (int i = 0; i <= maxID; ++i) {
        if (freq[i] == maxFreq) {
            favoriteCount++;
        }
    }

    // Output the result
    cout << favoriteCount << endl;

    return 0;
}
