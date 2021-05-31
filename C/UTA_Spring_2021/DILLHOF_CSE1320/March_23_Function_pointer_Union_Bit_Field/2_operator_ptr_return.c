#include <stdio.h>
#include <string.h>

int add(int a, int b){
    return a + b;
}

int substract(int a, int b){
    return a - b; 
}

int (*choose_op(char *c))(int, int){
    if(!strcmp(c, "add")){
        return add;
    } else if(!strcmp(c, "substract")){
        return substract;
    } else{
        return NULL;
    }
}

int main(){
    char *op = "add";

    int (*fn)(int, int) = choose_op(op); // returns a function pointer
    int fn_value = fn(10, 3);
    // int (*fn)(int, int) = choose_op(op)(10, 3);  THIS ALSO WORKS

    

}