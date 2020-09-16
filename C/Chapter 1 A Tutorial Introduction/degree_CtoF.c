// Convert degree F to degree C using C=(5/9)(F-32) 
# include <stdio.h>
# define LOWER 0
# define UPPER 300
# define STEP 20

int main()
{
	float farh, celsius;
	float lower, upper, step;

	farh = LOWER;
	while(farh <= UPPER)
	{
		celsius = 5 * (farh-32) / 9;
		printf("%3.0f %8.2f\n", farh, celsius);
		farh += STEP;
	}
}