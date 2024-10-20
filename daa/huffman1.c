#include<stdio.h>
#include<stdlib.h>

#define MAX_TREE_HT 100

struct minHeapNode{

    char data;

    int freq;

    struct minHeapNode *left, *right;
};

struct minHeap{

    int size; //current size

    int capacity; //total size

    struct minHeapNode **array;    
};

struct minHeapNode* newNode(char data, int freq){

    struct minHeapNode* temp = (struct minHeapNode*)malloc(sizeof(struct minHeapNode));

    temp->left = temp->right = NULL;
    temp->data = data;
    temp->freq = freq;

    return temp;
    
}

struct minHeap* createMinHeap(int capacity){

    struct minHeap* minHeap = (struct minHeap*)malloc(sizeof(struct minHeap));

    minHeap->size = 0;

    minHeap->capacity = capacity;

    minHeap->array = (struct minHeapNode**)malloc(minHeap->capacity * sizeof(struct minHeapNode*));

    return minHeap;
}

void swapHeapNode(struct minHeapNode** a, struct minHeapNode** b){

    struct minHeapNode* t = *a;
    *a = *b;
    *b = t;
}

void minHeapify(struct minHeap* minHeap, int i){

    int smallest = i;
    int left = i * 2 + 1;
    int right = i * 2 + 2;

    if(left < minHeap->size && minHeap->array[left]->freq < minHeap->array[smallest]->freq){

        smallest = left;
    }

    if(right < minHeap->size && minHeap->array[right]->freq < minHeap->array[smallest]->freq){

        smallest = right;
    }

    if(smallest != i){

        swapNode(&minHeap->array[smallest], &minHeap->array[i]);
        minHeapify(minHeap, smallest);
    }
}

void buildMinHeap(struct minHeap* minHeap){

    int n = minHeap->size-1;
    
    for(int i = (n - 1)/2; i>=0; --i){

        minHeapify(minHeap, i);
    }
}

struct minHeap* createAndBuildMinHeap(char data[], int freq[], int size){

    struct minHeap* minHeap = createMinHeap(size);

    for(int i=0; i<size; ++i){

        minHeap->array[i] = newNode(data[i], freq[i]);
    }

    minHeap->size = size;
    buildMinHeap(minHeap);


}

struct minHeapNode* buildHuffmanTree(char data[], int freq[], int size){

    struct minHeapNode *left, *right, *top;

    struct minHeap* minHeap = createAndBuildMinHeap(data, freq, size);

    while(!isSizeOne(minHeap)){

        left = extractMin(minHeap);
        right = extractMin(minHeap);

        top = newNode('$', left->freq + right->freq); //'$' is any new data for new frequency 
        top->left = left;
        top->right = right;

        insertMinHeap(minHeap, top);
    }

    return extractMin(minHeap);
}

void printCodes(struct minHeapNode* root, int arr[], int top){

    if(root->left){

       arr[top] = 0;
       printCodes(root->left, arr, top++);
    }

    if(root->right){

        arr[top] = 1;
        printCodes(root->right, arr, top++);
    }

    //if this is a leaf node, then it contains one of the input data, print the data and its code from arr[]
    if(isLeaf(root)){

        printf("%c", root->data);
        printArr(arr, top);
    }

}

void huffmanCodes(char data[], int freq[], int size){

    struct minHeapNode* root = buildhuffmanTree(data, freq, size);

    int arr[MAX_TREE_HT], top = 0;

    printCodes(root, arr, top);
}


int main(){
      
    int n;

    printf("Enter no. of elements: ");
    scanf("%d",&n);

    char arr[n];
    int freq[n];

    for(int i=0; i< n; i++){

       printf("Enter character: ");
       scanf("%d",&arr[i]);

       printf("Enter its frequency: ");
       scanf("%d",&freq[i]);
    }

    huffmanCodes(arr, freq, n);
    
}