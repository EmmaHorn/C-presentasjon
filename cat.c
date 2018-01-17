#include <stdio.h>

int main(int argc, char** argv)  {
    //File pointer
    FILE* file;
    //Get file pointer from OS using file provided by argv
    file = fopen(argv[1], "r");
    //If no file exists, exit!
    if(!file) {
        return -1;
    }
    //Read character by character until end of file
    char c;
    while((c = getc(file)) != EOF) {
        //Write char to standard output
        putchar(c);
    }
    //Close file
    fclose(file); 
    return 0;
}
