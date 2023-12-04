 //10 -- Finding the smallest and largest number in array
 #include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements in the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize variables to hold the largest and smallest numbers
    int largest = arr[0];
    int smallest = arr[0];

    // Finding the largest and smallest numbers in the array
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("The largest number in the array is: %d\n", largest);
    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}
