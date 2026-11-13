#include <stdio.h>


void bottom_up_traversal(int arr[][3], int row , int col) {

    for (int i = row -1 ; i >=0 ; i--) {


        for (int j = 0 ; j < col ; j++) {


            printf(" %d ", arr[i][j]);

        }

        printf("\n");

    }


}


int main() {

    int arr[][3] = {{1,2,3} ,

                    {4,5,6} ,

                     {7,8,9} };


    int row = sizeof(arr)/sizeof(arr[0]);

    int col = sizeof(arr[0])/sizeof(arr[0][0]);

    bottom_up_traversal(arr,row,col);

    return 0;
}