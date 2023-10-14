//
//  main.cpp
//  4exercise
//
//  Created by Констатин  on 14.10.2023.
//




#include <iostream>

int main() {
    /*
    произведение всех целых чисел от 8 до 15;
    произведение всех целых чисел от a до 20 (значение a вводится с клавиатуры; 1 < a < 20);
    произведение всех целых чисел от 1 до b (значение b вводится с клавиатуры; 1 < b < 20);
*/
    for (int i = 8; i < 16; i++) {
        for (int j = 8; j < 16; j ++) {
            if (i != j || j != i){
                std:: cout << i * j<< " " ;
            }
        }
        std:: cout << std:: endl;
        
    }
    int a;
    std:: cout<< "Enter number in 1 < a < 20" << std:: endl;
    std:: cin >> a;
    
    if (a >= 20 || a <= 1){
        std:: cout << "wrong" << std:: endl;
    }
    
    
    for (a; a < 20; a++) {
        for (int j = a; j < 20; j ++) {
            if (a != j || j != a){
                std:: cout << a * j<< " " ;
            }
        }
        std:: cout << std:: endl;
        
    }
    
    int b;
    std:: cout<< "Enter number in 1 < b < 20" << std:: endl;
    std:: cin >> b;
    
    if (b >= 20 || b <= 1){
        std:: cout << "wrong" << std:: endl;
    }
    
    
    for (int j = 1; j <= b; j ++) {
        std:: cout << j * b << " ";
    }
    std:: cout<< std:: endl;
        
    
}
