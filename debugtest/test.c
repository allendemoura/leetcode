#include <stdbool.h>
#include <stdio.h>

bool canConstruct(char * ransomNote, char * magazine){

    // typedef struct node {
    //     int count;
    //     struct node *next;
    // } node;

    int table[26] = {0};
    int i = 0;
    char c;

    // load magazine into hash
    while ((c = *magazine++)){
        table[c - 97]++;
    }
    // check ransom against hash
    while ((c = *ransomNote++)){
        table[c - 97]--;
        if (table[c - 97] < 0){
            return false;
        }
    }

    return true;
}
int main(void){
    char *a = "aa";
    char *b = "aab";
    bool sector = canConstruct(a,b);
    return 1;
}
