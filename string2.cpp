//Check whether a string is Palindrom or not
#include<iostream>
#include<string.h>
using namespace std;


// funciton for check in palindrom
bool isPalRec(char str[], int s , int e){
if(s == e)
return true;
if(str[s] != str[e])
return false;
if(s < e+1)
return isPalRec(str,s+1 ,e-1);
return true;
}

bool isPalindrom(char str[]){
    int n = strlen(str);

    if( n == 0)
    return true;
    return isPalRec(str , 0 , n-1);
    
}

int main(){
    char str[] = "abba"; 
    if(isPalindrom(str))
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}