#include <stdio.h>
#define ROWS 3
#define COLS 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int addMatrix(int a[ROWS][COLS],int b[ROWS][COLS],int c[ROWS][COLS]){
	
	int i,j;
	
	for(i=0;i<ROWS;i++)
		for(j=0;j<COLS;j++)
			c[i][j]=a[i][j]+b[i][j];
}

int printMatrix(int a[ROWS][COLS]){
	
	int i,j;
	
	for(i=0;i<ROWS;i++){
		printf("\n");
		for(j=0;j<COLS;j++)
			printf("%3d",a[i][j]);
		}
}
int main(void) {
	int A[ROWS][COLS]={
	{2,3,0},
	{8,9,1},
	{7,0,5}
	};
	
	int B[ROWS][COLS]={
	{1,0,0},
	{0,1,0},
	{0,0,1}
	};
	
	int C[ROWS][COLS];
	
	int i,j;
	
	addMatrix(A,B,C);
	printMatrix(C);
	
	return 0;
}
