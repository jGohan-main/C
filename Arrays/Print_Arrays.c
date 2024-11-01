#include <stdio.h>
#include <string.h>

int main()
{
    int arr[] = {1, 2, 3, 4};
    int len = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < len; i++)
    {
        printf("This is every value in array: %d\n", arr[i]);
    }

    return 0;
}