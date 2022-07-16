#include <stdio.h>
int main()
{
    int arr[10], num, size, count = 0 ;
    printf("Enter array limit : ");
    scanf("%d", &size);
    printf("Enter %d element of an array : ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find the highest frequency  : ");
    scanf("%d", &num);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    printf("%d occurs %d times ", num, count);
    return 0;
}