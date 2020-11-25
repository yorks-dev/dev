#include "utils.h"

int remove_newline(char str[]) {
	int length = strlen(str);
	if (str[length - 1] == '\n') {
		str[length - 1] = 0;
		return 0;
	}

	return 1;
}

/*
 * Tokenize a single line of CSV data
 */
int parse_raw_csv(char raw_csv[], char buffer[][MAX_LEN], int num_properties) {
	int property_index = 0;
	char *token = strtok(raw_csv, ",");

	while (token != NULL && property_index < num_properties) {
		// Store the information
		strcpy(buffer[property_index++], token);

		token = strtok(NULL, ",");
	}

	return property_index;
}