#include <stdio.h>
  
int isPalindrome(int n) 
{ 
    int temp = n; 
    int reverse = 0; 
     
    while(temp>0) 
    { 
        reverse = 10*reverse + temp%10; 
        temp /= 10; 
    } 
     
    if(reverse == n)
        return 1; 
    else
        return 0; 
} 
  
int main()
{
    int t;
    scanf("%d",&t);
    int largest[t];
    
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        scanf("%d",&n) ;
        
        for(int i=100;i<1000;i++)
        {   
            for(int j=100;j<1000;j++)
            {
                if(isPalindrome(i*j) && n>(i*j))
                    if(largest[a0]<(i*j))
                        largest[a0]=i*j;
            }
        }
    }
    
    for(int a0=0;a0<t;a0++)
    {
        printf("%d \n",largest[a0]);
    }
    
    return 0;
}