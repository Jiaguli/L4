#include <stdio.h>
#include <stdlib.h>

int main(){
char word[128];
char pass[128]=("abcdefghijklmnopqrstuvwxyz\0");
char password[128]=("\0");
printf("�п�J�n�[�K����r");
scanf("%c",&word);
if (word[0] == '+'){
        for(int a=0;a<128;a++){
            for(int b=0;b<26;b++){
                if(word[a] == pass[b]){
                    word[a] = pass[b++];
                    b=b-1;
            break;
            }

            }


}
printf("�[�K��O%s",word);
}

//�Ѯv�A�گu�����|��XD























}
