#include<stdio.h>

void heapify(int heap[], int heap_size){
	int i, j, lc, rc, largest, temp;
	for(i = 0; i < heap_size; i++){
		largest = i;
		lc = (2*i)+1;	
		rc = (2*i)+2;
		if(lc < heap_size && heap[lc] > heap[largest])
			largest = lc;
		if(rc < heap_size && heap[rc] > heap[largest])
			largest = rc;
		if(i != largest){
			temp = heap[i];
			heap[i] = heap[largest];
			heap[largest] = temp;
			for(j = i; j != 0; j = (j-1)/2){
				if(heap[(j-1)/2] < heap[j]){
					temp = heap[j];
					heap[j] = heap[(j-1)/2];
					heap[(j-1)/2] = temp;
				}
			}
		}
	}
}

void heap_sort(int heap[], int heap_size){
	int temp;
	while(heap_size>0){
		heapify(heap, heap_size);
		temp = heap[0];
		heap[0] = heap[heap_size-1];
		heap[heap_size-1] = temp;
		heap_size--;
	}
}

void display(int heap[], int heap_size){
	int i;
	for(i = 0; i < heap_size; i++){
		printf("%d\t", heap[i]);
	}
}

int main(){
	int heap[20], heap_size, i;
	printf("\nEnter Size of Heap: ");
	scanf("%d", &heap_size);
	printf("\nEnter Heap Elements: ");
	for(i = 0; i < heap_size; i++){
		scanf("%d", &heap[i]);
	}
	heap_sort(heap, heap_size);
	display(heap, heap_size);
	return 0;
}