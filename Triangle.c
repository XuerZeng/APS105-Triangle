#include <stdio.h>

int main(void){
    printf("Enter the number of rows in the triangle: ");
    int rows;
    int currentRow, currentCol;
    scanf("%d",&rows);
    for (currentRow=1; currentRow<=rows; currentRow+=1){
        for (currentCol=1;currentCol<=rows-currentRow;currentCol+=1){
            printf(" ");
        } for (currentCol=1; currentCol<=(2*currentRow-1);currentCol+=1){
            //print the last row
            if (currentRow==rows){
                printf("*");
            //print the first and last column of other row
            } else if (currentCol==1 || currentCol==(2*currentRow-1)){
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");

    }
    return 0;
}
