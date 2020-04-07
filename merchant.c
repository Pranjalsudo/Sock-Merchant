/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void sortArray(int n, int ar[])
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
       for(int j=0;j<n-i-1;j++)
       {
           if(ar[j]>ar[j+1])
           {
               temp=ar[j];
               ar[j]=ar[j+1];
               ar[j+1]=temp;
           }
       }
    }
}
int sockMerchant(int n, int ar[]) {
 sortArray(n,ar);
 int i;
 int count=0;
 for(i=0;i<n;i++)
 {
     if(ar[i]==ar[i+1])
     {
         count++;
         i++;
     }
 }
return count;
}




int main()
{
    int n;
    int arr[20];
    printf("Enter no of elements\n");
    scanf("%d",&n);
    int i;
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Total pairs %d\n",sockMerchant(n,arr));
    
    return 0;
}

