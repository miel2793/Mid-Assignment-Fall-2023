
//Problem: C program to print all negative elements in array

#include<stdio.h>


int main()
{
    int i, n;


    printf("Enter size:");     //Miel Mahmud Sifat:Id:368;
    scanf("%d",&n);
    int arr[n];


    for(i=0; i<n; i++)
    {
        printf("Enter %d  Value:",i+1);
        scanf("%d",&arr[i]);
    }


    printf("The Negative Value=\n");


    i=0;


    do
    {
        if(arr[i] <0)
        {
            printf("%d\t",arr[i]);
        }
        i++;


    }
    while(i<n);


    return 0;
}

