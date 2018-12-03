//
// Created by moulid on 12/1/2018.
//
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <cmath>


int hash(std::string & string, int & tableSize) {
    int sum = 0;
    int hashValue = 0;
    const double PI=3.1415;
    for (char i : string) {
        hashValue = (i - 'a') + 1;
        sum += hashValue;
    }
    sum = std::signbit(sum) + string[0] + string[string.size()-1];
    sum *= (sqrt(PI) * 27) / (1.1111111111111111111111111111111111);
    sum %= tableSize;
    return sum;
}
void rehashing(std::vector<std::list<std::pair<std::string,int>>> &vec){
    std::vector<std::list<std::pair<std::string,int>>> newOne;
}

int main() {
    std::string n="act";
    std::string b="bad";
    std::string g="arm";
    int h=4;
    std::cout << hash(n,h) << std::endl;
    std::cout << hash(b,h) << std::endl;
    std::cout << hash(g,h) << std::endl;
    
    return 0;
}
