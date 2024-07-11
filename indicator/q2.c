#include<stdio.h>
#include<conio.h>
void main(){
//	int row=2;
//	int col=2;
	int arr[2][2]={{6,9},{10,18}};
	int i;
	int j;
	int (*ptr)[2]=arr;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d",ptr[i][j]);
		}
		printf("\n");
	}	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			ptr[i][j]=ptr[i][j]*ptr[i][j]*ptr[i][j];
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("the array after cubing the elements: %d \n",ptr[i][j]);
		}
		printf("\n");
	}
	
	
	
	getch();
	
}
