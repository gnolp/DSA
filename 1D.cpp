#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int N, ST, EN, u, d;
    cin >> N >> ST >> EN >> u >> d;

    if (ST == EN) {
        cout << 0 << endl;
        return 0;
    }

    vector<bool> visited(N + 1, false);
    queue<pair<int, int>> q;
	
    q.push({ST, 0});
    visited[ST] = true;

    while (!q.empty()) {
        int current_floor = q.front().first;
        int num_presses = q.front().second;
        q.pop();

        if (current_floor + u <= N && !visited[current_floor + u]) {
            if (current_floor + u == EN) {
                cout << num_presses + 1 << endl;
                return 0;
            }
            q.push({current_floor + u, num_presses + 1});
            visited[current_floor + u] = true;
        }

        if (current_floor - d >= 1 && !visited[current_floor - d]) {
            if (current_floor - d == EN) {
                cout << num_presses + 1 << endl;
                return 0;
            }
            q.push({current_floor - d, num_presses + 1});
            visited[current_floor - d] = true;
        }
    }

    cout << -1 << endl;
    return 0;
}
