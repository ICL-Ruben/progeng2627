#include <iostream>
#include <vector>
#include <string>

bool horizontal_look_for(const std::string& word, const std::vector<std::string>& grid, std::vector<std::vector<int>>& word_index){
    bool match;

    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j + word.size() <= grid[i].size(); j++){ // do not need to do string comparison for grid text that is smaller than word
            if(grid[i][j] == word[0]){
                for(int k = 1; k < word.size(); k++){
                    if(grid[i][j + k] == word[k]){
                        match = true;
                    }
                    else{
                        match = false;
                        k = word.size();
                    }
                }
                if(match == true){
                    for(int k = 0; k < word.size(); k++){
                        word_index.push_back({i,j+k});
                    }
                    return true;
                }
            }
        }
    }
    return false;
}

bool vertical_look_for(const std::string& word, const std::vector<std::string>& grid, std::vector<std::vector<int>>& word_index){
    bool match;

    for(int i = 0; i < grid[0].size(); i++){
        for(int j = 0; j + word.size() <= grid.size(); j++){
            if(grid[j][i] == word[0]){
                for(int k = 1; k < word.size(); k++){
                    if(grid[j + k][i] == word[k]){
                        match = true;
                    }
                    else{
                        match = false;
                        k = word.size();
                    }
                }
                if(match == true){
                    for(int k = 0; k < word.size(); k++){
                        word_index.push_back({j+k,i});
                    }
                    return true;
                }
            }
        }
    }
    return false;
}
void make_hashtag_grid(const std::vector<std::string>& grid, std::vector<std::string>& hashtagged_grid){ //make a grid of hashtags
    for(int i = 0; i < grid.size(); i++){
        hashtagged_grid.push_back(std::string(grid[i].size(), '#'));
    }
}

void grid_modify(const std::string& word, std::vector<std::string>& modifying_grid, const std::vector<std::vector<int>>& word_index){
    for(int i = 0; i < word_index.size(); i++){
        modifying_grid[word_index[i][0]][word_index[i][1]] = word[i];
    }
}

void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
){
    std::vector<std::string> modifying_grid;
    std::vector<std::vector<int>> word_index;

    make_hashtag_grid(grid, modifying_grid);

    for(int i = 0; i < words.size(); i++){
        word_index.clear();
        if(vertical_look_for(words[i], grid, word_index) || horizontal_look_for(words[i], grid, word_index)){
            grid_modify(words[i], modifying_grid, word_index);
        }
        else {
            not_found.push_back(words[i]);
        }

    }
    solution = modifying_grid;


}




int main(){

    std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 

    std::vector<std::string> expected_solution = {
        "#apple#",
        "##e####",
        "##a##b#",
        "##n##o#",
        "##u##t#",
        "##t####"
    };

    std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    if( (solution == expected_solution) && (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for(int i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }

}