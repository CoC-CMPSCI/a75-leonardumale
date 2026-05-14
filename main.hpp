#ifndef MAIN_HPP
#define MAIN_HPP
// Find the sub string in the original string
#include <iostream>
#include <cstring>
using namespace std;
int finduserstring(char[], int, char[], int);
int finduserstring(char cstr[], int cstrlen, char userstr[], int userlen)
{
    // If userstr is longer than cstr, it can never match
    if (userlen > cstrlen) return -1;

    // Outer loop: try each starting position in cstr
    for (int i = 0; i <= cstrlen - userlen; i++) {
        // Inner loop: check if userstr matches starting at cstr[i]
        bool match = true;
        for (int j = 0; j < userlen; j++) {
            if (cstr[i + j] != userstr[j]) {
                match = false;
                break;
            }
        }
        if (match) return i; // return index of first match
    }

    return -1; // not found
}
#endif
