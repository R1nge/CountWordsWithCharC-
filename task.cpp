#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <cstring>
using namespace std;

#define MAX 100

int main() 
{
    int wordCount = 0;
    bool wordEnded = false;
    char c = '_';
    string s = "_";
    
    getline(cin, s);
    
    cout << "\n";

    cin >> c;
    c = tolower(c);
    
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        
        if(!isspace(s[i]))
        {
            if(s[i] == c && !wordEnded)
            {
                wordCount++;
                wordEnded = true;
            }
        }
        else
        {
            wordEnded = false;    
        }
    }
    
    cout << wordCount;
}
