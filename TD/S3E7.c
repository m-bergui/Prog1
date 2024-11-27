#include <stdio.h> 
int main( ) 
{ 
    int  n = 0 ; 
    while(1)
    {
        if(n%2 == 0)  // n = 0 , 0%2 = 0/ n = 3 , 3%2 = 1.
        {
            printf(" %d est paire \n", n); // 0 est paire.
            n += 3; // n = 0 + 3 = 3.
            continue; 
        } 
        if(n%3 == 0)  // n = 3, 3%3 = 0/ n = 9, 9%3 = 0/ n = 15, 15%3 = 0/
        {
            printf(" %d est multiple de 3 \n", n);  // 3 est multiple de 3/ 9 est multiple de 3/ 15 est multiple de 3.
            n += 5; // n = 3+ 5 = 8/ n = 9 + 5 = 14/ n = 15 + 5 = 20;
        } 
        if(n%5 == 0)  //n = 8, 8%5 = 3/ n = 14, 14%5 = 4/ n = 20, 20%5 = 0
        {
            printf(" %d est multiple de 5 \n", n); // 20 est multiple de 5
            break; 
        } 
    n += 1; // n = 8 + 1 = 9/ n = 14 + 1 = 15
    } 

} 