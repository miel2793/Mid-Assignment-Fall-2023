
//Problem: C program to declare, initialize, input and print array elements


//Name:Mahmud sifat; Id:368;
#include <stdio.h>
int main()
{
    int s;
    int i=0;
    printf("Enter  Size:");
    scanf("%d",&s);
int arr[s];
    do
    {
        printf("Enter %d Value:",i+1);
        scanf("%d",&arr[i]);
        i++;
}
    while(i<s);

    printf("output\n\n");
    for(int i=0; i<s; i++)
    {


        printf("%d\t",arr[i]);
    }
    return 0;
}
