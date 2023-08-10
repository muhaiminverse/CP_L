#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string original = "1+3+4+5+9+7";
    string sorted = original; // Create a copy

    sort(sorted.begin(), sorted.end());

    cout << "Original string: " << original << endl;
    cout << "Sorted string: " << sorted << endl;

    return 0;
}
