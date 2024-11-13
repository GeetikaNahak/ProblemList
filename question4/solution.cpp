#include <iostream>
#include <string>
using namespace std;

bool isValidMessage(const string &num) {
    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < num.length(); i++) {
        if (i % 2 == 0) {
            evenSum += num[i] - '0';
        } else {
            oddSum += num[i] - '0';
        }
    }
    return evenSum == oddSum;
}

int main() {
    int N;
    cin >> N;
    string num;
    cin >> num;

    if (isValidMessage(num)) {
        cout << "message is valid" << endl;
    } else {
        cout << "message is not valid" << endl;
    }

    return 0;
}
