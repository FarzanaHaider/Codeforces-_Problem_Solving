#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string a = "";
        for (int i = 0; i < n; i += 2) {
            a += s[i];
        }

        cout << a << endl;
    }

    return 0;
}
