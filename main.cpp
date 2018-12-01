//
// Created by moulid on 12/1/2018.
//
#include <iostream>
#include <string>
#include <vector>
#include <list>

int hash(std::string&s,int&tablesize) {
    int sum = 0;
    int hashval=0;
    for (int i = 0; i < s.size(); i++) {
        hashval=(s[i]-'a')+1;
//        std::cout<<hashval<<std::endl;
        sum += hashval;
    }
    sum=sum;
    sum%=tablesize;
    return sum;
}
int main() {
    std::string n="act";
    std::string b="bad";
    std::string c="bog";
    std::string d="dud";
    std::string e="jig";
    std::string f="yuk";
    std::string g="arm";
    int h=8;
    std::cout << hash(n,h) << std::endl;
    std::cout << hash(b,h) << std::endl;
    std::cout << hash(c,h) << std::endl;
    std::cout << hash(d,h) << std::endl;
    std::cout << hash(e,h) << std::endl;
    std::cout << hash(f,h) << std::endl;
    std::cout << hash(g,h) << std::endl;


    return 0;
}
