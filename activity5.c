#include<stdio.h>
#include<stdlib.h>
int n = 0;
struct medicine
{
    char med_name[50], med_comp[100];
    int med_quant,med_serial;
} k[10];
//struct medicine k[n];
void main()
{
    while(1)
    {
        
        int choice ;
    printf("Press :- \n 1 - Input of Medicine Data. \n 2 - Sorted Display of Medicine Data. \n 3 - Search for a Medicine! \n 4 - end the program.\n");
    printf("Enter your Choice :-\n");
    scanf("%d",&choice);
        switch( choice )
    {
        
        case 1:
        { // case 1 starts
        
    printf("Enter total no. of medicines :-\n");
    scanf("%d",&n);
    
    for(int i = 0; i<n; i++)
    {
        
        printf("Enter the serial number of medicine-%d \n",(i+1));
        scanf(" %d",&k[i].med_serial);// Serial Number
        printf("Enter the name of the medicine-%d \n",(i+1));
        scanf(" %[^\n]",k[i].med_name);// Name
        printf("Enter the composition of the medicine-%d \n",(i+1));
        scanf(" %[^\n]",k[i].med_comp);// composition
        printf("Enter quantity of medicine available-%d \n",(i+1));
        scanf(" %d",&k[i].med_quant);// quantity
    }
    break; // case 1 break
        }// case 1 ends
        
        case 2:
        { // case 2 starts 
        struct medicine temp;
        
        for(int i =0; i<n-1;i++)
        {
            for(int j =0;j<n-i-1;j++)
            {
                
            if(k[j].med_quant<k[j+1].med_quant)
            {
                temp = k[j];
                k[j] = k[j+1];
                k[j+1] = temp;
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
        }
         printf("\n------------------------------------------------------------------------\n");
        
        break; // break of case 2
        }// case 2 ends
        
        case 3:
        { // case 3 starts 
            int search;
            printf("Enter the Serial no. of the medicine to be searched :-\n");
            scanf("%d",&search);
            for(int i =0; i<n ; i++)
            {
                if(k[i].med_serial == search)
                {
                    printf(" Serial no. \t-\t %d",k[i].med_serial);
                    printf("\n Name       \t-\t %s",k[i].med_name);
                    printf("\n Composition\t-\t %s",k[i].med_comp);
                    printf("\n Qauntity   \t-\t %d\n",k[i].med_quant);
                    goto search_over;
                }// search if ends
            }// search for-loop ends
            search_over: break;
        }// case 3 ends
        
        case 4:
        {// case 4 start
            printf("----------THANK YOU!----------");
            exit (0);
            break;
        }// case 4 ends
        default :
        {
            printf("wrong input");
            goto end;
        }// default ends
    }// swtich loop ends
    
    }// while ends
end : 
}// main ends
