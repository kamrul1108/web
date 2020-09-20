#include<stdio.h>

int main()
{
    int arr[5]= {20,10,5,30,15,60};
    int i,j,temp;
    
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        { 
        /* * Swap if currently selected array element * is not at its correct position. */
         if(arr[i] > arr[j])
         { 
            temp = arr[i]; 
            arr[i] = arr[j]; 
            arr[j] = temp; 
          } 
        }
    }
    for(i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}