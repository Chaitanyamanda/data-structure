
#include <stdio.h>

int main() {
  int arr[5]={2,6,5,8,3};
  int max=arr[0];
      for(int i=0;i<4;i++){
      if(max<arr[i]){
          max=arr[i];
      }
     
     }
      printf("largest element is %d",max);
  }
