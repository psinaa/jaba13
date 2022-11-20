#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <assert.h>
#include <ctype.h>
#include <stdio.h>

void task1();
void task1_2();
void task1_3();
void task2();


void main() {
    setlocale(LC_ALL, "RUS");
    task1_3();
    //    task2();

}

void task1() {
    char Name[100], Snew[20];
    printf("Приглашение к вводу имени\n");
    scanf("%s", Name);
    strcat(Snew, Name);
    printf("%s!\n", Name);
}



void task1_2() {
    char s[100];
    printf("Приглашение к вводу имени\n");
    scanf("%s", s);
    printf("%s=", s);
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
    }
    printf("%s\n", s);
}

void task1_3() {
    char s[100];
    char v[40] = { "Добрый вечер " };
    printf("Приглашение к вводу имени\n");
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
    }
    printf("%s%s", v, s);
    for (int i = 1; i <= 40 - strlen(s) - strlen(v); i++) { printf("!"); }
    printf("\n");
}

void task2() {
    char s[100];
    printf("Приглашение к вводу имени\n");
    scanf("%s", s);
    char s1[100];
    strcpy(s1, s);
    int i = 0;
    int k = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s1[i + k] = s[i];
            s1[i + k + 1] = s[i];
            s1[i + k + 2] = s[i];
            k += 2;
        }
        else {
            s1[i + k] = s[i];
        }
        i += 1;
        if (s[i + 1] != '\0')
            s1[i + k] = '\0';
    }
    printf("Привет, %s\n", s1);

}