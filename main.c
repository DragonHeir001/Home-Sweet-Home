#include <stdio.h>
char get_answer(int hp) {
    char answer;
    scanf(" %c", &answer);
    if (answer == 'p') {
        printf("Hp: %d\n", hp);
        return get_answer(hp);
    }
    return answer;
}
int main() {
    int hp = 35;
    char answer;
    printf("Press p then enter at any time to get health.\n");
    printf("\nHello random person I've never met!\n");
    printf("\na:Hi!\n" "b:Gimmie all your money\n" "c:*ignore*\n");
    answer = get_answer(hp);
    if (answer == 'a') {
        printf("\n*you are liked more*");
        return 0;
    }
    if (answer == 'b') {
        printf("\nno");
        return 0;
    }
    if (answer == 'c') {
        printf("\nI'm SORRY did you not hear me?\n");
        printf("a: sorry I didn't\n" "b:*ignore*\n");
    }
    answer = get_answer(hp);
    if (answer == 'a') { 
        printf("\n*you stay the same friendship level*");
        return 0;
    }
    if (answer == 'b') {
        printf("\nLISTEN TO ME!\n");
        printf("a:listen\n""b:*ignore*\n");
    }
    answer = get_answer(hp);
    if (answer == 'a') {
        printf("\n*you are disliked*");
        return 0;
    }
    if (answer == 'b') {
        printf("\nTHIS IS THE LAST STRAW!!\n");
        printf("*You are attacked by the person*\n");
        printf ("-34 health");
        printf("\n*Achievement unlocked! How am I still standing?* (be on 1 hp)");
    }

    return 0;
}
