// Run with wordlist.txt

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
	int min_line = 0, max_line = 0, line_num = 0;

	while (fgets(word, BUFFER_MAX, fp_in))
	{
		if(word[strlen(word) - 1] == '\n')
            word[strlen(word)-1] = '\0';

		line_num++;
		if (strlen(word) < min)
		{
			min_line = line_num;
			min = strlen(word);
			int i = 0;
			for (int j = 0; j < strlen(word); j++)
				smallest[i++] = word[j];
		}
		if (strlen(word) > max)
		{
			max_line = line_num;
			max = strlen(word);
			int i = 0;
			for (int j = 0; j < strlen(word); j++)
				longest[i++] = word[j];
		}
	}

	fprintf(fp_out, "%d", min_line);
	fputc(' ', fp_out);
	for (int i = 0; i < min; i++)
		fputc(smallest[i], fp_out);
	
	fputc('\n', fp_out);

	fprintf(fp_out, "%d", max_line);
		fputc(' ', fp_out);
	for (int i = 0; i < max; i++)
		fputc(longest[i], fp_out);
}