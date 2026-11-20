#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>

//copy the translation list to a vector and split the vector into 2: word and translation.
//copy the text into a string type vector. scan the text for each word that can be translated
//if a word is needed to be translated replace it with the translated word

void split_vector(const std::vector<std::string>& vin, std::vector<std::string>& vout1, std::vector<std::string>& vout2){
    for(int i = 0; i < vin.size(); i++){
        if(i % 2 == 0){
            vout1.push_back(vin[i]);
        }
        else{
            vout2.push_back(vin[i]);
        }
    }
}

void word_translate(std::vector<std::string>& text, const std::vector<std::string>& word_v, const std::vector<std::string>& translation_v ){
    for(int i = 0; i < text.size(); i++){
        for(int j = 0; j < word_v.size(); j++){
            if(text[i] == word_v[j]){
                text[i] = translation_v[j];
            }
        }
    }
}

int main(){
    std::ifstream input_text_file, definition_file;
    std::vector<std::string> text, definition_v, word_v, translation_v;
    
    input_text_file.open("3.input.txt");
    definition_file.open("3.definition.txt");

    if(!input_text_file.is_open()){
        std::cout << "Error opening the input file" << std::endl;
        return EXIT_FAILURE;
    }
    if(!definition_file.is_open()){
        std::cout << "Error opening the definition file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(input_text_file >> tmp){
        text.push_back(tmp);
    }
    while(definition_file >> tmp){
        definition_v.push_back(tmp);
    }

    input_text_file.close();
    definition_file.close();

    split_vector(definition_v, word_v, translation_v);
    word_translate(text, word_v, translation_v);

    std::ofstream output_text_file;

    output_text_file.open("3.output.txt");

    for(int i = 0; i < text.size(); i++){
        output_text_file << text[i] + " ";
    }
    
    output_text_file.close();
}