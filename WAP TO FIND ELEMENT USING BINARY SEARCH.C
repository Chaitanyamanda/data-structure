#include <stdio.h>
int main()
{
   int arr[5]={15,16,10,11,19};//sort

  int ele=10;
  
   int low=0,high=4,mid;
   while(low<=high){
      mid=(low+high)/2;
     if(arr[mid]==ele){
       printf(" element found at position %d",mid);
       break;
     }
     else if(ele<arr[mid]){
       high=mid-1;
     }
     else{
       low=mid+1;
     }
   }
   if(arr[mid]!=ele){
     printf("not found");
   }
}
  
