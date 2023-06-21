#include <iostream>
#include <string>

using namespace std;

int get_punishment_number(int n) {
    int punishment = 0;
    for (int i = 1; i <= n; i++) {
        string digits = to_string(i*i);
        int sum = 0;
        for (char digit : digits) {
            sum += digit - '0';
        }
        if (sum == i) {
            punishment += i*i;
        }
    }
    return punishment;
}

int main() {
    int n = 10;
    int punishment_number = get_punishment_number(n);
    cout << "The punishment number of " << n << " is " << punishment_number << endl;
    return 0;
}
//tes