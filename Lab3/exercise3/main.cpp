//
//  main.cpp
//  exercise3
//
//  Created by Констатин  on 15.10.2023.
//

#include <iostream>

int main() {
    
    int arr[20];
    int trash = 0;
    
    for (size_t i = 0; i < 20; i++) {
        arr[i] = rand() % 10;
    }
    
    for (int i = 0; i < 20; i++) {
        std:: cout << arr[i];
    }
    std::cout << std::endl;
    
    for(size_t i = 0; i < 3; i ++){
        for (size_t j = 19; j >16;j--){
            trash  = arr[j];
            arr[j] = arr[i];
            arr[i] = trash;
        }
    }
    
    
    for (int i = 0; i < 20; i++) {
        std:: cout << arr[i];
    }
    std::cout << std::endl;
    
    return 0;
}
