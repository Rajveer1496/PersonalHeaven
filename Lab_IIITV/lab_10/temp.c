//Write a C program to search for a specific word in a file and replace it with another word.

#include <stdio.h>
#include <ctype.h>

void main(){
	
	FILE *file = fopen("3.txt","r");
	
	int count =0;
	
	

	char arr[25];
	char word[20];
	char rep[20];
	
	int digit=0,words=0,space=0,line=0,chr=0,alpha=0;
	
	// FILE to array
	for(int i=0; i<25; i++){
		fscanf(file,"%c",&arr[i]);
		
		if(isalpha(arr[i])){
			alpha++;
		}
		
		if(isspace(arr[i])){
			space++;
		}
		
		if(isdigit(arr[i])){
			digit++;
		}
		
		if(arr[i] == '\n'){
			line++;
		}
		
		if(arr[i] == ' '){
			if(arr[i+1] != ' '){
				words++;
			}
		}
		
		
		
	}
	
	printf("digit %d\n",digit);
	printf("words %d\n",words);
	printf("digit %d\n",digit);
	printf("lines %d\n",line);
	printf("space %d\n",space);
	printf("alpha %d\n",alpha);
	
	
	for(int i=0; i<25; i++){
		printf("%c",arr[i]);
	}
	
	/*
	printf("Enter the word that you want to Find\n");
	fgets(word,sizeof(word),stdin);
	
	//to calculate no of digits in word
	int a;
	for(i=0;i<sizeof(word);i++){
	
	}
	
	printf("%s\n",word);
	
	for(int i=0; i<115; i++){
		if(word[0] == arr[i]){
			for(j =0 ; j < sizeof(word); j++){
				if(word[j] != )
			}
		}
	}
	*/
		

	printf("\n");
	
	for (char c = fgetc(file); c != EOF; c = fgetc(file)){ 
  		// Increment count for this character 
  	      count = count + 1;
  	      }
  	      
  	      printf("%d\n",count);
  	      
  	      	fclose(file);
}
