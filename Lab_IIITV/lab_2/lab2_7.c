#include <stdio.h>

void main()
{
	int s1,s2,s3,s4,s5;
	printf("Enter the Marks of all Five subjects in a row\n");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	printf("You got total %d marks, scoring %d percentage\n",s1+s2+s3+s4+s5,(s1+s2+s3+s4+s5)/5);

}
