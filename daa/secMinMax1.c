#include <stdio.h>
#include <limits.h>

struct MinMax {
    int min;
    int secondMin;
    int max;
    int secondMax;
};

struct MinMax findSecondMinMax(int arr[], int l, int u) {
    
    struct MinMax result;

    // Base case: only 1 element
    if (l == u) {
        result.min = arr[l];
        result.secondMin = INT_MAX;  // No second min available
        result.max = arr[l];
        result.secondMax = INT_MIN;  // No second max available
        return result;
    }

    // Base case: only 2 elements
    if (u == l + 1) {
        if (arr[l] < arr[u]) {
            result.min = arr[l];
            result.secondMin = arr[u];
            result.max = arr[u];
            result.secondMax = arr[l];
        } else {
            result.min = arr[u];
            result.secondMin = arr[l];
            result.max = arr[l];
            result.secondMax = arr[u];
        }
        return result;
    }

    int mid = (l + u) / 2;

    struct MinMax leftResult = findSecondMinMax(arr, l, mid);
    struct MinMax rightResult = findSecondMinMax(arr, mid + 1, u);

    // Determine the minimum and second minimum
    if (leftResult.min < rightResult.min) {
        result.min = leftResult.min;
        result.secondMin = leftResult.secondMin < rightResult.min ? leftResult.secondMin : rightResult.min;
    } else if (leftResult.min > rightResult.min) {
        result.min = rightResult.min;
        result.secondMin = rightResult.secondMin < leftResult.min ? rightResult.secondMin : leftResult.min;
    } else {
        result.min = leftResult.min;
        result.secondMin = leftResult.secondMin < rightResult.secondMin ? leftResult.secondMin : rightResult.secondMin;
    }

    // Determine the maximum and second maximum
    if (leftResult.max > rightResult.max) {
        result.max = leftResult.max;
        result.secondMax = leftResult.secondMax > rightResult.max ? leftResult.secondMax : rightResult.max;
    } else if (leftResult.max < rightResult.max) {
        result.max = rightResult.max;
        result.secondMax = rightResult.secondMax > leftResult.max ? rightResult.secondMax : leftResult.max;
    } else {
        result.max = leftResult.max;
        result.secondMax = leftResult.secondMax > rightResult.secondMax ? leftResult.secondMax : rightResult.secondMax;
    }

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

    struct MinMax result = findSecondMinMax(arr, 0, n - 1);

    if (result.secondMin == INT_MAX) {
        printf("No distinct second minimum element.\n");
    } else {
        printf("Second Min element: %d\n", result.secondMin);
    }

    if (result.secondMax == INT_MIN) {
        printf("No distinct second maximum element.\n");
    } else {
        printf("Second Max element: %d\n", result.secondMax);
    }

    return 0;
}
