#include <stdio.h>
#define MAX 100

int main(){

    int input = 0;
    int grades[MAX] = {0};
    

    int n_grade = 0;

    while(1){
        
        printf("-------------------------\n");
        printf("|       Gradebook       |\n");
        printf("-------------------------\n");
        printf("| 1. Enter grade        |\n");
        printf("| 1. View grade         |\n");
        printf("| 3. Calculate Average  |\n");
        printf("| 4. Exit               |\n");
        printf("-------------------------\n");

        printf("> ");    
        scanf("%d", &input);

        if(input == 1){
            printf("Enter grade: ");
            scanf("%d", &grades[n_grade++]);
        }

        else if(input == 2){
            if(n_grade == 0){
                printf("No grades to show\n");
            }
            for(int i = 0; i < n_grade; i++){
                printf("%d ", grades[i]);
            }
            printf("\n");
        }

        else if(input == 3){
            double sum = 0;
            for(int i = 0; i <= n_grade; i++){
                sum += grades[i];
            }
            double avg = sum / (n_grade);
            printf("Average : %lf\n", avg);
        }
        else if(input == 4){
            printf("Bye!\n");
            break;
        }
        else {
            printf("Invalid Selection !!");
        }

    }

}

