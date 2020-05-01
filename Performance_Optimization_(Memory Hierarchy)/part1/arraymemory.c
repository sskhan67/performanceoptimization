// C program demonstrating how 2d and 3d arrays are stored in memory

#include "arraymemory.h"

int main()
{
	printf("Initializing a 2d array of 3 rows with 4 values each, which makes 12 total values.\n\nThe array:");
	uint32_t array2d[3][4] = {{5,10,15,20},{40,60,80,90},{70,60,50,35}};
	
	for (int i = 0; i < 3; i++) {
		printf("\n");
			for (int j = 0; j < 4; j++) 
				printf("%i ", array2d[i][j]);
	}
	
	
	printf("\n\nInitializing a 3d array of 2 sections of 4 rows with 3 values each, which makes 24 total values.\n\nThe array:");
	uint32_t array3d[2][4][3] = {
		{{5,50,500},{100,10,1},{2,20,200},{23,6,36}},
	{{14,156,64},{53,57,12},{15,46,74},{36,26,15}}
	};
	
	for (int i = 0; i < 2; i++) {
		printf("\n");
			for (int j = 0; j < 4; j++)  {
				printf("\n");
					for (int t = 0; t < 3; t++)
						printf("%i ", array3d[i][j][t]);
			}
	}
	
	printf("\n\nIf we print out the array by accessing it within the program through a nested loop:\n");
	for (int i = 0; i < 3; i++) 
		for (int j = 0; j < 4; j++)
			printf("%i ", array2d[i][j]);
	
	printf("\n");
	printf("3d array:\n");
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 4; j++)
			for (int t = 0; t < 3; t++)
				printf("%i ", array3d[i][j][t]);
	
	printf("\n\nIf we print it out by finding its address and printing out each consecutive location up to how many values it stores:\n");
	for (int i = 0; i < 12; i++) {
		printf("%i ", *((uint32_t*)array2d + i));
	}
	printf("\n\n");
	printf("3d array:\n");
	for (int i = 0; i < 24; i++) {
		printf("%i ", *((uint32_t*)array3d + i));
	}
	
	printf("\n\nThis should show that arrays in memory are stored consecutively and not in a multi-dimensional format."); 
}
