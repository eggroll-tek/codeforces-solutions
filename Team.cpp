#include <iostream>
using namespace std;

int main() {
    int n, counter, arraySum;
    counter = 0; 
    cin >> n; 
    int arr[n][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        arraySum = 0; 
        for (int j = 0; j < 3; j++) {
            arraySum += arr[i][j]; 
        }
        if (arraySum >= 2) {
            counter++;
        }
    }
    cout << counter << '\n';
    return 0; 
}