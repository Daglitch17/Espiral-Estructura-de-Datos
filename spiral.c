#include <stdio.h>

#define R 5 // Number of rows in the matrix
#define C 4 // Number of columns in the matrix

// Function to print the elements of the matrix in a spiral order
void spiralMatriz(int bottom, int right, int arr1[R][C])
{
    int i, top = 0, left = 0;

    // Loop through the matrix elements in a spiral pattern
    while (top < bottom && left < right)
    {
        // Print elements of the first row
        for (i = left; i < right; ++i)
        {
            printf("%d ", arr1[top][i]);
        }
        top++;

        // Print elements of the last column
        for (i = top; i < bottom; ++i)
        {
            printf("%d ", arr1[i][right - 1]);
        }
        right--;

        // Print elements of the last row if it is within matrix boundaries
        if (top < bottom)
        {
            for (i = right - 1; i >= left; --i)
            {
                printf("%d ", arr1[bottom - 1][i]);
            }
            bottom--;
        }

        // Print elements of the first column if it is within matrix boundaries
        if (left < right)
        {
            for (i = bottom - 1; i >= top; --i)
            {
                printf("%d ", arr1[i][left]);
            }
            left++;
        }
    }
}

int main()
{
    int i, j;
    int arr1[R][C] = {
        {1, 2, 3, 4},
        {14, 15, 16, 5},
        {13, 20, 17, 6},
        {12, 19, 18, 7},
        {11, 10, 9, 8}
};

    // Print the original matrix
    printf("The given array in matrix form is:\n");
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Print the matrix in spiral order
    printf("The spiral form of the above matrix is:\n");
    spiralMatriz(R, C, arr1);
    return 0;
}
