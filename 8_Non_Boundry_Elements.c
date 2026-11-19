#include <stdio.h>

void non_boundry_element(int arr[][3] , int row , int col) {

    for (int i = 0 ; i<row ; i++) {

        for (int j = 0 ; j <col ; j++) {

            if (i ==0 || i == row-1 || j == 0 || j == col-1) {

                // do nothing
            }

            else {

                printf( "%d", arr[i][j]);
            }
        }
    }
}


int main() {
    int arr[][3] = {

        {1, 2, 3},

        {4, 5, 6},

        {7, 8, 9}
    };

    non_boundry_element(arr,3,3);

    return 0;
}
