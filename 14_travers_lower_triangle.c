#include <stdio.h>

void travers_lower_triangle(int arr[][3] , int row , int col) {

    for (int i =0; i< row ; i++) {

        for (int j = 0 ; j<=i ;j++) {

            printf(" %d ", arr[i][j]);
        }

    }



}

int main() {

    int arr[][3] = {

        {1, 2, 3},


        {4, 5, 6},

        {7, 8, 9}

    };

    travers_lower_triangle(arr,3,3);


    return 0;
}
