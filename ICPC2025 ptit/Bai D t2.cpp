#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    set<pair<int, int>> seats;  // L�u c�c �o?n gh? tr?ng
    seats.insert({1, n});       // Ban �?u t?t c? gh? tr?ng

    int rejected = 0;           // �?m s? nh�m b? t? ch?i

    while (m--) {
        char type;
        cin >> ws >> type;  // �?c lo?i s? ki?n

        if (type == 'A') {
            int k;
            cin >> k;
            bool served = false;

            // T?m �o?n tr?ng �?u ti�n �? ch? cho k ng�?i
            for (auto it = seats.begin(); it != seats.end(); ++it) {
                int l = it->first, r = it->second;
                if (r - l + 1 >= k) {
                    seats.erase(it);  // Xo� �o?n c?
                    if (l + k <= r) {
                        seats.insert({l + k, r});  // Th�m ph?n d� b�n ph?i
                    }
                    // Gh? t? l �?n l+k-1 �? ��?c ph?c v?
                    served = true;
                    break;
                }
            }

            if (!served) rejected++;  // Kh�ng �? ch?

        } else if (type == 'L') {
            int a, b;
            cin >> a >> b;

            // G?p �o?n [a, b] v�o c�c �o?n tr?ng c� giao nhau
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

            seats.insert({new_l, new_r});  // Th�m �o?n �? g?p
        }
    }

    cout << rejected << '\n';
    return 0;
}
