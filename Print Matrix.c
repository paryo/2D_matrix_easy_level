#include <stdio.h>

void print_matrix(int arr[][3] , int rows , int cols) {

    for (int i = 0 ; i<rows ; i++) {

        for (int j = 0 ; j < cols ; j++) {

            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }




}

int main() {

    int arr[][3] = { {1,2,3} ,

                    {4,5,6},

                    {7,8,9}
                                };


    int rows = sizeof(arr) / sizeof(arr[0]);

    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);


   print_matrix(arr,rows,cols);

return 0;


}