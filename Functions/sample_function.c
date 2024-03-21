#include <stdio.h>

void print_array(int an_array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", an_array[i]);
    }
}


int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s = 10;

    print_array(arr,s);
    
    return 0;
}