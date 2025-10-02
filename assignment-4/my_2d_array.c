#include <stdio.h>
#include <stdlib.h>

struct Matrix
{
    int rows;
    int cols;
    int **data;
};

int main()
{
    struct Matrix m;
    printf("Enter rows and cols: ");
    scanf("%d %d", &m.rows, &m.cols);

    m.data = malloc(m.rows * sizeof(int *));
    for (int i = 0; i < m.rows; i++)
    {
        m.data[i] = malloc(m.cols * sizeof(int));
    }

    printf("Enter elements:\n");
    for (int i = 0; i < m.rows; i++)
    {
        for (int j = 0; j < m.cols; j++)
        {
            scanf("%d", &m.data[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for (int i = 0; i < m.rows; i++)
    {
        for (int j = 0; j < m.cols; j++)
        {
            printf("%d ", m.data[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m.rows; i++)
    {
        free(m.data[i]);
    }
    free(m.data);
    return 0;
}
