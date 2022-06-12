#include <stdio.h>

int main() {
    char var;
    char var1;
    char var2;
    char var3;
    printf("Hello random person I've never met!\n");
    printf("\na:Hi!\n" "b:Gimmie all your money\n" "c:*ignore*\n");
    scanf(" %c", &var1);
    if (var1 == 'a') {
        printf("\n*you are liked more*");
    }
    if (var1 == 'b') {
        printf("\nno");
    }
    if (var1 == 'c') {
        printf("\nI'm SORRY did you not hear me?\n");
        printf("a: sorry I didn't\n" "b:*ignore*\n");
        scanf(" %c", &var2);
    }
    if (var2 == 'a') {
        printf("\n*you stay the same friendship level*");
    }
    if (var2 == 'b') {
        printf("\nLISTEN TO ME!\n");
        printf("a:listen\n""b:*ignore*\n");
        scanf(" %c", &var3);
    }
    
    if (var3 == 'a') {
        printf("\n*you are disliked*");
    }
    if (var3 == 'b') {
        printf("\nTHIS IS THE LAST STRAW!!\n");
        printf("*You are attacked by the person*\n");
        printf ("-34 health");
    }


    return 0;
}
