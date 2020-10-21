#include <stdio.h>
#include <stdlib.h>
void grades(grade){
        switch(grade){
        case 'A':
        printf("%c Well done! Flawless Victory!\n", grade);
        break;
        case 'B':
            printf("%c Not so bad, might want to try harder...\n", grade);
            break;
        case 'C':
            printf("%c Ehh\n", grade);
            break;
        case 'D':
        case 'F':
            printf("%c Wow thats a fail! no matter what!\n", grade);
            break;
        default:
        printf("%c is an Invalid entry\n", grade);
    }
}
int main(){
    grades('A');
    grades('B');
    grades('C');
    grades('D');
    grades('G');
    return 0;
}