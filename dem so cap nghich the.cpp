#include <iostream>
#include <vector>
using namespace std;

long long mergeAndCount(vector<int>& a, int left, int mid, int right) {
    vector<int> leftArr(a.begin() + left, a.begin() + mid + 1);
    vector<int> rightArr(a.begin() + mid + 1, a.begin() + right + 1);

    int i = 0, j = 0, k = left;
    long long inv_count = 0;

    while (i < leftArr.size() && j < rightArr.size()) {
        if (leftArr[i] <= rightArr[j]) {
            a[k++] = leftArr[i++];
        } else {
            a[k++] = rightArr[j++];
            inv_count += (leftArr.size() - i);
        }
    }

    while (i < leftArr.size())
        a[k++] = leftArr[i++];
    while (j < rightArr.size())
        a[k++] = rightArr[j++];

    return inv_count;
}

long long mergeSortAndCount(vector<int>& a, int left, int right) {
    if (left >= right)
        return 0;

    int mid = left + (right - left) / 2;
    long long inv_count = 0;

    inv_count += mergeSortAndCount(a, left, mid);
    inv_count += mergeSortAndCount(a, mid + 1, right);
    inv_count += mergeAndCount(a, left, mid, right);

    return inv_count;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a)
        cin >> x;

    long long result = mergeSortAndCount(a, 0, n - 1);
    cout << n - result << endl;

    return 0;
}
