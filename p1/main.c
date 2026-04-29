#include <stdio.h>

int main()
{
    int T;
    int a = 900;
    int b = 750;
    int c = 200;
    scanf("%d", &T);
    bool n = false;
    for (int i = 1; i < T / a; i++)
    {
        for (int y = 2; y < T / b; y = y + 2)
        {
            for (int z = 1; z < T / c; z++) {
                if ((i * a + y * b + z * c) == T) {
                    if (z < i || z < y) {
                        printf("%d %d %d\n", i, y, z);
                        n = true;
                    }
                }
            }
        }
    }
    if(!n)
        printf("none");
    return 0;
}
