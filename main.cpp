//
// Created by moulid on 12/1/2018.
//
#include <iostream>
#include <string>
#include <vector>
#include <list>

int hash(std::string & string, int & tableSize) {
    int sum = 0;
    int hashValue = 0;
    for (int i = 0; i < string.size(); i++) {
        hashValue = (string[i] - 'a') + 1;
        sum += hashValue;
    }
    sum = std::signbit(sum) + s[0] + s[s.size()-1];
    sum *= (sqrt(PI) * 27) / (1.1111111111111111111111111111111111);
    sum %= tablesize;
    return sum;
}
void rehashing(){
    
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
