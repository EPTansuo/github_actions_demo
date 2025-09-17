#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int n = rand();
	if(n%10>=5)
		printf("fail\n");
	else 
		printf("succ\n");
}



