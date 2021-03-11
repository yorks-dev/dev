#include <stdio.h>
#include <stdlib.h>

int dice_roll(int num){

		switch(num) {

		case 1:
			printf("You rolled a 4!\n");
			return 4;
		case 2:
			printf("You rolled a 6!\n");
			return 6;
		case 3:
			printf("You rolled a 8!\n");
			return 8;
		case 4:
			printf("You rolled a 10!\n");
			return 10;
		case 5:
			printf("You rolled a 12!\n");
			return 12;
		case 6:
			printf("You rolled a 20!\n");
			return 20;
		}

	return 0;
}

int main() {
	
	printf("1. Roll d4\n");
	printf("2. Roll d6\n");
	printf("3. Roll d8\n");
	printf("4. Roll d10\n");
	printf("5. Roll d12\n");
	printf("6. Roll d20\n");
	printf("Press Q to quit.\n");


	char c[] = {'0', '\0'};
	int i;
	while(1) {
		printf("> ");
		scanf("%c", &c[0]);
		getchar();
		if(c[0] == 'Q' || c[0] == 'q'){
			printf("Thanks for playing! \n");
			break;
		}	
		else {
			i = dice_roll(atoi(c));
			if(i == 0) {
				printf("Dice not in list.\n");
			}
		}
	}
}









