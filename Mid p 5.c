
//Problem: C program to count negative elements in array
#include<stdio.h>

int main()
{
    int i=0,n,a=0;
    printf("Enter Size:");
    scanf("%d",&n);

    int arr[n];

    while(i<n)
    {
        printf("Enter %d  value:",i);  //Miel Mahmud Sifat;id:368;
        scanf("%d",&arr[i]);
        i++;
    }
    for(i=0; i<n; i++)
    {
        (arr[i] <0) ? a++ : a;
    }

    printf("Total Negative Number %d\n",a);

    return 0;
}
