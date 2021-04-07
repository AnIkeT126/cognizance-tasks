#include <math.h>
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    long largest[t];
    int k;
    for(k=0;k<t;k++)
    largest[k]=0;
    
    
    for(int a0 = 0; a0 < t; a0++)
    {
        long n;
        scanf("%d", &n);
        
        while (n % 2 == 0)  
        {  
            largest[a0]=2;
            n = n/2;  
        }  
    
        for (int i = 3; i <= sqrt(n); i = i + 2)  
        {  
            while (n % i == 0)  
            {
                if(i>largest[a0])
                    largest[a0]=i;
                n = n/i;  
            }  
        }  
    
        if (n > 2) 
            if(n>largest[a0])
                largest[a0]=n;
        
    }
    
    for(int a0=0;a0<t;a0++)
    {
        printf("%d \n",largest[a0]);
    }
    return 0;
}
