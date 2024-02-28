//
//  main.cpp
//  string_task
//
//  Created by Констатин  on 16.10.2023.
//
#include <iostream>
#include <string>

// Task 5.
bool name_is_even(const std::string& name) {
    
    if(name.length() % 2 == 0 ){
        return true;
    }
    
    return false;
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
    if(name_one.size() > name_two.size()){
        return true;
    }
    return false;
}

//Task 7

void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three) {
    std::string the_shortest = "";
    std::string the_longest =  "";
    if((name_one.size() > name_two.size()) && (name_one.size() > name_three.size())){
        the_longest = name_one;
        std::cout << the_longest;
    }
    if((name_two.size() > name_one.size()) && (name_two.size() > name_three.size())){
        the_longest = name_two;
        std::cout << the_longest;
    }
    if((name_three.size() > name_two.size()) && (name_three.size() > name_one.size())){
        the_longest = name_three;
        std::cout << the_longest;
    }
}

//Task 8
std::string sub_str(const std::string& word, int m, int n) {
    std::string str[n-m+1];
    
    for(int i = m - 1; i <= n-m;i++){
        str[i] = word[i];
        std::cout << word[i];
    }
    
return std::string("Error");
    
}

// Task 9.
int add_stars(std::string& wordd) {
    int len = sizeof(wordd);
    std::string word2[len * 3];
    
    for (int i = len ; i < len * 2; i++) {
        word2[i] = wordd[i];
    }
    for (int i = 2 * len ; i < len * 3; i++) {
        word2[i] = '*';
    }
    for (int i = 0 ; i < len; i++) {
        word2[i] = '*';
    }
    std::cout<<word2;
    return 0;
}

// Task 10.
int percent_of_a(const std::string& word) {
    double n = 0;
    
    for(size_t i = 0; i < word.size();i++){
        if(word[i] == 'a'){
            n++;
        }
    }
    
    std::cout << n/word.size() * 100;
    return 0;
}

// Task 11.
std::string replace_can(const std::string& new_word) {
    std::string s ="Can you can a can as a canner can can a can?";
    
    double val = s.find("can");
        if(val == -1){
            std::cout << "Не найдено" << std::endl;
        }else{
            s.replace(0, 3, new_word);
            s.replace(7, 3, new_word);
            
            s.replace(12, 3, new_word);
            s.replace(27, 3, new_word);
            s.replace(30, 3, new_word);
            s.replace(35, 3, new_word);
        }
    
    std::cout << s << std::endl;
    return std::string(s);
}
// Task 9.

int main(){
    
    //std::cout <<name_is_even("Tamdovo") << std::endl;
    //std::cout <<first_is_longer("Kamenskij","Krivit") << std::endl;
    //longest_shortest("Tambov", "Moskow", "Saint_Petersburg");
    //sub_str("Tambov", 1, 3);
    
    //percent_of_a("Tambov");
    // replace_can("AA");

    
    
    //Task 9;
   
    int i=0;
       std::string word="";
    std:: cin >> word;
       std::string rez;
       std::string s;
       char str[word.length()];
       for( i=0; i<word.length(); i++)
       str[i]='*';
       str[i]='\0';
       s=str;
       rez=s+word+s;
       std::cout<<rez;
       return 0;
    
   // return 0;
}
