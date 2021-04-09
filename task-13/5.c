#include <stdio.h>

int main()
{
    int t;
    scanf("%dt",&t);
    int lcm[t];
    for(int a0=0;a0<t;a0++)
    {
        int n;
         scanf("%d",&n);
        lcm[a0]=1;
        
        for(int i=1;i<=n;i++)
        {
            int n1, n2, hcf, temp;
            n1=lcm[a0]; n2=i;
            
            hcf = n1;
            temp = n2;
    
            while(hcf != temp)
            {
                if(hcf > temp)
                    hcf -= temp;
                else
                    temp -= hcf;
            }

            lcm[a0] = (n1 * n2) / hcf;
            
        }
        
        
    }

    for(int a0=0;a0<t;a0++)
    {
        printf("%d \n",lcm[a0]);
    }

    return 0;
}