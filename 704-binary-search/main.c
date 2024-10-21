#include <stdio.h>

int search(int* arr, int n, int target){
    int left = 0;
    int right = n;
    int middle = 0;
    while (left <= right){
        middle = (left + right)/2;

        if (arr[middle] < target){
            // left = middle + 1;
            left = middle;
        }
        
        else if (arr[middle] > target){
            right = middle;
            // right = middle - 1;
        }
        
        else if (arr[middle] = target){
            // printf("target is %d\n", middle);
            return middle;
        }
    }
    return -1;
}



int main(void) { 
    int target = 0;
    int n;
// read the number of array
    puts("number? ");
    scanf("%d", &n);

    int arr[n];
    int* ptr = arr; 
// reaad the array
    puts("input your array: ");
    for (int i = 0; i < n; i++){
        scanf("%d", ptr+i); 
    }
// read the target number
    puts("target: ");
    scanf("%d", &target); 

    printf("TARGET IS : arr[%d].", search(arr, n, target));

    return 0;
}
