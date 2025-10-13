//program to generate bookstore bill'
#include<stdio.h>
void main()
{
    int n,i;char date[15];
    printf("Date: ");
    scanf("%s",date);
    printf("Please enter the no. of items purchased :  \n");
    scanf("%d",&n);
    char item_name[n][50];
    int qty[n];
    float price[n],pp[n];
    float discount = 0, tax = 0, total =0;
    for(i=1;i<=n;i++)
    {
        printf("Enter item %d : ",i);
        scanf("%19s",item_name[i]);
        printf("Enter quatity of item %d : ",i);
        scanf("%d",&qty[i]);
        printf("Enter price of item %d : ",i);
        scanf("%f",&price[i]);
        pp[i] = price[i]*qty[i];
        total += pp[i];
    }
    if(total>1000 && total<=1500)
    {
        discount = 0.10*total;
        total = total - discount;
    }
    else if(total>1500 && total <= 2000)
    {
        discount = 0.15*total;
        total = total - discount;
    }
    else if( total > 2000)
    {
        discount = 0.20*total;
        total = total - discount;
    }
    tax = 0.05*total;
    total = total + tax;
    printf("------------------------------------------------------------------\n");
    printf("\t\t\t\t\tWELCOME TO BOOK HAVEN!\t\t\t\t\t\n");
    printf("\t\t  Beside Vaishali restraunt, FC road, Pune - 411004.\n");
    printf("\t\tYT:Book_Haven\t\t\t\t\tlandline: 020 23953476\n");
    printf("\t\tInsta:Book_Haven\t\t\t\tPhone: +91 9899008822\n");
    printf("\t\t\t\t\tSUPPORT US ON OUR SOCIALS!\n");
    printf("------------------------------------------------------------------\n");
    printf("\t\tSr.no\t\tItem name\t\tQty\t\tamount\t\t\n");
    for(int j =1;j<=n;j++)
    {
        printf("\n \t\t%d  %19s\t\t %d\t\t %f ",j,item_name[j],qty[j],pp[j]);
    }// loop ends
    printf("\n------------------------------------------------------------------");
    printf("\n\t\t\t\t\t\t\t\t\t Discount : ₹%f \n",discount);
    printf("\t\t\t\t\t\t\t\t\t Tax      : ₹%f \n",tax);
    printf("\t\t\t\t\t\t\t\t\t Total    : ₹%f \n",total);
    printf("\n------------------------------------------------------------------");
    printf("\n\t\t\t\t\t THANK YOU!\t\t\t\t\t\n");
    printf("\t\t\t\t\tVISIT AGAIN!\t\t\t\t\t\n");
}// main ends
