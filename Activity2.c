// Online C compiler to run C program online
#include <stdio.h>
void main() 
{
    char name[20], format[5];
    int age;
    int role;
    float runs,dism,runs_given,overs,batting_avg,bowling_econ,ARavg;
    
    printf(" THIS IS A CRICKETER GRADIND SYSTEM\n");
    printf(" Here, GRADE represents the following \n \n");
    printf(" A++\t Players who are the top most cricketers in the world \n");
    printf(" A+ \t Players who have experience and have potential \n");
    printf(" A  \t Players who are raw but are emerging talents\n");
    
    printf("Enter name of the player:- \n");
    scanf("%s",&name);
    printf("Enter the age of the player:- \n");
    scanf("%d",&age);
    printf("Enter the format according in which you wish to grade him/her:-\n");
    scanf("%s",&format);
    printf("Enter his/her role:\n");
    printf("Press 1 for BATSMAN\n PRESS 2 for BOWLER\n PRESS 3 for ALL-ROUNDER \n");
    scanf("%d",&role);
    
    if(role==1)
    {
        printf(" Enter the total number of runs the player scored :\t");
        scanf("%f",&runs);
        printf(" Enter the number of times he/she got out :\t");
        scanf("%f",&dism);
        batting_avg= runs/dism;
        if(batting_avg>40)
        { 
            printf(" Name of the Player :\t%s\n",name);
          printf(" Age of the Player :\t%d\n",age);
          printf(" Format in which he/she plays :\t%s\n",format);
          printf(" GRADE -- A++ BATSMAN \n");
        }//inner if ends
          else if(30 <= batting_avg && batting_avg <= 40)
          {
              printf(" Name of the Player :\t%s\n",name);
          printf(" Age of the Player :\t%d\n",age);
          printf(" Format in which he/she plays :\t%s\n",format);
          printf(" GRADE -- A+ BATSMAN \n");
          }
          else if (batting_avg < 30)
          {
              printf(" Name of the Player :\t%s\n",name);
          printf(" Age of the Player :\t%d\n",age);
          printf(" Format in which he/she plays :\t%s\n",format);
          printf(" GRADE -- A BATSMAN \n");
          }
        
    }// block for batting grading over
    
    else if (role==2)
    {
        printf(" Enter the total number of runs given by the player :\t");
        scanf("%f",&runs_given);
        printf(" Enter the number of over he/she bowled :\t");
        scanf("%f",&overs);
        bowling_econ= runs_given/overs;
        if(bowling_econ<= 10)
        {
            printf(" Name of the Player :\t%s\n",name);
          printf(" Age of the Player :\t%d\n",age);
          printf(" Format in which he/she plays :\t%s\n",format);
          printf(" GRADE -- A++ BOWLER \n"); 
        }
        else if(10 < bowling_econ && bowling_econ <= 25)
        {
            printf(" Name of the Player :\t%s\n",name);
          printf(" Age of the Player :\t%d\n",age);
          printf(" Format in which he/she plays :\t%s\n",format);
          printf(" GRADE -- A+ BOWLER \n"); 
        }
        else if(bowling_econ > 25)
        {
            printf(" Name of the Player :\t%s\n",name);
          printf(" Age of the Player :\t%d\n",age);
          printf(" Format in which he/she plays :\t%s\n",format);
          printf(" GRADE -- A BOWLER \n");
        }
    }// block for bowling economy
    
    else if(role == 3)
    {
    printf(" Enter total number of runs scored and number of times he/she got out :-\n");
    scanf("%f",&runs);
    scanf("%f",&dism);
    batting_avg= runs/dism;
    printf(" Enter total number of runs given by the player and number of overs bowled by him/her :- \n");
    scanf("%f",&runs_given);
    scanf("%f",&overs);
    bowling_econ= runs_given/overs;
    ARavg=(batting_avg*bowling_econ)/100;
    if(ARavg<= 0.50)
    {
        printf(" Name of the Player :\t%s\n",name);
          printf(" Age of the Player :\t%d\n",age);
          printf(" Format in which he/she plays :\t%s\n",format);
          printf(" GRADE -- A++ ALL-ROUNDER \n");
    }
    else if(0.50 < ARavg && ARavg <= 0.90)
    {
        printf(" Name of the Player :\t%s\n",name);
          printf(" Age of the Player :\t%d\n",age);
          printf(" Format in which he/she plays :\t%s\n",format);
          printf(" GRADE -- A+ ALL-ROUNDER \n");
    }
    else if( ARavg > 0.90)
    {
        printf(" Name of the Player :\t%s\n",name);
          printf(" Age of the Player :\t%d\n",age);
          printf(" Format in which he/she plays :\t%s\n",format);
          printf(" GRADE -- A ALL-ROUNDER \n");
    }
    }// block for all rounder average.
    
    }// main ends.
