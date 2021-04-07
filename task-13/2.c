#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int n[t],i; 
    for(i=0;i<t;i++)
    {
        scanf("%d", &n[i]);
    }
    for (i=0;i<t;i++)
    {
       int nt=0,s=0,f1=0,f2=1;
        while(nt<=n[i])
        {
            if(nt%2==0)
            {
                s=s+nt;
            }
            nt=f1+f2;
            f1=f2;
            f2=nt;
        }
        printf("%d \n", s);
    }
    return 0;
}
