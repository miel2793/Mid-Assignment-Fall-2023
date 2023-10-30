//Problem: C program to count even and odd elements in array


#include<stdio.h>

int main()
{
    int i=0,a,e=0,o=0;
    printf("Enter size:");
    scanf("%d",&a); //Miel Mahmud Sifat;ID;368;

    int arr[a];

    do
    {
        printf("Enter %d th Value:",i+1);
        scanf("%d",&arr[i]);
        i++;
    }
    while(i<a);


    for(i=0 ; i<a ; i++)
    {
        if(arr[i] % 2 ==0 )
        {
            e++;
        }
        else
        {
            o++;
        }
    }

    printf("Total Even Numbers : %d\n",e);
    printf("Total Odd Numbers : %d\n\n",o);

    return 0;
}

