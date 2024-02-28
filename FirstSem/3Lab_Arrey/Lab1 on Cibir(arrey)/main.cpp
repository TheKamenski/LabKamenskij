//
//  main.cpp
//  Lab2 on Cibir
//
//  Created by Констатин  on 10.10.2023.
//
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>



int main()
{
    /// 1 exercise
    int arr[10] = {0};
    
    
    for(size_t i = 0; i < 10;i++){
        arr[i] = rand() % 10;
        std:: cout << arr[i] << " ";
    }
    std::cout << std:: endl;
    
    for (size_t i = 0; i < 10;i++){
        std::cout << arr[i] * 2<< "  "; // increase 2
    }
    std:: cout << std::endl;
    
    ///
    int a = 1;
    
    for (size_t i = 0; i < 10; i++){
        std:: cout <<arr[i] - a<< "  "; ///  reduce a
    }
    std:: cout << std:: endl;
    
    ///....
    for (size_t i = 0; i < 10; i++){
        std:: cout << arr[i] / arr[0]<< "  ";
    }
    std:: cout << std:: endl;
    
    /// exercise 2  about sum
     
    double sum1 = 0 ;
    
    for (size_t i = 0; i < 10; i++) {
        sum1 += arr[i];
    }
    
    std:: cout <<"Yours summ: "<< sum1 << std:: endl;
    ///
    
    int sum2 = 0;
    for (size_t i = 0; i < 10; i++){
        sum2 += pow(2, arr[i]);
    }
    std:: cout << "Sum of squares of all array elements: " << sum2 << std:: endl;
    ///
    ///
    int sum_of_6 = 0;
    
    for (size_t i = 0; i < 6;i++){
        sum_of_6 += arr[i];
    }
    std::cout << "The sum of the first six elements of the array: " << sum_of_6 << std::endl;
    
    /// 2 (4)
    int k1,k2;
    int sum = 0;
    std::cout << "Enter k1 and k2:"<<std:: endl;
    std::cin >> k1 >> k2;
    
    for (size_t i = 0; i < 10; i++){
        if (i >= k1 -1 && i <= k2 -1 ){
            sum +=arr[i];
        }
    }
    std::cout << "Your summ in k1 to k2 :"<< " "<< sum<< std::endl;
    
    std:: cout << "Arithmetic average of all array elements: " << sum1 / 10<< std::endl;
    
    ///
    std:: cout << "Enter s1 and s2:" << " ";
    int s1,s2;
    double sum3 = 0;
    
    std::cin >> s1 >> s2;
    
    if(s2<s1){
        std::cout << "ERROR"<<std::endl;
    }
    
    for (size_t i = 0; i < 10; i++){
        if (i >= s1 -1 && i <= s2 -1 ){
            sum3 +=arr[i];
        }
    }
    std::cout << sum3/(s2-s1 + 1)<<std::endl;
    
    
    
    
    
    return 0;
}
