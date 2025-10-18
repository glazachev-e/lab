#pragma once
#include <iostream>

namespace myFunc 
{
    int Readn();
    void ReadM(int n, int arr[][100]);
    void WriteM(int n, int arr[][100]);
    bool Positive_el(int n, int arr[][100]);
    bool Five_or_Three(int n1);
    bool FT(int n, int arr[][100]);
    int Mins(int n, int j, int mn, int arr[][100]);
    int SummSq(int n, int j, int s, int arr[][100]);
    void ChangeMin(int n, int arr[][100]);
}

