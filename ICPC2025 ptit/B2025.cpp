#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int &x : A) cin >> x;

    multiset<int> colors;

    for (int i = 0; i < n; ++i) {
        auto it = colors.lower_bound(A[i]);
        if (it != colors.begin()) {
            --it;
            colors.erase(it);
        }
        colors.insert(A[i]);
    }

    cout << colors.size() << endl;
    return 0;
}
