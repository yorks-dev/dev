#include <stdio.h>
#include <string.h>
#define MAX 1000
#define TRUE 1

int getWords(char *base, char target[MAX][MAX])
{
	int n=0,i,j=0;

	for(i=0;TRUE;i++)
	{
		if(base[i]!=' '){
			target[n][j++]=base[i];
		}
		else{
			target[n][j++]='\0';//insert NULL
			n++;
			j=0;
		}
		if(base[i]=='\0')
		    break;
	}
	return n;

}

int main() {
	
	printf("> ");
	char string[MAX];
	fgets(string, MAX, stdin);
	printf("Enter two indices: ");
	int indx1,indx2; 
	scanf("%d %d", &indx1, &indx2);

	//  strrchr -> gives pointer to last occurance of char.
	
	int len = (int)(strrchr(string, '\n') - string);
	string[len] = '\0';
	
    char arr[MAX][MAX];

	int n = getWords(string, arr);
	printf("Num words : %d\n", n);

	for(int i = 0; i <= n; i++) {
		if(i == indx1) 
			printf(arr[indx2]);
		else if(i == indx2)
			printf(arr[indx1]);
		else
			printf(arr[i]);
		printf(" ");
	}
	printf("\n");

	
	return 0;

}
