#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s = "";

    char a = 'a';
    char b = 'b';
    char c = 'c';

    s+=a;
    s+=b;
    s+=c;

    sort(s.begin(), s.end());

    cout << s << endl;

    return 0;
}
