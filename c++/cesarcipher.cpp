/*
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # 
# The Caesar Cipher technique is one of the earliest and simplest methods of encryption technique.                                        #
# It’s simply a type of substitution cipher, i.e., each letter                                                                            #
# of a given text is replaced by a letter with a fixed number of positions down the alphabet.                                             #
# __________                                                                                                                              #
# Algorithm                                                                                                                               #
# ----------                                                                                                                              #
#                                                                                                                                         #
# 1.Traverse the given text one character at a time .                                                                                     #
# 2.For each character, transform the given character as per the rule, depending on whether we’re encrypting or decrypting the text.      #
# 3.Return the new string generated.                                                                                                      #
#                                                                                                                                         #
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # 

*/


#include<iostream>
#include<ctype.h>


using namespace std;

string caesarEncrypt(string plain, int key);
string caesarDecrypt(string cipher, int key);

int main() {
    int choice, key;
    string plain, cipher;
    cout << "CAESAR CIPHER";
    do{
    cout << "\n\nEnter...\n  1 to encrypt\n  2 to decrypt";
    cout << "\n\nChoice? ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << endl << "Enter plain text message: ";
            cin >> plain;
            cout << endl << "Enter key: ";
            cin >> key;
            cipher = caesarEncrypt(plain, key);
            cout << endl << "Encrypted message: " << cipher;
            break;
        case 2:
            cout << endl << "Enter cipher text message: ";
            cin >> cipher;
            cout << endl << "Enter key: ";
            cin >> key;
            plain = caesarDecrypt(cipher, key);
            cout << endl << "Decrypted message: " << plain;
            break;
        default:
            cout << "Exit";
    }}while(true);
    return 0;
}

string caesarEncrypt(string plain, int key) {
    int i = 0;
    string cipher = "";
    while(plain[i] != '\0') {
        plain[i] = toupper(plain[i]);
        cipher += ((plain[i] - 65 + key) % 26) + 65;
        i++;
    }
    return cipher;
}

string caesarDecrypt(string cipher, int key) {
    int i = 0;
    string plain = "";
    while(cipher[i] != '\0') {
        cipher[i] = toupper(cipher[i]);
        plain += ((cipher[i] - 65 - key + 26) % 26) + 65;
        i++;
    }
    return plain;
}