
//Problem: C program to find maximum and minimum element in array


#include<stdio.h>


int main()
{
    int i=0,n;


    printf("Enter Size:");
    scanf("%d",&n);


    int arr[n];
    while(i<n)
    {
        printf("Enter %d number  Value:",i+1);
        scanf("%d",&arr[i]);
        i++;
    }
    int max=arr[0];
    int mini=arr[0];


    for(i=0; i<n; i++)
    {
        (arr[i] > max) ? max=arr[i] : max;
        (arr[i] < mini) ? mini=arr[i] : mini;
    }
    printf("Max Number is: %d\n",max);
    printf("Mini Number is: %d\n",mini);


   return 0;
}
