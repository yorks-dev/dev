/******************************************************************************
				
							ENCODER & DECODER	
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#define MAX_SHIFT 95
#define MAX_BUFFER 1000

void encoder(char str[], int seed) {
	
	srand(seed);
	int *arr= malloc(strlen(str) * sizeof(int));
    
   
	for(int i = 0; i < strlen(str); i++){
        arr[i] = rand() % (MAX_SHIFT - 0 + 1) + 0;
    }


	// Encoding time
	
	for(int i = 0; i < strlen(str); i++) {
		if(str[i] + arr[i] > 127) {
			str[i] = 32 +  str[i] + arr[i] - 127 - 1;
		}
		else
			str[i] += arr[i];
	}

	free(arr);
}

void decoder(char str[], int seed) {
	
	srand(seed);	
	int *arr= malloc(strlen(str) * sizeof(int));
    
    
	for(int i = 0; i < strlen(str); i++){
        arr[i] = rand() % (MAX_SHIFT - 0 + 1) + 0;
    }


	// Decoding time
	
	for(int i = 0; i < strlen(str); i++) {
		if(str[i] - arr[i] < 32) {
			str[i] = 127 - (32 - (str[i] - arr[i]))  + 1;
		}
		else
			str[i] -= arr[i];
	}

	free(arr);
}


int main()	
{
	int seed;
    
	printf("Enter seed value (int): ");
    scanf("%d", &seed);   

	getchar();

	printf("Enter string to encode : ");
	char str[MAX_BUFFER];
	fgets(str, MAX_BUFFER, stdin);
	if(str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	encoder(str, seed);
	printf("Encoded message: %s\n", str);
	decoder(str, seed);
	printf("Decoded message: %s\n", str);
	
    return 0;
}

