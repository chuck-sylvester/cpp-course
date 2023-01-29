/*
    Section 10
    Challenge - Sustitution Cipher
    ---------------------------------------------------------------------------
    Prompt user to enter a secret message, e.g.: Never Underestimate Ant-Man.
    Encrypt the message using the substitution cipher.
    Display the encrypted phrase.
    Decrpypt the message using the substitution cipher.
    Disply the original message.
    
    Algorithm:
     - Replace each character of the original message with a corresponding encryption character.
     - Use string index value of original to find corresponding value.
*/

#include <iostream>
#include <string>
using namespace std;

// Function Prototypes
string encrypt(string msg);

int main() {
    string original_message {};
    string encrypted_message {};

    original_message = "Now is the time for all good men to come to the aid of the party";
    cout << "- " << original_message << endl;
    encrypted_message = encrypt(original_message);
    cout << "- " << encrypted_message << endl;

    cout << "\n----\n" << endl;

    original_message = "The quick brown Fox jumped over the lazy Dog...";
    cout << "- " << original_message << endl;
    encrypted_message = encrypt(original_message);
    cout << "- " << encrypted_message << endl;

    cout << "\n----\n" << endl;

    original_message = "I'll see you in the 'morning.";
    cout << "- " << original_message << endl;
    encrypted_message = encrypt(original_message);
    cout << "- " << encrypted_message << endl;

    cout << "\n----\n" << endl;

    cout << "The value of 'string::npos' is: " << string::npos << endl;
    cout << "The value of 'int(string::npos)' is: " << int(string::npos) << endl;
    cout << "The value of 'string::npos + 1' is: " << string::npos + 1 << endl;x
}

string encrypt(string msg) {
    string letters {};
    string encryption_key {};
    int msg_length = msg.length();
    string return_msg {};
    int letter_index {};
    string space = " ";

    letters =        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    encryption_key = "ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba";

    cout << "-- Input message length: " << msg_length << endl;
    cout << "-- ";

    for (int i = 0; i < msg_length; i++) {
        if (int(letters.find(msg[i])) >= 0) {
            cout << msg[i];
            letter_index = letters.find(msg[i]);
            return_msg += encryption_key[letter_index];
        } else {
            return_msg += msg[i];
        }
    }
    
    cout << endl;

    return return_msg;
}
