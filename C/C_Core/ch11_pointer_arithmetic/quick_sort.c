// qsort a array of structs containing animals with name and leg count

#include <stdio.h>
#include <stdlib.h>

struct animal {
    char *name;
    int leg_count;
};

// This is a comparison function called by qsort() to help it determine
// what exactly to sort by. We'll use it to sort an array of struct
// animals by leg_count.
int compare(const void *elem1, const void *elem2){

    // now we know that elem1 and elem2 are struct pointer
    const struct animal *animal1 = elem1;
    const struct animal *animal2 = elem2;

    if(animal1->leg_count < animal2->leg_count)
        return -1;
    
    if(animal1->leg_count > animal2->leg_count)
        return 1;
    
    return 0;

}

int main(void){

    struct animal animals[5] = {
        {.name = "Zebra", .leg_count=4},
        {.name = "Bird", .leg_count=2},
        {.name = "Snake", .leg_count=0},
        {.name = "Tiger", .leg_count=4}
    };

    // Call qsort() to sort the array. qsort() needs to be told exactly
    // what to sort this data by, and we'll do that inside the compar()
    // function.

    // This call is saying: qsort array a, which has 4 elements, and
    // each element is sizeof(struct animal) bytes big, and this is the 
    // function that will compare any two elements.

    qsort(animals, 4, sizeof(struct animal), compare);

    for(int i = 0; i < 4; i++){
        printf("%s\n", animals[i].name);
    }
}