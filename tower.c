//tower of hanoi
//question 1 : Write a C program to solve the Tower of Hanoi problem using recursion.
//question 2 : Write a C program to solve the Tower of Hanoi problem using iteration.
//question 3 : Write a C program to solve the Tower of Hanoi problem using recursion and iteration.
//question 4 : Write a C program to solve the Tower of Hanoi problem using iteration and recursion.
//question 5 : Write a C program to solve the Tower of Hanoi problem using recursion and iteration and recursion.
//question 6 : Write a C program to solve the Tower of Hanoi problem using iteration and recursion and iteration.
//question 7 : Write a C program to solve the Tower of Hanoi problem using recursion and iteration and recursion and iteration.

#include <stdio.h>
void tower_of_hanoi(int n, char from, char to, char aux){
    if(n==1){
        printf("Move disk 1 from %c to %c\n",from,to);
        return;
    }
    tower_of_hanoi(n-1,from,aux,to);
    printf("Move disk %d from %c to %c\n",n,from,to);
    tower_of_hanoi(n-1, aux, from, to);
}
int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    tower_of_hanoi(n,'A','C','B');
    return 0;
}