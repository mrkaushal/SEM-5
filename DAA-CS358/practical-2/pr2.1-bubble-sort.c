// Bubble Sort with function calls

#include <stdio.h>
#include <stdlib.h>

int bubble_sort(int *array, int size){
  int i, j, temp, count = 0;
  for(i = 0; i < size; i++){
    for(j = 0; j < size - i - 1; j++){
      count ++;
      if(array[j] > array[j+1]){
        count ++;
        temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
  return count;
}

int main(){
  int array[10] = {1,2,3,4,5,6,7,8,9,10};
  int size = 10;
  printf("Total comp: %d\n", bubble_sort(array, size));
  int i;
  for(i = 0; i < size; i++){
    printf("%d ", array[i]);
  }
  printf("\n");
  return 0;
} 