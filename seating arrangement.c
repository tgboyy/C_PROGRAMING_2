/*Akash and Vishal are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like


So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows :

Window Seat : WS
Middle Seat : MS
Aisle Seat : AS

You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.

INPUT
First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number.

OUTPUT
For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

CONSTRAINTS
1<=T<=105
1<=N<=108            */

#include<stdio.h>
int main()
{
    int n,t,i,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       {
           scanf("%d",&t);
           d=t/6;
           if(d%2==0)
             {
                 switch(t%6)
                 {
                    case 1 : printf("%d WS\n",t+11);
                             break;
                    case 2 : printf("%d MS\n",t+9);
                             break;
                    case 3 : printf("%d AS\n",t+7);
                             break;
                    case 4 : printf("%d AS\n",t+5);
                             break;
                    case 5 : printf("%d MS\n",t+3);
                             break;
                    case 0 : printf("%d WS\n",t+1);
                             break;
                 }
             }
             else
             {
                 switch(t%6)
                 {
                    case 1 : printf("%d WS\n",t+11);
                             break;
                    case 2 : printf("%d MS\n",t+9);
                             break;
                    case 3 : printf("%d AS\n",t+7);
                             break;
                    case 4 : printf("%d AS\n",t+5);
                             break;
                    case 5 : printf("%d MS\n",t+3);
                             break;
                    case 0 : printf("%d WS\n",t+1);
                             break;
                 }
             }
       }
    return 0;
}
