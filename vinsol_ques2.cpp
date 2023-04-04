#include <bits/stdc++.h>
 
using namespace std;
 
void Kill(vector<int> person, int k, int index)
{
    
    if (person.size() == 1) {
        cout << person[0] << endl;
        return;
    }
 
   
    index = ((index + k) % person.size());
 

    person.erase(person.begin() + index);
 
 Kill(person, k, index);
}
 
int main()
{
    int n = 100; 
                
    int k = 1;
    int index= 0; 
 
    vector<int> person;
    
    for (int i = 1; i <= n; i++) {
        person.push_back(i);
    }
 
 Kill(person, k, index);
}