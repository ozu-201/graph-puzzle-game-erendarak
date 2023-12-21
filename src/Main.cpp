//
// Created by ed028348 on 12/14/2023.
//

#include "Main.h"
#include <iostream>
#include <fstream>

using namespace std;


void check(){
    string text[48543];
    string text3[48543];
    string text4[48543];
    string text5[48543];
    string temp;
    ifstream file;
    file.open(R"(C:\Users\TEMP\Desktop\temp.txt)");
    int i = 0;
    while (getline(file,temp)){
        text[i] = temp;
        i++;
    }

    for(int j = 0; j < 48543; j++){
        if (text[j].length() == 3){
            text3[j] = text[j];
        }
        if (text[j].length() == 3){
            text4[j] = text[j];
        }
        if (text[j].length() == 3){
            text5[j] = text[j];
        }
    }

    Graph* graph = new Graph(48543);

}


int main(){

    check();

    return 0;
}