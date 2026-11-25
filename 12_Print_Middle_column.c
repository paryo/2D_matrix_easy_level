#include <stdio.h>

void print_middle_column(int arr[][3], int row , int col) {

    int middle_column = col/2;

    for (int i = 0 ; i <row ;i++) {

        printf(" %d ", arr[i][middle_column]);
    }

}

int main() {
    int arr[][3] = {

        {1, 2, 3},

        {4, 5, 6},

        {7, 8, 9}

    };

    print_middle_column(arr,3,3);

    return 0;
}
