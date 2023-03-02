#include<stdio.h>
#include<string.h>

int main(){
    char msg[]= "CRYPTOGRAPHY";
    char key[]= "HELLO";
    int msgLen = strlen(msg);
    int keyLen=strlen(key);
    int i,j;
    char newKey[msgLen],encryptedMsg[msgLen],decryptedMsg[msgLen];
    //generating new key 
    for (i=0,j=0;i<msgLen;++i,++j) {
        if(j==keyLen)
        j=0;
        newKey[i]=key[j];
    }
    newKey[i]='\0';
    //encryption 
    for(i=0;i<msgLen;++i)
        encryptedMsg[i]=((msg[i]+newKey[i])%26)+'A';
    encryptedMsg[i]='\0';

    //decryption 
    for(i=0;i<msgLen;++i){
        decryptedMsg[i]=(((encryptedMsg[i]-newKey[i])+26)%26)+'A';
    }
    decryptedMsg[i]='\0';
    printf("original message :%s",msg);
    printf("\nKey:%s",key);
    printf("\n New Generated key : %s",newKey);
    printf("\n Encrypted Message :%s",encryptedMsg);
    printf("\n Decrypted message : %s", decryptedMsg);
        
        return 0;

    

}