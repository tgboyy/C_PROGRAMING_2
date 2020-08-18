#include<stdio.h>

struct det //STRUCTURE FOR DATE.
{
    int d;
    int m;
    int y;
}; 

struct det in() //STRUCTURE FUNCTION FOR INPUT OF DATE VARIABLES.
{
    struct det a1;
    printf("Enter Day :"); scanf("%d",&a1.d);
    printf("Enter Month :"); scanf("%d",&a1.m);
    printf("Enter Year :"); scanf("%d",&a1.y);
    return a1;
}
void display(struct det g)  //FUNCTION FOR PRINTING DATE.
{
    switch(g.m)
            {
                case 1 : printf(" \n\t\tDate a is : January %d, %d",g.d,g.y);
                         break;
                case 2 : printf(" \n\t\tDate a is : February %d, %d",g.d,g.y);
                         break;
                case 3 : printf(" \n\t\tDate a is : March %d, %d",g.d,g.y);
                         break;
                case 4 : printf(" \n\t\tDate a is : April %d, %d",g.d,g.y);
                         break;
                case 5 : printf(" \n\t\tDate a is : May %d, %d",g.d,g.y);
                         break;
                case 6 : printf(" \n\t\tDate a is : June %d, %d",g.d,g.y);
                         break;
                case 7 : printf(" \n\t\tDate a is : July %d, %d",g.d,g.y);
                         break;
                case 8 : printf(" \n\t\tDate a is : August %d, %d",g.d,g.y);
                         break;
                case 9 : printf(" \n\t\tDate a is : September %d, %d",g.d,g.y);
                         break;         
                case 10 : printf(" \n\t\tDate a is : October %d, %d",g.d,g.y);
                         break;
                case 11 : printf("\n\t\t Date a is : November %d, %d",g.d,g.y);
                         break;
                case 12 : printf("\n\t\t Date a is : December %d, %d",g.d,g.y);
                         break;
            }
}
void check(struct det a)  //FUNCTION FOR VALIDATON OF DATE.
{
    
    int x;
   int o=0; 
  while(o<1)
  {
    if((a.m==1)||(a.m==3)||(a.m==5)||(a.m==7)||(a.m==8)||(a.m==10)||(a.m==12))
      {
          if(a.d<=31)
             x=0;
             else
             {
                 x=1;
                 break;
             }
      }
      else
      if(a.m==2)
        {
            if(a.d==28)
              x=0;
               else 
               if(a.d==29)
                 {
                     if((a.d%4)==0)
                     x=0;
                 }
                else
                 {
                     x=1;
                     break;
                 }
        }
        else
          if((a.m==4)||(a.m==6)||(a.m==9)||(a.m==11))
             {
                if(a.d<=30)
                  x=0;
                 else
                    {
                        x=1;
                        break;
                        
                    }
             }
             else
              if((a.y>1900)&&(a.y<9999))
                x=0;
                 else
                 {
                    x=1;
                    break;
                 }
        o++;
  }
    if(x==1)
      printf("\n\t Date is Not Valid");
      else
        {
            printf("\n\t Date is Valid");
            display(a);
        }
}
int main()
{
    struct det a2;
    a2=in();
    check(a2);
    return 0;
}
