#include <stdio.h>
#include <stdlib.h>

void generate_vals(double arr[], int SIZE, int LOW, int HIGH) {
	
	for(int i = 0; i < SIZE; i++) {
		double scale = (double)rand() / RAND_MAX;
		arr[i] = LOW + scale * (HIGH - LOW);
	}
	
	for(int i = 0; i < SIZE - 1; i++) {
		printf("%0.2lf, ", arr[i]);
	}
	printf("%0.2lf\n", arr[SIZE - 1]);

}



int main() {
	
	int SIZE, LOW, HIGH;
	printf("Enter size: ");
	scanf("%d", &SIZE);
	if(SIZE > 128) {
		SIZE = 128;	
	}
	printf("Enter low value: ");
	scanf("%d", &LOW);
	printf("Enter high value: ");
	scanf("%d", &HIGH);
	
	double *arr = malloc(sizeof(double) * SIZE); 
	
	generate_vals(arr, SIZE, LOW, HIGH);
}
