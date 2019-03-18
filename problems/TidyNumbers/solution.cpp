#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

typedef vector<char> vc;

void print_last_tidy(vc digits) {
    int f = 0;
    // Walk through digits from right to left
    for (int i=0; i<(int)digits.size(); i++) {
        if (digits[i] < digits[i-1]) {
            // Found where this becomes non-tidy
            digits[f]--; // Decrement first digit in "stretch"
            for (int j=f+1; j<digits.size(); j++) {
                // Replace all digits following with '9'
                digits[j] = '9';
            }

            // We're done after finding first non-tidy portion
            break;
        }

        if (digits[f] != digits[i]) {
            // Store index of first digit in "stretch" of this type
            f = i;
        }
    }

    // Print last tidy number
    for (int i=0; i<(int)digits.size(); i++) {
        if (i > 0 || digits[i] != '0') {
            cout << digits[i];
        }
    }
}

int main() {
    int T;
    cin >> T;

    char d;
    while (T--) {
        // Get all digits in number
        vc digits;
        scanf(" %c", &d); // Get first character of number and ignore previous newline
        while (d != '\n') {
            digits.push_back(d);
            scanf("%c", &d);
        }

        // Output last tidy number encountered
        print_last_tidy(digits);
        cout << endl;
    }

    return 0;
}
