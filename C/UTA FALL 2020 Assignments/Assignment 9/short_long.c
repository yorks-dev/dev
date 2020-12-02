#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_MAX 1024

int main()
{
	printf("Enter file: ");		 
	char filename[BUFFER_MAX];			 
	scanf("%s", filename);

	FILE *fp_in = fopen(filename, "r");
	FILE *fp_out = fopen("short_long_results.txt", "w");

	if (fp_in == NULL)
	{
		printf("Unable to open file.\n");
		return 1;
	}

	char word[BUFFER_MAX] = {0}; 
	char smallest[BUFFER_MAX] = {0}; 
	char longest[BUFFER_MAX] = {0};
	int max = 0;
	int min = BUFFER_MAX;

	while (fgets(word, BUFFER_MAX, fp_in))
	{
		if (strlen(word) < min)
		{
			min = strlen(word);
			int i = 0;
			for (int j = 0; j < strlen(word); j++)
				smallest[i++] = word[j];
		}
		if (strlen(word) > max)
		{
			max = strlen(word);
			int i = 0;
			for (int j = 0; j < strlen(word); j++)
				longest[i++] = word[j];
		}
	}

	for (int i = 0; i < min; i++)
		fputc(smallest[i], fp_out);

	for (int i = 0; i < max; i++)
		fputc(longest[i], fp_out);
}