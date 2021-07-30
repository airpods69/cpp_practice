#include <stdio.h>
int main(){
	int rows,i,j,k;
	printf("no of rows:");
	scanf("%d",&rows);
	for (i=rows;i>1;--i){
		for(k=0; k<(rows-i) ;++k) printf(" ");
		for (j=0;j<i-1;j++) printf("#");
		printf("%d",i*2-1);
		for (j=0;j<i-1;j++) printf("%d",i-1);

		printf("\n");
	}
	return 0;
}
