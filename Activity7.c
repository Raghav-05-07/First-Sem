#include<stdio.h>
int Fib( int n)
{
    if( n == 0 )
    {
        return 0;
    }
    else if( n== 1)
    {
        return 1;
    }
    else 
    {
        return( Fib(n-2) + Fib(n-1));
    }
};
int Trib( int m)
{
    if(m == 0)
    {
        return 0;
    }
    else if( m== 1||m==2)
    {
        return 1;
    }
    else
    {
        return( Trib(m-3) + Trib(m-2) +Trib(m-1) );
    }
};
void main()
{
    int ch;
    int a;
    printf("Enter no. of terms up to which the series are to be printed :- \n");
    scanf("%d",&a);
    printf("Press - 1 : for Fibonacci series\nPress - 2 : for Tribonacci series\nEnter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    {
    for( int i = 0; i<a; i++)
    {
        int result = Fib(i);
        printf("%d \n",result);
    }
    break;
    }
    
    case 2:
    {
    for( int i = a; a>=0; i--)
    {
        int result = Trib(i);
        printf("%d \n",result);
    }
    break;
    }
    default:
    {
        printf("Wrong Input");
    }
}
}

