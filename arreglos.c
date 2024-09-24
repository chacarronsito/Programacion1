#include <stdio.h>

int main (int argc, char *argv[]) {
    int num[8]={3,4,7,9,10,100,0,4};
    for ( int pos = 0; pos < 8; pos++)
    {
        printf("%d\n", num[pos]);
    }
    return 0;
}