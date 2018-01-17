#include <stdio.h>
int main(int argc, char const *argv[]) {
    char buffer[500];
    while(1) { 
        fgets(buffer, 500, stdin);
        printf("%s",buffer);
    }
    return 0;
}