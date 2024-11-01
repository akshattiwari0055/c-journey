//indexing
/*
#include<iostream>
using namespace std;
int main(){
    char ch = 'f';
    int position = ch - 'a';
    cout<<position<<endl;

}
*/
//char array
/*
#include<iostream>
using namespace std;
int main(){
    char arr[5] = {'a','b','c','d','e'};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
}
*/
//input a char array
/*\
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char ch[50];
    cin.getline(ch,50,'.');
    cout<<"Your word was: "<<ch<<endl;
    cout<<"Length: "<<strlen(ch)<<endl;

}
*/
//Uppercase
/*
#include<iostream>
#include<cstring>
using namespace std;
void uppercase(char word[],int n){
    char ch;
    for(int i=0 ; i<n ; i++){
        ch = word[i];
        if(ch>='A' && ch<='Z'){
            continue;
        }
        else{
            word[i] = ch-'a'+'A';
        }
    }
    cout<<word<<endl;
}
int main(){
    char word[] = "ApPle";
    uppercase(word,strlen(word));
}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;
void revchar(char word[],int n){
    int st = 0;
    int end = n-1;
    while(st<end){
        swap(word[st],word[end]);
        st++;
        end--;
    }
    cout<<word<<endl;
}
int main(){
    char word[] = "apple";
    revchar(word,strlen(word));
}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;
bool isPalindrome(char str[], int n){
    int st=0;
    int end=n-1;
    while(st<end){
        if(str[st++]!=str[end--]){
            cout<<"Not Palindrome"<<endl;
            return false;
        }
    }
    cout<<"Palindrome"<<endl;
    return true;
}
int main(){
    char str[] = "racecar";
    isPalindrome(str,strlen(str));
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Hello";
    str="Yellow";
    cout<<str<<endl;
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str<<endl;
    return 0;
}
*/
//For each loop
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Akshat Tiwari";
    for(char ch:str){
        cout<<ch<<",";
    }
}
*/
//Some Member functions in string
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Akshat Tiwari";
    cout<<str.length();
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Akshat Tiwari";
    cout<<str.at(2);
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Akshat Tiwari";
    cout<<str.substr(0,6);
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Akshat Tiwari";
    cout<<str.find("t");
}
*/
//Valid Anagram check
/*
#include<iostream>
#include<string>
using namespace std;
bool isAnagram(string str1,string str2){
    if(str1.length()!=str2.length()){
        cout<<"Not Valid Anagram!";
        return false;
    }
    int count[26]={0};
    for(int i=0;i<str1.length();i++){
        int index=str1[i]-'a';
        count[index]++;
    }
    for(int i=0;i<str2.length();i++){
        int index=str2[i]-'a';
        if(count[index]==0){
            cout<<"Not Valid Anagram!";
            return false;
        }
        count[index]--;
    }
    cout<<"Valid Anagram!";
    return true;
}
int main(){
    string str1="tar";
    string str2="tar";
    isAnagram(str1,str2);
}
*/
//Vowel Counter
/*
#include <iostream>
#include <string>
using namespace std;
int isVowel(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i]  == 'e' || str[i]  == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    return count;
}
int main() {
    string str = "earning";
    cout<<isVowel(str);
    return 0;
}
*/