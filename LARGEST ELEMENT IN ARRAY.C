 

#include <stdio.h>

int main() {
  int arr[3][2]={{1,2},{3,4},{5,6}};
   int max=arr[i][j];
  for(int i=0;i<=2;i++){
     for(int j=0;j<=1;j++){
      if(max>arr[i][j]){
         max=arr[i][j];
      
   }
  }
}
  printf("%d",max);
}
