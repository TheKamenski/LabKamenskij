//
//  main.cpp
//  exercise4
//
//  Created by Констатин  on 15.10.2023.
//

#include <iostream>


int main()
{
    int a;
    std::cout << "Enter the number of numbers in the array. The array is filled random: "<< std::endl;
    std::cin >> a;
    
    int arr[a];
    int arr2[a-1];
    
    for(int i = 0; i < a; i++){
        arr[i] = rand() % 10 + -10;
    }
    for(int i = 0; i < a; i++){
        std::cout << arr[i]<< " ";
    }
    std::cout << std:: endl;
    int num = 0;
    for(int i = 0;i< a;i++){
        if(arr[i]< 0){
            num = i;
            break;
        }
    }
    for(int i = 0;i < num;i++){
        arr2[i] = arr[i];
    }
    
    for(int i = num;i < a - 1;i++){
        arr2[i] = arr[i+1];
    }
    
    
    for(int i = 0; i < a - 1; i++){
        std::cout << arr2[i]<< " ";
    }
    std::cout << "  "<< std::endl;
    ///Task 2 in 4
    ///
    ///
    int a1;
    std::cout << "Enter the number of numbers in the array. The array is filled random: "<< std::endl;
    std::cin >> a1;
    int mas[a1];
    int num2 = 0;
    int mas2[a1 - 1];
    
    for (int i = 0; i < a1; i++) {
        mas[i] = rand () % 15;
    }
    
    for (int i = 0; i < a1; i++) {
        std::cout << mas[i] << " ";
    }
    std::cout << std::endl;
    
    for(int i = a1 - 1;i > 0; i--){
        if(arr[i] % 2 == 0){
            num2 = i;
            break;
        }
    }
    
    for(int i = 0;i < num2;i++){
        mas2[i] = mas[i];
    }
    
    for(int i = num2;i < a1 - 1;i++){
        mas2[i] = mas[i+1];
    }
    
    for (int i = 0;i < a1 - 1; i++) {
        std::cout << mas2[i] << " ";
    }
    
    return 0;
}
