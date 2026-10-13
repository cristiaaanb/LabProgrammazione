#include <iostream>
#include <vector>
using namespace std;

void print(string s, const vector<int>& v){

    for(int i=0; i<v.size() ; i++){

        cout << to_string(v[i]);
        
    }
   
}

int main(){

    vector<int> v1 = {1,2,3,4};
    string s1 = "";
    print(s1, v1);
    
    return 0;
}

