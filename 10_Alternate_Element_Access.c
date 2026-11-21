#include <stdio.h>

void alternate_element(int arr[][3] , int row , int col) {

    int count = 0;

    for (int i =0 ; i<row ; i++) {

        for (int j = 0 ; j<col ; j++) {

            if (count %2 == 0) {

                printf("%d ", arr[i][j]);
            }

            count++;



        }
    }


}

int main() {
    int arr[][3] = {

        {1, 2, 3},

        {4, 5, 6},

        {7, 8, 9},
    };

    alternate_element(arr,3,3);

    return 0;
}
