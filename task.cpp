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

    cin >> c;
    
    c = tolower(c);
    
    char arr[30] = {"Apple pie bus pork"};  
    
    for (int i = 0; i < strlen(arr); i++)
    {
        arr[i] = tolower(arr[i]);
        
        if(!isspace(arr[i]))
        {
            if(arr[i] == c && !wordEnded)
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
