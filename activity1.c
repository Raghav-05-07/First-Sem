// Teacher code = '1' and student code = '0'
// program to open the door of the staff room of a college for authorized personnel only.
#include<stdio.h>
void main()
{   int code;
    printf(" This is the security check for the staff room of the college MMCOE. \n \n");
    printf(" NO STUDENTS ALLOWED IN THE STAFF ROOM ! \n \n ");
    printf("If you are a teacher, front office official or a cleaning crew member please enter your code. \n \n  ");
    scanf("%d",&code);
    printf("\n \n ");
    if(code == 1)
    {    
        printf("CODE RECOGNIZED !\n");
        printf(" ACCESS GRANTED \n");
        printf(" WELCOME ! \n");
    }// if block
    else if( code == 0)
    {
        printf(" STUDENTS NOT ALLOWED ! \n");
    }// else if block ends
    else 
    {
        printf("UNAUTHORIZED PERSONNLE \n");
        printf(" THIS IS A RESTRICTED AREA \n");
        printf(" ONLY FOR AUTHORIZED PERSONNEL \n");
        printf(" PLEASE GO TO THE FRONT OFFICE FOR ANY QUERIES \n");
    }// else clock ends
}// main ends

