#include <stdio.h>


void print_corners(int arr[][3] , int row , int col) {

    for (int i =0; i<row ; i++) {

        for (int j = 0 ; j<col ; j++) {
            if ((i == 0 || i == row-1) && (j ==0 || j == col-1)) {

                printf(" %d ", arr[i][j]);
            }

        }

        printf("\n");
    }


}

int main() {
    int arr[][3] = {


        {1, 2, 3},

        {4, 5, 6},

        {7, 8, 9}

    };

    print_corners(arr,3,3);

    return 0;
}
