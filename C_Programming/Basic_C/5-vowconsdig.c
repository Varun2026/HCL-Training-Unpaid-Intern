#include<stdio.h>
#include<ctype.h>

int main(){
    char str[200];
    int vow = 0, cons =0, dig =0, spec =0;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i]!= '\0'; i++){
        if(isalpha(str[i])){
            char ch = tolower(str[i]);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vow++;
            }
            else{
                cons++;
            }
        }
        else if(isdigit(str[i])){
            dig++;
        }
        else if(str[i] != '\n'){
            spec++;
        }
    }
    printf("Vowels:%d\n", vow);
    printf("Consonants:%d\n", cons);
    printf("digits:%d\n", dig);
    printf("Special symbols: %d\n", spec);
    return 0;
}
