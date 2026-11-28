#include <stdio.h>

void snake_pattern(int arr[][3] , int row , int col) {

    for (int i = 0; i<row ; i++) {

        if (i %2 == 0) {

            for (int j =0 ; j<col;j++) {

                printf(" %d ",arr[i][j]);
            }
        }

        else {

            for (int j = col-1 ; j >=0 ;j--) {

                printf(" %d " ,arr[i][j]);


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

    snake_pattern(arr,3,3);

    return 0;
}
