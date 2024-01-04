//
// Created by ed028348 on 12/14/2023.
//

#include "Main.h"
#include <iostream>
#include <fstream>

using namespace std;

/**
 * This is the method for reading from a text file and adding words to corresponding positions (3 words to 3word array etc.)
 * Because in the last lab, TA's said that use only 10 words (4 threeChars, 3 fourChars, 3 fiveChars), this method fixed according to that information.
 */
void check(){
    string text[10];
    string text3[4];
    string text4[3];
    string text5[3];
    string temp;
    int counter3 = 0;
    int counter4 = 0;
    int counter5 = 0;
    ifstream file;
    file.open(R"(C:\Users\TEMP\Desktop\temp.txt)");
    int i = 0;
    while (getline(file,temp)){
        text[i] = temp;
        i++;
    }

    for(int j = 0; j < 10; j++){
        if (text[j].length() == 3){
            text3[counter3] = text[j];
        }
        if (text[j].length() == 5){
            text4[counter4] = text[j];
        }
        if (text[j].length() == 5){
            text5[counter5] = text[j];
        }
    }

}

int main() {
    // ------------------------------------
    // DO THE NECESSARY CHANGES ACCORDING TO YOUR IMPLEMENTATION
    // ------------------------------------
    // Test Case: Adding Edges with One-Letter Difference (3 letter words)
    Graph graph3(3);
    graph3.addWord("cat");
    graph3.addWord("cot");
    graph3.addWord("cog");
    graph3.addWord("dog");
    graph3.addEdge("cat", "cot");
    graph3.addEdge("cot", "cog");
    graph3.addEdge("cog", "dog");

    std::cout << "Test Case: Adding Edges with One-Letter Difference (3 letter words)\n";
    std::cout << "Shortest Path from 'cat' to 'dog' (BFS):\n";
    graph3.BFS("cat", "dog");
    std::cout << "Shortest Path from 'cat' to 'dog' (Dijkstra):\n";
    //graph3.Dijkstra("cat", "dog");
    std::cout << "------------------------------------------\n";

    // Test Case: Adding Edges with One-Letter Difference (4 letter words)
    Graph graph4(3);
    graph4.addWord("dark");
    graph4.addWord("bark");
    graph4.addWord("barn");
    graph4.addEdge("dark", "bark");
    graph4.addEdge("bark", "barn");

    std::cout << "Test Case: Adding Edges with One-Letter Difference (4 letter words)\n";
    std::cout << "Shortest Path from 'dark' to 'barn' (BFS):\n";
    graph4.BFS("dark", "barn");
    std::cout << "Shortest Path from 'dark' to 'barn' (Dijkstra):\n";
    //graph4.Dijkstra("dark", "barn");
    std::cout << "------------------------------------------\n";

    // Test Case: Adding Edges with One-Letter Difference (5 letter words)
    Graph graph5(3);
    graph5.addWord("stone");
    graph5.addWord("store");
    graph5.addWord("score");
    graph5.addEdge("stone", "store");
    graph5.addEdge("store", "score");

    std::cout << "Test Case: Adding Edges with One-Letter Difference (5 letter words)\n";
    std::cout << "Shortest Path from 'stone' to 'score' (BFS):\n";
    graph5.BFS("stone", "score");
    std::cout << "Shortest Path from 'stone' to 'score' (Dijkstra):\n";
    //graph5.Dijkstra("stone", "score");
    std::cout << "------------------------------------------\n";

    return 0;
}