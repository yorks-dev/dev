#include <stdio.h>

int main(void) {
    FILE *fp; 
    // unsigned char c;
    // unsigned char bytes[6] = {5, 37, 0, 88, 255, 12};
    // fp = fopen("./txtFiles/binary.bin", "wb");
    // fwrite(bytes, sizeof(char), 6, fp);

    // fclose(fp);

    // fp = fopen("./txtFiles/binary.bin", "rb"); // rb for "read binary"!
    
    // while (fread(&c, sizeof(char), 1, fp) > 0) 
    //     printf("%d\n", c);

    unsigned short v = 0x8834;
    fp = fopen("./txtFiles/binary.bin", "wb");
    fwrite(&v, sizeof v, 1, fp);

    fclose(fp);

    // fp = fopen("./txtFiles/binary.bin", "rb"); // rb for "read binary"!
    
    // unsigned short sh;

    // while (fread(&sh, sizeof(short), 1, fp) > 0) 
    //     printf("%hu\n", sh);

    // fclose(fp);
}