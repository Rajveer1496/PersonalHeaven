#include<stdio.h>
#include<stdlib.h>
void main(){

float cur[2][1000] = {{1,2,3,4,5,6,7,8,9,10},
		      {0.012,1,0.71,0.0064,1.06,0.65,1.13,1.27,0.59,0.14}};

FILE *data = fopen("data.txt","w");

if(data==NULL){
	printf("Error\n");
	goto END;
}

for(int i=0;i<2;i++){
	for(int j=0; j<1000;j++){
		fprintf(data,"%.2f ",cur[i][j]);
	}
	fprintf(data,"\n");

}
fclose(data);
END:
}
