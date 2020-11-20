#include <stdio.h>
#include <stdlib.h>

int main(){
char word[128];
char pass[128]=("abcdefghijklmnopqrstuvwxyz\0");
char password[128]=("\0");
printf("請輸入要加密的文字");
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
printf("加密後是%s",word);
}

//老師，我真的不會做XD























}
