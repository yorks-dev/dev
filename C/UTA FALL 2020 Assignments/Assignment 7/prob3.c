#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_ROW 1000
#define MAX_COL 1000

int main(void) {
	
	//FILE * fpointer;
	//fpointer = fopen("cities.txt", "r");
	
	char arr[MAX_ROW][MAX_COL]=  {0};	
	int row = 0;
	
	while( fgets(arr[row], MAX_COL, stdin) ) {
		arr[row][strlen(arr[row]) - 1] = '\0';
		if(strcmp("END", arr[row]) == 0) {
			break;
		}
		row++;
	}
	
	srand(row);
	int city_rand =  rand() % (row - 1 + 1) + 1;
	printf("%s\n", arr[city_rand]);

	//fclose(fpointer);
} 
