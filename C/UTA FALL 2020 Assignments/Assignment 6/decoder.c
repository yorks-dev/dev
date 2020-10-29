#include <stdio.h>
#include <string.h>
#define MAX 1000

int main() {
	
	printf("Enter a string: ");
	char string[MAX];
	fgets(string, MAX, stdin);

	//  strrchr -> gives pointer to last occurance of char.
	
	int len = (int)(strrchr(string, '\n') - string);
	string[len] = '\0';	
	
	for(int i = 0; i <= len - 1; i++) {
		int new_char = string[i] - 3;	
		if(new_char < 32) {
			new_char = 128 - (32 - new_char);
		}
		string[i] = new_char;
	}
	printf("%s", string);
}

