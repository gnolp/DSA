#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    set<pair<int, int>> seats;  // Lýu các ðo?n gh? tr?ng
    seats.insert({1, n});       // Ban ð?u t?t c? gh? tr?ng

    int rejected = 0;           // Ð?m s? nhóm b? t? ch?i

    while (m--) {
        char type;
        cin >> ws >> type;  // Ð?c lo?i s? ki?n

        if (type == 'A') {
            int k;
            cin >> k;
            bool served = false;

            // T?m ðo?n tr?ng ð?u tiên ð? ch? cho k ngý?i
            for (auto it = seats.begin(); it != seats.end(); ++it) {
                int l = it->first, r = it->second;
                if (r - l + 1 >= k) {
                    seats.erase(it);  // Xoá ðo?n c?
                    if (l + k <= r) {
                        seats.insert({l + k, r});  // Thêm ph?n dý bên ph?i
                    }
                    // Gh? t? l ð?n l+k-1 ð? ðý?c ph?c v?
                    served = true;
                    break;
                }
            }

            if (!served) rejected++;  // Không ð? ch?

        } else if (type == 'L') {
            int a, b;
            cin >> a >> b;

            // G?p ðo?n [a, b] vào các ðo?n tr?ng có giao nhau
            auto it = seats.lower_bound({a, 0});
            if (it != seats.begin()) --it;

            vector<pair<int, int>> toRemove;
            int new_l = a, new_r = b;

            while (it != seats.end() && it->first <= b) {
                if (it->second < a) {
                    ++it;
                    continue;
                }
                // Giao nhau
                new_l = min(new_l, it->first);
                new_r = max(new_r, it->second);
                toRemove.push_back(*it);
                ++it;
            }

            for (auto& p : toRemove) {
                seats.erase(p);
            }

            seats.insert({new_l, new_r});  // Thêm ðo?n ð? g?p
        }
    }

    cout << rejected << '\n';
    return 0;
}
