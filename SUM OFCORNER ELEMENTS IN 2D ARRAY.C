 
 
#include <stdio.h>

int main() {
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int sum=0;
  for(int i=0;i<=2;i++){
     for(int j=0;j<=2;j++){
      if((i==0&&j==0)||(i==0&&j==2)||(i==2&&j==0)||(i==2&&j==2)){
         sum=sum+arr[i][j];
      
   }
  }
}
  printf("%d",sum);
}
