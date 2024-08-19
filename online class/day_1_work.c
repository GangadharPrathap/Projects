
#include <stdio.h>

void printOppositeSigns(int arr[], int size) {
    int i;
    int sign = 1; 
    for (i = 0; i < size; i++) 
	{
        if (arr[i] * sign < 0) 
		{
            printf("%d ", arr[i]);
            sign *= -1; 
        }
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printOppositeSigns(arr, size);

    return 0;
}