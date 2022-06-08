#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, counter;
    string str;
    counter = 0;
    cin >> n >> str; 
    int arr[26] = {0};
    for (int i = 0; i < n; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (arr[str[i] - 'a'] == 0) {
                arr[str[i] - 'a'] = 1;
            }
        }
        else if (str[i] >='A' && str[i] <= 'Z') {
            if (arr[str[i] - 'A'] == 0) {
                arr[str[i] - 'A'] = 1;
            }
        }
    }
    for (int i = 0; i < 26; i++) {
        if (arr[i] == 1) {
            counter++;
        }
    }
    if (counter == 26) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
    return 0;
}