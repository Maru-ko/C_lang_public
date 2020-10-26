#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf("Argument Count: %d\n", argc);
    for (int idx = 0; idx < argc; idx++) {
        printf("Index [%d] Input: '%s'\tValue: %.2f\n", idx, argv[idx], atof(argv[idx]));
    }
    return 0;
}