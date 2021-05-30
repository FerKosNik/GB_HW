#include <stdio.h>

void bucketSort(int* arr, const int len) {
    const int max = len;
    const int b = 10;

    int bucket[b][max+1];
    for (int i = 0 ; i < b; ++i) {
      bucket[i][max] = 0;
    };

    for (int digit = 1; digit < 1000000000; digit *=10) {
      for (int i = 0; i < max; ++i) {
        if ((arr[i] % 2) == 0){
        int d = (arr[i] / digit) % b;
        bucket[d][bucket[d][max]++] = arr[i];
        arr[i] = -1;
      }}
      int index = 0;
      for (int i = 0; i < b; i++) {
        for (int j = 0; j < bucket[i][max]; ++j) {
          while ((arr[index]) != -1) index++;
          arr[index] = bucket [i][j];
        }
        bucket[i][max] = 0;
      }
    }

}

void fillArr (int arr[], int size){
  for (int i = 0; i < size; i++) {
    arr[i] = rand()%100;
  }
}

void showArr (int arr[], int sz){
  for (int i = 0; i < sz; i++)
    printf("%d\t", arr[i]);
}

int main(int argc, char const *argv[]) {
  const int SZ = 25;
  int arr[SZ];
  fillArr(arr, SZ);
  showArr(arr, SZ);
  bucketSort(arr, SZ);
  printf("\n" );
  showArr(arr, SZ);
  return 0;
}
