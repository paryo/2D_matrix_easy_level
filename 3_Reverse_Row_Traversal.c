#include <stdio.h>

void reverse_row_trversal(int arr[][3] , int row , int col) {

    for (int i = 0 ; i<row ; i++) {

        for (int j = col-1 ; j >=0 ; j--) {

            printf( " %d ", arr[i][j]);
        }

        printf("\n");
    }



}

int main() {

    int arr[][3] = { {1,2,3},

                    {4,5,6},

                    {7,8,9}



                                };

    int row = sizeof(arr)/sizeof(arr[0]);

    int col = sizeof(arr[0])/ sizeof(arr[0][0]);


    reverse_row_trversal(arr,row,col);




    return 0;


}