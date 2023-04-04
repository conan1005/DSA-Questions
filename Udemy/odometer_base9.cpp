#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int odometerBase9(int reading) {

    int result = 0;
    int factor = 0;
    reading -= 1;

    while(reading != 0) {
        int rem = reading % 10; 
        result += (rem * pow(9, factor)); 
        factor++; 
        reading = reading / 10;
    }

    return result;
}
int main() {

    int reading = 2005;
    cout<<odometerBase9(reading);
    return 0;
}