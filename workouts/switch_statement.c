#include <stdio.h>
#include <stdlib.h>

int main(){
    char grade = 'A';
    
    switch(grade){
        case 'A':
        printf("Well done! Flawless Victory!\n");
        break;
        case 'B':
            printf("Not so bad, might want to try harder...\n");
            break;
        case 'C':
            printf("Ehh\n");
            break;
        case 'D':
        case 'F':
            printf("Wow thats a fail! no matter what!\n");
            break;
        default:
        printf("Invalid entry");
    }
    return 0;
}