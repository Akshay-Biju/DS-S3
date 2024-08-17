#include<stdio.h>
int search(int arr[50],int n,int x){
   for(int i=0;i<n;i++)
     if(arr[i]==x)
      return i;
      return -1;
    }
int main(void)
{
  int arr[50];
  int x,i,n;
  printf("Enter the number of input");
  scanf("%d",&n);
  printf("Enter the array elements");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
  printf("Enter the elements to find");
  scanf("%d",&x);
  int result=search(arr,n,x);
  if(result==-1)
     printf("Elements is not present in array");
  else
     printf("Elements is present at index %d",result); 
  }           

