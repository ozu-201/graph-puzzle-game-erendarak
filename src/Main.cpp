//
// Created by ed028348 on 12/14/2023.
//

#include "Main.h"
#include <iostream>
#include <fstream>

using namespace std;


void check(){
    string text[1000];
    string temp;
    ifstream file;
    file.open(R"(C:\Users\TEMP\Desktop\temp.txt)");
    int i = 0;
    while (getline(file,temp)){
        text[i] = temp;
        i++;
    }

    for(int j = 0; j < 3; j++){
        cout << text[j] << endl;
    }

}

int main(){

    check();

    return 0;
}