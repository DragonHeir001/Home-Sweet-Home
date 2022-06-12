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
    printf("Press p then enter at any time to get health.\n\n\n");
    printf("Hello random person I've never met!\n\n");
    printf("a:Hi!\n" "b:Gimmie all your money\n" "c:*ignore*\n\n");
    answer = get_answer(hp);
    if (answer == 'a') {
        printf("*you are liked more*");
        return 0;
    }
    if (answer == 'b') {
        printf("no");
        return 0;
    }
    if (answer == 'c') {
        printf("I'm SORRY did you not hear me?\n");
        printf("a: sorry I didn't\n" "b:*ignore*\n\n");
    }
    answer = get_answer(hp);
    if (answer == 'a') { 
        printf("*you stay the same friendship level*");
        return 0;
    }
    if (answer == 'b') {
        printf("LISTEN TO ME!\n");
        printf("a:listen\n""b:*ignore*\n\n");
    }
    answer = get_answer(hp);
    if (answer == 'a') {
        printf("*you are disliked*");
        return 0;
    }
    if (answer == 'b') {
        printf("THIS IS THE LAST STRAW!!\n");
        printf("*You are attacked by the person*\n");
        printf("-34 health\n");
        printf("Hp: %d\n", hp - 34);         
        printf("*Achievement unlocked! How am I still standing?* (be on 1 hp)");
    }

    return 0;
}
