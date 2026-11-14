#include <stdio.h>


void print_anti_diagonal(int arr[][3] , int row , int col) {


    for (int i = 0 ; i<row ; i++) {

        printf("%d", arr[i][row-1-i]);


    }

    printf("\n");


}

int main () {

    int  arr[][3] = {{1,2,3},

                    {4,5,6},

                    {7,8,9}


                            };

    int row = sizeof(arr)/sizeof(arr[0]);

    int col = sizeof(arr[0])/sizeof(arr[0][0]);

    print_anti_diagonal(arr,row,col);

    return 0;
}