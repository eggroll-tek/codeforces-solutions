#include <iostream>
using namespace std;

int main() {
    int l, b, years; //l == limak's weight, b == bob's weight 
    years = 0; 
    cin >> l >> b; 
    while (l <= b) {
        b *= 2;
        l *= 3;
        years++; 
    }
    cout << years << '\n';
}