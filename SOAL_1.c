#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main(void) 
{
    int size;

    scanf("%d", &size);
    if (size <= 0) 
    {
        printf("Array size must be a integer.\n");
        return 1;
    }

    int *array = (int*)malloc(size * sizeof(int));
    if (array == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    qsort(array, size, sizeof(int), compare);


    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }
    free(array);

    return 0;
}