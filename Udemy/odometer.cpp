#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int odometer(int reading) {
    int i = 1;
    int result = 0;
    while(i <= reading) {
        string str = to_string(i);
        for(int j=0; j<str.length(); j++) {
            if(str[j] == '4') {
                str[j] = '5';
                i = stoi(str);
                break;
            }
        }
        i++;
        result++;
    }
    return result;
}
int main() {
    int reading = 2005;
    cout<<odometer(reading);
    return 0;
}