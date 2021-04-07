#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int n[t],i;
    for (i=0;i<t;i++)
    {
        scanf("%d", &n[i]);
    }
    for(i=0;i<t;i++)
    {
        int s=0,j=0;
        while(j<n[i])
        {
            if(j%3==0||j%5==0)
            s=s+j;
            j++;
        }
        printf("%d \n", s);

    }
    return 0;

}
