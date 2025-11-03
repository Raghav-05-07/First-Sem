#include<stdio.h>
#include <string.h>
struct medicine
{
    char med_name[50], med_comp[100];
    int med_quant,med_serial;
};
void main()
{ 
    int n;
    printf("Enter total no. of medicines :-\n");
    scanf("%d",&n);
    struct medicine k[n];
    int s = 50;
    for(int i = 0; i<n; i++)
    {
        
        printf("Enter the serial number of medicine-%d \n",(i+1));
        scanf(" %d",&k[i].med_serial);// Serial Number
        printf("Enter the name of the medicine-%d \n",(i+1));
        scanf(" %[^\n]",k[i].med_name);// Name
        //fgets(k[i].med_name,50,stdin);
        printf("Enter the composition of the medicine-%d \n",(i+1));
        scanf(" %[^\n]",k[i].med_comp);// composition
        printf("Enter quantity of medicine available-%d \n",(i+1));
        scanf(" %d",&k[i].med_quant);// quantity
    } 
        int temp_quant =0;
        char temp_name[50];
        char temp_comp[100];
        int temp_serial=0;
        
        for(int i =0; i<n-1;i++)
        {
            for(int j =0;j<n-i-1;j++)
            {
            if(k[j].med_quant<k[j+1].med_quant)
            {
                temp_quant=k[j].med_quant;
                k[j].med_quant=k[j+1].med_quant;
                k[j+1].med_quant=temp_quant;
                
                temp_serial=k[j].med_serial;
                k[j].med_serial=k[j+1].med_serial;
                k[j].med_serial=temp_serial;
                
                strcpy(temp_name, k[j].med_name);
                strcpy(k[j].med_name, k[j + 1].med_name);
                strcpy(k[j + 1].med_name, temp_name);
                
                 strcpy(temp_comp, k[j].med_comp);
                strcpy(k[j].med_comp, k[j + 1].med_comp);
                strcpy(k[j + 1].med_comp, temp_comp);
                
            }// if condition ends
            }// inner for ends
        }// sorting loop ends
        printf("\n------------------------------------------------------------------------\n");
        printf("sr no. \t\t name \t\t     compostion \t\t quantity");
        for(int i =0; i<n; i++)
        {
            printf("\n");
            printf("%d    ",k[i].med_serial);
            printf("\t\t %s  ",k[i].med_name);
            printf("\t\t %s  ",k[i].med_comp);
            printf("\t\t %d  ",k[i].med_quant);
            
            
        }// printfing loop ends
        
        
    
}// main ends

