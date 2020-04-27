#include<stdio.h>

void print_arr(int array[], int size){
  for(int i = 0; i < size; ++i){
    printf("%d " , array[i]);
  }
  printf("\n");
}

void rotate_once(int array[], int size){
  int temp = array[0];
  for(int i = 0; i < size; ++i){
    array[i] = array[i+1];
  }
  array[size-1] = temp;
}

void rotate(int array[], int size) {
  for(int i=0; i<size; i++) {
    print_arr(array, size);
    rotate_once(array, size);
  }
}

int main(){
  int n,arr[10];
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  rotate(arr,n);
  return 0;
}
