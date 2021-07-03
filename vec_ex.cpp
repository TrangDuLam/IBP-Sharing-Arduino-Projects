#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>

int main(){


    std::vector<int> turkish{988, 880, 831, 880, 1046, 0, 1175, 1046, 988, 1046, 1318, 0, 1397, 1318, 1245, 1318};


    int sum;

    for (int i = 0; i < turkish.size(); i++){
        sum += turkish[i];
    }

    std::cout<< sum << std::endl;

    return 0;



}