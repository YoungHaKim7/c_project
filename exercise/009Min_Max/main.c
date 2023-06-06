#include <stdio.h>

void minmax(int data[], int *min, int *max)
{
    // Initialize the minimum and maximum values to the first element of the array.
    *max = data[0];
    *min = data[0];

    // Iterate through the rest of the elements in the array.
    for (int i = 1; i < 3; i++)
    {
        // If the current element is less than the minimum value, then update the minimum value.
        if (*max < data[i])
        {
            *max = data[i];
        }

        // If the current element is greater than the maximum value, then update the maximum value.
        if (*min > data[i])
        {
            *min = data[i];
        }
    }
}

int main()
{
    // Prompt the user to enter three integers.
    printf("input 1st integer : ");
    int a;
    scanf("%d", &a);

    printf("input 2nd integer : ");
    int b;
    scanf("%d", &b);

    printf("input 3rd integer : ");
    int c;
    scanf("%d", &c);

    // Create an array and initialize it with the user's input.
    int data[3] = {a, b, c};

    // Find the minimum and maximum values in the array.
    int min, max;
    minmax(data, &min, &max);

    // Print the minimum and maximum values to the console.
    printf("min: %d, max: %d\n", min, max);

    return 0;
}