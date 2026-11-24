#include <stdio.h>

void print_middle_rows(int arr[][3] , int row , int col) {

    int middle_row = row/2;

    for (int j = 0 ; j < col ;j++) {

        printf(" %d " , arr[middle_row][j]);
    }


}

int main () {

    int arr[][3] = {{1,2,3},

                    {4,5,6},

                    {7,8,9}};


    print_middle_rows(arr,3,3);


    return 0;
}