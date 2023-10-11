#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
    int min=0,sec=0,hour=0;
    time_t t;
    while(1){
        
        system("cls");
        time(&t);
        printf("\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t%s",ctime(&t));
        printf("\n");
    }  
    return 0;

}