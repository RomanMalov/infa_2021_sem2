//
// Created by rmnmlv on 27.02.2021.
//
#include <iostream>;
int main() {
    int n;
    int m;
    int k;


    std::cin >> n;
    std::cin >> m;
    std::cin >> k;
    int *x_coords =  new int [k];
    int *y_coords =  new int [k];
    int **array = new int *[n];
    array[0] = new int[n*m];

    for (int i=0; i<k; i++) {
        std::cin >> x_coords[i];
        std::cin >> y_coords[i];
        x_coords[i]--;
        y_coords[i]--;
    }

    for (int x=1; x<n; x++) {
        array[x] = array[x-1] + m;
    }
    for (int x=0; x<n; x++) {
        for (int y=0; y<m; y++) {
            array[x][y] = 0;
        }
    }

            for (int i=0; i<k; i++) {
                int x = x_coords[i];
                int y = y_coords[i];
                array[x][y] = -1;
                for (int p = -1; p<=1; p++) {
                    for (int q = -1; q<=1; q++) {
                        if (((x + p) < n) and ((x + p) >= 0) and ((y + q) < m) and ((y + q) >= 0)) {
                            if (array[x + p][y + q] != -1){
                                array[x + p][y + q]++;
                            }
                        }
                    }
                }
            }

    for (int x=0; x<n; x++) {
        for (int y=0; y<m; y++) {
            std::cout << array[x][y] << ' ';
        }
        std::cout << '\n';
    }
    delete[] array[0];
    delete[] array;
    delete[] x_coords;
    delete[] y_coords;
    return 0;
}

