
#include <stdio.h>

int main() {
  int arr[5]={5,4,3,2,1};
  for(int j=0;j<=4;j++){
      int min=j;
      for(int i=j+1;i<=4;i++){
          if(arr[min]>arr[i]){
             min=i;
              
      }
  }
   int temp=arr[min];
     arr[min]=arr[j];
         arr[j]=temp;
}
for(int j=0;j<=4;j++){
printf(" %d",arr[j]);
}
}
