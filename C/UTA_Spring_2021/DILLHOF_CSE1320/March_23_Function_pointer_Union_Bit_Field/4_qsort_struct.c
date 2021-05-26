#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME 64

typedef struct {
    char name[MAX_NAME];
    int hp;
    int ac;
} creature;

int compare(const void *elem1, const void *elem2){
    creature *a = (creature *) elem1;
    creature *b = (creature *) elem2;

    return (a->hp - b->hp);
}

void print_creature(creature c[], int numel){
    for(int i = 0; i < numel; i++){
        printf("{\"%s\", %d, %d }, ", c[i].name, c[i].hp, c[i].ac);
    }
    printf("\n");
}

int main(){
    creature creatures[5] = {
        {"Raishan", 520, 22},
        {"Thordak", 1452, 23},
        {"Umbrasyl", 340, 20},
        {"Brimscythe", 280, 19},
        {"Vorugal", 380, 20}
    };

    printf("Before qsort \n");
    print_creature(creatures, 5);

    qsort(creatures, 5, sizeof(creature), compare);

    printf("After qsort \n");
    print_creature(creatures, 5);

}