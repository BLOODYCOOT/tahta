#include <stdio.h>

main(){
	int a = 1000;
	int sum = 0;
	int b = 0;
	int d = 0;

	for (int i = 0; i < a; i+=3 ){
		printf("%i\n", i);
		b = i+i;
		sum+=b;		
	}
	for (int c = 0; c < a; c+=5){

		printf("%i\n", c);
		d = c+c;
		sum+=d;		
	}

	printf("answer is : %i\n", sum);
}
