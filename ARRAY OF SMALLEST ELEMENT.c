
#include <stdio.h>

int main() {
  int arr[5]={2,6,5,8,3};
  int min=arr[0];
      for(int i=0;i<4;i++){
      if(min>arr[i]){
          min=arr[i];
      }
     
     }
      printf("smallest element is %d",min);
  }
