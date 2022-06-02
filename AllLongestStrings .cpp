//
// Created by mohamedElHaddadi on 6/2/2022.
//
#include<iostream>
using namespace std ;
#include<vector>
vector<string> solution(vector<string> inputArray) {
    vector<string> newtab;
    int test=0;
    for (int i=0; i<inputArray.size(); i++) {
        if(test<inputArray[i].size())
            test=inputArray[i].size();
    }
    cout<<test<<endl;
    for (int i=0; i<inputArray.size(); i++) {

        if(test<=inputArray[i].size())
            newtab.push_back(inputArray[i]);
    }
    return newtab;
}
int main(){
    vector <string> inputArray = {"aba", "aa", "ad", "vcd", "aba"};
    vector<string>::iterator i;
    for ( i = inputArray.begin(); i != inputArray.end(); ++i) {
        cout<<*i<<" ,";
    }inputArray= solution(inputArray);cout<<endl;
    for ( i = inputArray.begin(); i != inputArray.end(); ++i) {
        cout<<*i<<" ,";
    }

    return 0;
}