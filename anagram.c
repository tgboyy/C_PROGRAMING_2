/*Given two strings, a and b , that may or may not be of the same length, determine the minimum number of character deletions required to make a and b anagrams. Any characters can be deleted from either of the strings.
Input :
•	test cases,t
•	two strings a and b, for each test case
Output:
Desired O/p
Constraints :
string lengths<=10000
Note :
Anagram of a word is formed by rearranging the letters of the word.
For e.g. -> For the word RAM - MAR,ARM,AMR,RMA etc. are few anagrams.*/

#include <stdio.h>

int main()
{
    char a[10],b[10];
    int i,j,flag=0,count=0,a1=0,b1=0;
    scanf("%s",&a);
    scanf("%s",&b);
    for(i=0;a[i]!='\0';i++)
    {
        a1++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        b1++;
    }
    for(i=0;a[i]!='\0';i++)
       {
           for(j=0;b[j]!='\0';j++)
              {
                  if(a[i]==b[j])
                    {
                        flag++;
                        break;
                    }
              }
       }
    count=(a1-flag)+(b1-flag);
    printf("%d",count);
    return 0;
}


