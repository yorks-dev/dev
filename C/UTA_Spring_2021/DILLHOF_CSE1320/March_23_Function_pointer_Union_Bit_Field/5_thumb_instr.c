#include <stdio.h>

struct thumb_instr{
    unsigned int : 3;
    unsigned int op1 : 2;
    unsigned int op2 : 7;
    unsigned int reserved1 : 4;
    unsigned int op : 1;
    unsigned int reserved2 : 15;
};

int main(){
    struct thumb_instr instr;

    printf("sizeof(instr) = %ld bits \n", sizeof(instr) * 8);

    instr.op1 = 0x1; //01
    instr.op1 = 0x7; //0000111
    instr.op = 0x1;  //1

    // READ MORE ON BIT_FILDS

}