#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> l(n);
        int total_liars = 0, total_truth_tellers = 0;

        for (int i = 0; i < n; i++) {
            cin >> l[i];
            if (l[i] == n) {
                total_liars++;
            } else if (l[i] == 0) {
                total_truth_tellers++;
            }
        }

        if (total_liars > 1) {
            cout << "-1\n";
            continue;
        }

        int liars = 0;
        if (total_liars == 1) {
            liars = n - total_liars;
        } else if (total_truth_tellers == n) {
            liars = 0;
        } else {
            liars = n - total_truth_tellers;
        }

        cout << liars << "\n";
    }

    return 0;
}
