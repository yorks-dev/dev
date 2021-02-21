#include <stdio.h>

int main() {

    int overlap = 1;
    double x1, y1, width1, height1;
    printf("Rectangle 1: ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &width1, &height1);

    double x2, y2, width2, height2;
    printf("Rectangle 1: ");
    scanf("%lf %lf %lf %lf", &x2, &y2, &width2, &height2);

    double l1x = x1 - width1 / 2;
    double l1y = y1 + height1 / 2;
    double r1x = x1 + width1 / 2;
    double r1y = y1 - height1 / 2;

    double l2x = x2 - width1 / 2;
    double l2y = y2 + height1 / 2;
    double r2x = x2 + width1 / 2;
    double r2y = y2 - height1 / 2;

    if (l1x >= r2x || l2x >= r1x) 
        overlap = 0; 
    
    if (l1y <= r2y || l2y <= r1y) 
        overlap = 0; 

    if(overlap == 1){
        printf("Collision detected!");
    }
    else
        printf("Collision not detected!");
}