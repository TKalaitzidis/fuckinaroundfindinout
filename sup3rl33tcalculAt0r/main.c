#include <stdio.h>

int main() {
    char evaluate = 'y';

    while (evaluate == 'y')
    {
        printf("If you want to keep going please press y. If you want to quit press any other key.\n");
        scanf(" %c", &evaluate);
    }
    
    return 0;
}