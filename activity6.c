
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void password(char n[20], int age)
{
    srand(time(NULL));
    int randomNumber1 = rand() % 10;
    int randomNumber2 = rand() % 10;
    char first_letter = n[0];
    char sec_letter;
    for(int i =0; i<20; i++)
    {
        if(n[i]==' '||n[i]=='\t'||n[i]=='\n')
        {
         sec_letter = n[i+1];
        }
    }
    int act_age = 2025-age;
    printf("%c%c@%d%d%d\n",first_letter,sec_letter,randomNumber1,randomNumber2,act_age);
}
void main()
{
    char name[20];
    int byear;
    printf("Enter your name :-\n");
    scanf("%[^\n]",name);
    printf("Enter your age :- \n");
    scanf("%d",&byear);
    password(name,byear);
}
