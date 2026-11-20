#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>

void occurrence_counter(std::string word, const std::vector<std::string>& text, int& counter){ //counts the number of times a word is repeated in a vector
    counter = 0;
    for(int i = 0; i < text.size(); i++){
        if(word == text[i]){
            counter++;
        }
    }
}

int wordcount_concatenate(const std::vector<std::string>& words, const std::vector<int>& counters, std::vector<std::string>& output ){
    if(words.size() != counters.size()){
        std::cout << "Error, cannot concatenate vectors as they are not the same dimension" << std::endl;
        return EXIT_FAILURE; //This confirmation wont be needed as we know that the two vectors will be the same size
    }

    std::string tmp;

    for(int i = 0; i < words.size(); i++){
        tmp = words[i] + ": " + std::to_string(counters[i]);
        output.push_back(tmp);
    }
    return 0;
}

int main(){
    std::ifstream textfile, wordsfile;
    std::vector<std::string> words, text, output;
    std::vector<int> counters;
    std::string tmp;
    
    textfile.open("2.text.txt");
    wordsfile.open("2.words.txt");

    if(!textfile.is_open()){
        std::cout << "Error opening the text file" << std::endl;
        return EXIT_FAILURE;
    }
    if(!wordsfile.is_open()){
        std::cout << "Error opening the word comparison file" << std::endl;
        return EXIT_FAILURE;
    }

    while(textfile >> tmp){
        text.push_back(tmp);
    }
    while(wordsfile >> tmp){
        words.push_back(tmp);
    }

    textfile.close();
    wordsfile.close();

    for(int i = 0; i < words.size(); i++){
        int tmp_int;
        occurrence_counter(words[i], text, tmp_int);
        counters.push_back(tmp_int);
        
    }
    wordcount_concatenate(words, counters, output);

    std::ofstream outputfile;

    outputfile.open("2.output.txt");

    for(int i = 0; i < output.size(); i++){
        outputfile << output[i] << std::endl;
    }

    std::cout << "Programme has finished" << std::endl;
}