
//Problem: C program to find second largest number in array


#include<stdio.h>

int main()
{
    int i=0,n,max,max2;

    printf("Enter Size:");
    scanf("%d",&n);

    int arr[n];

   do
    {
        printf("Enter %d  Value:",i+1);
        scanf("%d",&arr[i]);
        i++;
    }while(i<n);

    max=arr[0];
    max=arr[1]; //Miel Mahmud Sifat;368;

    for(i=0 ; i<n ; i++)
    {
        if(arr[i] > max)
        {
            max2=max;
            max=arr[i];
        }
        else if(arr[i] > max2 && arr[i] <max)
        {
            max2=arr[i];
        }
    }


    printf("Second Max. value is: %d",max2);



    return 0;
}
