/*
$        $        $
$$$      $$$      $$$
$$$$$    $$$$$    $$$$$
$$$$$$$  $$$$$$$  $$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$  $$$$$$$  $$$$$$$
$$$$$    $$$$$    $$$$$
$$$      $$$      $$$
$        $        $
*/
#include <stdio.h>
int main()
{
    int i,j,n=5,N=4;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*i+1;j++)
        {
           printf("$"); 
        }
        for(j=0;j<2*n-2*i-2;j++)
        {
            printf(" ");
        }
        for(j=0;j<2*i+1;j++)
        {
           printf("$"); 
        }
        for(j=0;j<2*n-2*i-2;j++)
        {
            printf(" ");
        }
        for(j=0;j<2*i+1;j++)
        {
           printf("$"); 
        }
    printf("\n");
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<2*N-2*i-1;j++)
        {
            printf("$");
        }
        for(j=0;j<2*i+2;j++)
        {
            printf(" ");
        }
           for(j=0;j<2*N-2*i-1;j++)
        {
            printf("$");
        }
        for(j=0;j<2*i+2;j++)
        {
            printf(" ");    
        }
        for(j=0;j<2*N-2*i-1;j++)
        {
            printf("$");
        }
    printf("\n");
}
}