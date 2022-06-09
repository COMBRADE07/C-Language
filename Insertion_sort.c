#include<stdio.h>
#define MAX 50
void Insertion_Sort(int a[MAX],int n);
int main()
{
    int a[MAX],i,n;
    printf("\nHow many elements you want: ");
    scanf("%d",&n);
    printf("\nEnter the element in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    Insertion_Sort(a,n);
    printf("\nAfter sorting Arary: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
void Insertion_Sort(int a[MAX],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        for(j=i-1;(j>=0) && (key<a[j]);j--)
        {
            a[j+1]=a[j];
            
        }
        a[j+1]=key;
    }
}