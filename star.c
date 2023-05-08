#include <stdio.h>

void print_star(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main(void)
{
    print_star(5);
}
