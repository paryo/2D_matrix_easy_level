#include <stdio.h>

void traverse_upper_triangle(int arr[][3] , int row , int col) {

    for (int i=0 ; i< row ; i++) {

        for (int j = i ; j<col ;j++) {

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

    traverse_upper_triangle(arr,3,3);

    return 0;
}
