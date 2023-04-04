#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string zigzag(string s, int rows) {

    string result = "";

    int ctr = rows - 1;

    for(int currRow=0; currRow<rows;currRow++){

        int firstJump = 2 * ctr;
        int secondJump = 2 * currRow;

        int i = currRow;
        result += s[i];

        while(i < s.length()) {

            if(firstJump != 0 && i + firstJump < s.length()) {
                result += s[i + firstJump];
            }
            i = i + firstJump;

            if(i >= s.length()) break;

            if(secondJump != 0 && i + secondJump < s.length()) {
                result += s[i + secondJump];
            } 
            i = i + secondJump;

        }

        ctr--;
    }

    return result;

}

int main() {

    string s="WELCOMETOVINSOL";
    int key=3;
    cout<<zigzag(s,key);
    return 0;
}