#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> sales(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> sales[i];
    }
    
    int target;
    cin >> target;

    int currentSum = 0;
    int left = 0;
    
    for (int right = 0; right < n; ++right) {
        currentSum += sales[right];
        
        while (currentSum > target && left <= right) {
            currentSum -= sales[left];
            left++;
        }
        
        if (currentSum == target) {
            cout << left + 1 << " " << right + 1 << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    return 0;
}
