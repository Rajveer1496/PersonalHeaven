#include <stdio.h>
#include <math.h>

int main() {
	int n,l=1,c=0;
	scanf("%d",&n);

	
	//if(n<=100000 && n>=1){return 0;}
	
	//for no of digits ((int)a)%((int)pow(10,l)) != a
	
	/*while(((int)n)%((int)pow(10,l)) != n){
	    l++;	    
	}*/

   // printf("No of digits: %d\n",l);
	
	for(int i; i<n; i++){
	    int a,r1,r2,d1,t=1;
	    scanf("%d",&a);

		while(((int)a)%((int)pow(10,t)) != a){
	    t++;	    
		}
	    
		printf("No of Digits = %d\n",t);

		if((int)a % 10 == 4){
			c=c+1;
		}

		for(int j=0; j<t ; j++){

			r1 = ((int)a)%((int)pow(10,i));
			r2 = ((int)a)%((int)pow(10,i+1));

			d1 = (int)(r2-r1)/(int)pow(10,i);

			if(d1 == 4){
				c=c+1;
			}
		}
		printf("No of four = %d\n",c);
	}

	printf("NO of 4's = %d",c);
}

