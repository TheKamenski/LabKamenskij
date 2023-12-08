//
//  main.cpp
//  Lab2cycles
//
//  Created by Констатин  on 13.10.2023.
//
#include <iostream>
#include <cmath>
bool Rook(int a, int b, int c, int d) {
    return (a == c) || (b == d);
}
bool Threatens(int a, int b, int c, int d) {
    return (std::abs(a - c) == std::abs(b - d));
}
bool KingMove(int a, int b, int c, int d) {
    return (std::abs(a - c) <= 1) && (std::abs(b - d) <= 1);
}
bool QueenThreatens(int a, int b, int c, int d) {
    return Rook(a, b, c, d) || Threatens(a, b, c, d);
}
bool PawnMove(int a, int b, int c, int d) {
    if (a == c) {
        return (d == (b + 1));
    } else {
        return (std::abs(a - c) == 1) && (d == (b + 1));
    }
}
bool PawnCapture(int a, int b, int c, int d) {
    return (std::abs(a - c) == 1) && (d == (b + 1));
}
int main() {
    int a, b, c, d;
    std::cout << "Enter coordinates of positionA (a, b): ";
    std::cin >> a >> b;
    std::cout << "Enter coordinates of positionB (c, d): ";
    std::cin >> c >> d;
    if (Rook(a, b, c, d)) {
        std::cout << "The rook threatens positionB." << std::endl;
    }
    if (Threatens(a, b, c, d)) {
        std::cout << "The bishop threatens positionB." << std::endl;
    }
    if (KingMove(a, b, c, d)) {
        std::cout << "The king can move to positionB." << std::endl;
    }
    if (QueenThreatens(a, b, c, d)) {
        std::cout << "The queen threatens positionB." << std::endl;
    }
    if (PawnMove(a, b, c, d)) {
        std::cout << "The pawn can move to positionB." << std::endl;
    }
    if (PawnCapture(a, b, c, d)) {
        std::cout << "The pawn can capture a piece at positionB." << std::endl;
    }
    return 0;
}
