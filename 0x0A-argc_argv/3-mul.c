#include <stdio.h>
#include <stdlib.h>

/**
 * main multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * return int 0 on success
 */
int main(int argc, char **argv)
{
        int x, y;

        if (argc < 3)
        {
                printf("Error\n");
                return (1);
        }

        x = atoi(argv[1]);
        y = atoi(argv[2]);
        printf("%d\n", x * y);

        return (0);
}
