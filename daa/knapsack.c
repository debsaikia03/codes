#include <stdio.h>
#include <stdlib.h>

struct ITEM
{
    int id;
    float weight;
    float profit;
    float ratio;
};

void swap(struct ITEM *a, struct ITEM *b)
{
    struct ITEM temp = *a;
    *a = *b;
    *b = temp;
}

void max_heapify(struct ITEM arr[], int i, int n)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l].ratio > arr[largest].ratio)
    {
        largest = l;
    }

    if (r < n && arr[r].ratio > arr[largest].ratio)
    {
        largest = r;
    }

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        max_heapify(arr, largest, n);
    }
}

void build_maxheap(struct ITEM arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        max_heapify(arr, i, n);
    }
}

float maxProfit(struct ITEM arr[], int m, int capacity)
{
    float totalProfit = 0.0;
    float totalWeight = 0.0;

    int i = 0;
    while (i < m && totalWeight < capacity)
    {
        if (totalWeight + arr[0].weight <= capacity)
        {
            totalWeight += arr[0].weight;
            totalProfit += arr[0].profit;
        }
        else
        {
            float remainingWeight = capacity - totalWeight;
            totalProfit += arr[0].profit * (remainingWeight / arr[0].weight);
            totalWeight += remainingWeight;
            break; 
        }

        swap(&arr[0], &arr[m - 1 - i]);
        max_heapify(arr, 0, m - 1 - i);

        i++;
    }

    return totalProfit;
}

int main()
{
    int m;
    printf("Enter the number of items: ");
    scanf("%d", &m);

    struct ITEM items[m];

    for (int j = 0; j < m; j++)
    {
        printf("Enter details of item %d\n", j + 1);

        printf("Enter id: ");
        scanf("%d", &items[j].id);

        printf("Enter profit: ");
        scanf("%f", &items[j].profit);

        printf("Enter weight: ");
        scanf("%f", &items[j].weight);

        items[j].ratio = items[j].profit / items[j].weight;
    }

    build_maxheap(items, m);

    int capacity;
    printf("Enter knapsack capacity: ");
    scanf("%d", &capacity);

    float profit = maxProfit(items, m, capacity);

    printf("Maximum profit: %.2f\n", profit);

    return 0;
}
