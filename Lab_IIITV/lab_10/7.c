//Write a C program to search for a specific word in a file and replace it with another word.

#include <stdio.h>
#include <string.h>

void main(){
	
	FILE *file = fopen("3.txt","r");

	char arr[150];
	char word[20];
	char rep[20];
	char temp[20];
	
	
	
	
	// FILE to array
	for(int i=0; i<115; i++){
		fscanf(file,"%c",&arr[i]); //TO transfer from file to array
	}
	
	printf("%ld\n",strlen(arr));
	
	puts(arr); //To print
	
	for(int i=0; i<(strlen(arr)); i++){
		printf("%c",arr[i]);   		 //To acess elements
	}
	
	//to store words in temp 
	int k=0;
	
	for(int i=k; i<(strlen(arr)) ; i++){
		
		if(arr[i] == ' '){
			break;
		}
		else{
			word[i] = arr[i];
		}
		k++;
	}
	
	word[k] = '\0';
	
	puts(word);
	
	
	
	
	
	
	
	
	/*printf("Enter the word that you want to Find\n");
	fgets(word,sizeof(word),stdin);
	
	//to calculate no of digits in word
	int a;
	for(i=0;i<sizeof(word);i++){
	
	}
	
	printf("%s\n",word);
	
*/		
	fclose(file);
	
}
