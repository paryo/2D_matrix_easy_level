#include <stdio.h>

void print_main_diagonal(int arr[][3] , int row ) {\

    for (int i =0 ; i< row ; i++) {

        printf(" %d ", arr[i][i]);

    }

    printf("\n");


}



int main() {

    int arr[][3] = { {5,0,0},

                     {0,9,0},

                     {0,0,2}


                                };


    int row = sizeof(arr)/sizeof(arr[0]);

    print_main_diagonal(arr,row);


    return 0;
}