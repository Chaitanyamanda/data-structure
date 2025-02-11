 

#include <stdio.h>

int main() {
  int arr[5]={1,2,3,4,5};
   int element=2;
  for(int i=0;i<=4;i++){
     if(element==arr[i]){
        printf("\nposition of the element:%d",i);
    }
     
    else{
        printf("\n%d element not found:",i);
    }
  }
}
