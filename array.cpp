#include <stdio.h>

int main(){
	int arrays[5]={10,20,30,40,50};
	int i;
	
	printf("Element of the array are:\n");
	
	for(i = 0; i < 5; i++) {
		printf ("array[%d] = %d\n", i, arrays[i]);
	}
	return 0;
}
