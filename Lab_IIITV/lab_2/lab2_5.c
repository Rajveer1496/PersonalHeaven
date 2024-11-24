#include <stdio.h>

void main()
{
	float r;
	const float PI=3.14;
	printf("Enter the radius of circle\n");
	scanf("%f", &r);
	printf("Area of Circle is %f\nCircumference of circle is %f\n",PI*r*r,2*PI*r);
}
