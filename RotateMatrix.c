#include<stdio.h>
int main()
{
int size,A[10][10],B[10][10];
repeat:
printf("\nEnter the Size of the matrix (A) : " );
scanf("%d",&size);

if( size > 2 && size < 10 ) {

printf("\nEnetr the value of: ");
    for(int i = 0;i < size;i++) {
        for(int j = 0;j < size;j++) {
            printf("\n\tA[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
printf("Original Matrix is: \n");
printMatrix(A,size);

printf("Rotated Matrix is: \n");
    for(int i = 0;i < size;i++) {
        for(int j = 0;j < size;j++ ) {
            int k = size-i-1;
          B[j][k] = A[i][j];
        }
    }
printMatrix(B,size);
sumofCorners(B,size);

}

else {
    printf("ERROR: Size of the Matrix should be inbetween 2 and 10 ");
    goto repeat;
}
}


void printMatrix(int X[10][10],int size) {
        for(int i = 0;i < size;i++) {
            for(int j = 0;j < size;j++) {
                printf("%d ",X[i][j]);
        }
        printf("\n");
    }
}
void sumofCorners(int B[10][10],int size) {
    int sum = B[0][0] + B[0][size-1] + B[size-1][0] + B[size-1][size-1];
printf("Sum of Corners of the Rotated Matrix is %d",sum);
}



