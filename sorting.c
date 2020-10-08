#include <stdio.h>
#include <conio.h>

int sorting(int *x,int n)
{
    int i,j,t;
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(x[i]>x[j])
            {
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
}
int main()
{
    int x[100],n,i;
    printf("\n Enter the no of the array element :- ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n Enter the %d array element = ",i);
        scanf("%d",&x[i]);
    }
    
    printf("\n\n Before sorting array elements are :- ");
    for(i=0; i<n; i++)
    {
        printf("  %d",x[i]);
    }
    sorting(x,n);
    printf("\n\n After sorting array elements are :- ");
    for(i=0; i<n; i++)
    {
        printf("  %d",x[i]);
    }
    
    
}
