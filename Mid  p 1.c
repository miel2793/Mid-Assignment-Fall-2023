#include<stdio.h>


//Problem: C program to copy all elements of one array to another



int main()
{
    int a,i=0,b=0;
    printf("Enter Array Size:");
    scanf("%d",&a);


    int old_arr[a];
    int new_arr[a];


    do
    {
        printf("Enter %d  Value:",i); //Miel mahmud sifat;id:368;
        scanf("%d",&old_arr[i]);
        new_arr[i]=old_arr[i];
        i++;
    } while(i<a);


    printf("\n\nOld Array is=\n");


    for(i=0; i<a; i++)
    {
        printf("%d\t",old_arr[i]);
    }


    printf("\n\n After Copy, the array is=\n");


   while(b<a)
    {
        printf("%d\t",new_arr[b]);
        b++;
    }
}
