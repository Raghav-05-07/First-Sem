#include<stdio.h>
void main()
{
    char str[20];
    char class[5];
    float marks;
    printf("Enter student name :- \n");
    scanf("%[^\n]",str);
    printf("Enter the class in which the student is :- \n");
    scanf("%s",class);
    printf("Enter student marks :- \n");
    scanf("%f",&marks);
    
    FILE *fptr1;
    fptr1 = fopen("Student_register.txt","w");
    fprintf(fptr1,"%s\n",str);
    fprintf(fptr1,"%s\n",class);
    fprintf(fptr1,"%f\n",marks);
    fclose(fptr1);
    
    FILE *fptr2;
    fptr2 = fopen("Student_register.txt","r");
    fscanf(fptr2,"%s\n",str);
    fscanf(fptr2,"%s\n",class);
    fscanf(fptr2,"%f\n",&class);
    fclose(fptr2);
    printf("Done!");
}// main ends
