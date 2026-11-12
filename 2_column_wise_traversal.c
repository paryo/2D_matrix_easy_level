#include <stdio.h>


void column_wise_traversal(int arr[][3] , int col , int row) {

    for (int j = 0 ; j<col ; j++) {

        for (int i = 0 ; i <row ; i++) {

            printf( "%d" , arr[i][j]);
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

    int row = sizeof(arr)/sizeof(arr[0]);

    int col = sizeof(arr[0])/sizeof(arr[0][0]);


    column_wise_traversal(arr, col,row);


    return 0;
}
