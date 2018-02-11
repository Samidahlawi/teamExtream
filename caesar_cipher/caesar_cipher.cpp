//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// Copyright            : (C) 2017 The Team Extream
// File name            : caesar-cipher
//
// -------------------------------------------------------------------------
// A
//              _____           _
//             /  __ \         | |
//             | /  \/ ___   __| | ___
//             | |    / _ \ / _  |/ _ \
//             | \__/\ (_) | (_| |  __/
//              \____/\___/ \__,_|\____
//
//                                                  F i l e
//
//    This program is  will we using the 'Caesar Cipher' encryption / decryption.
//    Created by:
//    -Wayfarer
//    -the-7-hunter
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;



void encryption(string massage,int key);//take the massage and key
int decryption(string massage); // take the massage then guess the key. int because return the key
int main(){
    
    string msg;
    int choose;
    int key;
    cout << "   >>> Welcome to 'Caesar Cipher' application <<<  " << endl;
    cout << "What do you like?" << endl;
    cout << "1) Encryption the your massage " << endl 
         << "2) Decryption your massage" << endl;
    cin >> choose;
 
    if(choose == 1){
        cout << "Place enter your massage:" << endl;
        cin >> msg;
        cout << "Place enter the key of massage: " << endl;
        cin >> key;
        encryption(msg,key);
        
    }else if(choose == 2){
        
        // Nawaf you have to write the function of decryption here. "work hard play hard" (;
        
    }else{
        cout << "invalid choosed !!!" << endl;
    }
    
}


void encryption(string massage,int key){ 
    //  C = (P + K) mod 26    
    // P number of position of letter
    // k is key
    // 26 because the size of letter for example in Arabic  language we will select 28  
    //                   0   1   2   3   4   5   6   7   8   9  10   11  12  13  14  15  16  17  18 19  20  21  22  23  24  25
    char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int k = key; // k is key
    string cipher = ""; // cipher
    int check_letter = 0;
    
    for(int index = 0; index < massage.size() ; index++){ 
        for(int p = 0 ; p < 25 ; p++){
            if(massage[index] == letters[p]){
                cipher += letters[p+key];
                check_letter++;
            }
        }       
    }
    
//    if(check_letter == massage.size()){}else{}
    cout << "completed the encryption of massage" << "... "  << endl;
    cout << "Cipher is : \"" << cipher << "\""<< endl;
}
