#include <stdio.h>

int main()
{
    char str[5][5]={{'w','E','L','C','O'},{'M','E','T','O','Z'},{'O','H','O','C','O'},{'R','P','O','R','A'},
        {'T','I','O','N'}};
        int s1,s2,e1,e2,x,y;
        
        for(int i=0;i<5;i++)
        {
             for(int j=0;j<5;j++)
            {
                printf("%c \t",str[i][j]);
            }
            printf("\n");
        }
        
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(str[i][j]=='T')
                {
                    s1=i; s2=j;
                    x=s1;  y=s2;
                    goto la;
                }
                
            }
        }
                    la:
                  
                   for(int i=x;i<5;i++)
                   {
                           if(str[i][y]=='O')
                           {
                               if(str[i][y++]=='O')
                               {
                                   e1=i;  e2=y;
                                   goto res;
                               }
                           }
                   }
                  for(int j=y;j<5;j++)
                  {
                           if(str[x][j]=='O')
                           {
                               if(str[x++][j]=='O')
                               {
                                   e1=x;  e2=j;
                                   goto res;
                               }
                           }
                 
                      
                   }
                    
                
                
            

       res:
        printf("Start %d  %d",s1,s2);
        printf("\n end   %d   %d ",e1,e2);
 
    return 0;
}
