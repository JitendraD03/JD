#include <stdio.h>

// Display function
void display(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Bubble Sort (j < n-2-i version)
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-2-i; j++) {   // yaha n-1-i tab aata hai jab hum har ek element ko soryt karte hai isme ek extra step hota hai
            if(arr[j] > arr[j+1]) {   // jabki n-2-i yeh man leta hai ki last element alrtady soerted hai
                temp = arr[j]; // agar  mujse aage wala element mujse chota hai to swap kardo
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int n = 5;

    printf("Original array:\n");
    display(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array:\n");
    display(arr, n);

    return 0;
}
