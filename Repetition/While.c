#include <stdio.h>
#include <math.h>

#define REP 100

int main()
{
    int count;

    
    count = 1;

    while (count <= REP)
    {
        if (count%2 == 0 )
        {
            printf("%d ",count);
        }
        
        count++;
    }
    
     return 0;
      
}