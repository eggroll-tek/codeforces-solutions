#include <iostream>
using namespace std; 

int main() {
    int h1,t, width; //h1 = height of fence t = no. of friends
    width = 0;
    cin >> t >> h1;
    int h2[t]; //h2 = height of friends;
    for (int i = 0; i < t; i++) {
        cin >> h2[i];
    }
    for (int i = 0; i < t; i++) {
        if (h2[i] <= h1) {
            width++;
        }
        else {
            width += 2; 
        }
    }
    cout << width << '\n';
    return 0;
}
