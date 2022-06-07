#include <iostream>
#include <string>
using namespace std; 
int main() {
    int n; 
    string str ; 
    cin >> n; 
    if (n == 1) {
        str = "I hate it"; 
    }
    else if (n == 2) {
        str = "I hate that I love it";
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                str = "I hate that ";
                continue;
            }
            if (i % 2 != 0 && i < n) {
                str = str + "I hate that ";
            }
            else if (i % 2 == 0 && i < n) {
                str = str + "I love that ";
            }
            else if (i % 2 != 0 && i == n) {
                str = str + "I hate it";
            }
            else if (i % 2 == 0 && i == n) {
                str = str + "I love it";
            }
        }
    }
    cout << str;
    return 0;
}
