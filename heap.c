#include "heap.h"

void heapify(int A[], int i, int n){
  int parent;
  int leftChild;
  int rightChild;

  if(i == 0){
    parent = 0;
  }else{
    parent = (i-1)/2;
  }
  leftChild = 2*(i+1)-1;
  rightChild = 2*(i+1);

  if(leftChild < parent){

  }else if(
}

void buildHeap(int A[], int n){
  
}

int getMin(int A[]){
  return A[0];
}

void printList(int A[], int n){

}
