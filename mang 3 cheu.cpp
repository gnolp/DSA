#include <bits/stdc++.h>

using namespace std;

int main() {
    // Kích thước của mảng 3 chiều
    int x_size = 2;
    int y_size = 2;
    int z_size = 2;

    // Khai báo mảng 3 chiều sử dụng std::vector
    vector<vector<vector<int>>> threeDVector(x_size,vector<vector<int>>(y_size,vector<int>(z_size)));

    // Sử dụng mảng 3 chiều
    for (int x = 0; x < x_size; ++x) {
        for (int y = 0; y < y_size; ++y) {
            for (int z = 0; z < z_size; ++z) {
                cin >>threeDVector[x][y][z];
            }
        }
    }

    // In ra giá trị của mảng 3 chiều
    for (int x = 0; x < x_size; ++x) {
        for (int y = 0; y < y_size; ++y) {
            for (int z = 0; z < z_size; ++z) {
                std::cout << "threeDVector[" << x << "][" << y << "][" << z << "] = " << threeDVector[x][y][z] << std::endl;
            }
        }
    }

    return 0;
}
