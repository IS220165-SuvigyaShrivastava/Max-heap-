#include <iostream>
using namespace std;

const int MAX_SIZE = 100;


void insert(int heap[], int& size, int value) {
    if (size >= MAX_SIZE) {
        cout << "Heap is full!" << endl;
        return;
    }

    
    heap[size] = value;
    size++;

    for (int i = size - 1; i > 0; ) {
        int j = (i - 1) / 2;  
        if (heap[j] < heap[i]) {
            
            swap(heap[j], heap[i]);
i=j;
        } 
        else {
            break;  
        }
    }
}


void printHeap(int heap[], int size) {
    for (int i = 0; i < size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

int main() {
    int heap[MAX_SIZE]; 
    int size = 0;  
    insert(heap, size, 19);
    insert(heap, size, 17);
    insert(heap, size, 12);
    insert(heap, size, 11);
    insert(heap, size, 9);

    cout << "Max Heap after insertions: ";
    printHeap(heap, size);


    insert(heap, size, 20);

    cout << "Max Heap after inserting 20: ";
    printHeap(heap, size);

    return 0;
}
