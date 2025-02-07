#include <stdio.h>

struct MinMax {
    int min;
    int max;
};

struct MinMax findMinMax(int arr[], int l, int u) {
    // Base case: only 1 element
    if (l == u) {

        struct MinMax result = {arr[l], arr[l]};
        return result;
    }

    // Base case: only 2 elements
    if (u == l + 1) {

        struct MinMax result;

        if (arr[l] < arr[u]) {
            result.min = arr[l];
            result.max = arr[u];
        } 
        
        else {
            result.min = arr[u];
            result.max = arr[l];
        }
        
        return result;
    }

    int mid = (l + u) / 2;

    struct MinMax leftMinMax = findMinMax(arr, l, mid);
    struct MinMax rightMinMax = findMinMax(arr, mid + 1, u);

    struct MinMax result;
    result.min = (leftMinMax.min < rightMinMax.min) ? leftMinMax.min : rightMinMax.min;
    result.max = (leftMinMax.max > rightMinMax.max) ? leftMinMax.max : rightMinMax.max;

    return result;
}

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    struct MinMax result = findMinMax(arr, 0, n - 1);

    printf("Max element: %d\n", result.max);
    printf("Min element: %d\n", result.min);

    return 0;
}
