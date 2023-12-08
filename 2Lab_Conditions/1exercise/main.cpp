//
//  main.cpp
//  1exercise
//
//  Created by Констатин  on 13.10.2023.
//
#include <iostream>

int main() {
    int X,Y,Z;
    
    std:: cin >> X >> Y >> Z;
    
    if (X % 2 != 0 && Y % 2 != 0){
        std:: cout << "condition is true" << std :: endl;
        
    }
    else{
        std:: cout << "condition is false" << std :: endl;
    }
    
    
    int X1,Y1,Z1;
    
    std:: cin >> X1 >> Y1 >> Z;
    
    if ((X1 < 20 && Y1 > 20) || (Y1 < 20 && X1 > 20)){
        std:: cout << "condition is true" << std :: endl;
        
    }
    else{
        std:: cout << "condition is false" << std :: endl;
    }
    
    
    
    int X2,Y2,Z2;
    
    std:: cin >> X2 >> Y2 >> Z2;
    
    if (X2 == 0 || Y2 == 0){
        std:: cout << "condition is true" << std :: endl;
        
    }
    else{
        std:: cout << "condition is false" << std :: endl;
    }
    
    int X3,Y3,Z3;
    
    std:: cin >> X3 >> Y3 >> Z3;
    
    if (X3 < 0 && Y3 < 0 && Z3 < 0 ){
        std:: cout << "condition is true" << std :: endl;
        
    }
    else{
        std:: cout << "condition is false" << std :: endl;
    }
    
    int X4,Y4,Z4;
    
    std:: cin >> X4 >> Y4 >> Z4;
    
    if ((X4 % 5 == 0 && Y4 % 5 !=0 && Z4 % 5 !=0) || (X4 % 5 != 0 && Y4 % 5 ==0 && Z4 % 5 !=0) || (X4 % 5 != 0 && Y4 % 5 !=0 && Z4 % 5==0)){
        std:: cout << "condition is true" << std :: endl;
        
    }
    else{
        std:: cout << "condition is false" << std :: endl;
    }
    
    
    int X5,Y5,Z5;
    
    std:: cin >> X5 >> Y5 >> Z5;
    
    if (X5 > 100 || Y5 > 100 || Z5 >100){
        std:: cout << "condition is true" << std :: endl;
        
    }
    else{
        std:: cout << "condition is false" << std :: endl;
    }
    return 0;
}
