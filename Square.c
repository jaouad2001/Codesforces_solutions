#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x[4], y[4];

        for (int i = 0; i < 4; i++)
        {
            scanf("%d %d", &x[i], &y[i]);
        }

        // Tri des coordonnées x et y
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (x[i] > x[j])
                {
                    int temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
                if (y[i] > y[j])
                {
                    int temp = y[i];
                    y[i] = y[j];
                    y[j] = temp;
                }
            }
        }

        // Calcul de la longueur du côté et de l'aire du carré
        int side = x[2] - x[1];
        int area = side * side;

        printf("%d\n", area);
    }

    return 0;
}