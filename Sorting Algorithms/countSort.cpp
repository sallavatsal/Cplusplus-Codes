//
//  countSort.cpp
//  Counting Sort: How can we sort sequence (1, 7, 7, 7, 9, 2, 3, 10, 9, 4) in ascending order.
//  Using Array. Assuming 10 (1 to 10) terms in input which can be calibrated later
//
//  Created by Vatsal Salla on 9/20/18.
//  Copyright © 2018. All rights reserved.

#include <iostream>
#include <fstream>

using namespace std;

ifstream f("data.in");                       // Input File
ofstream g("data.out");                      // Output File

int a[11] = {};                              // Global declaration

int main()
{
    int i, j, t = 10;                        // t is number of terms in input
    int temp;
    
    for(i = 1; i<=t; i++)
    {
        f>>temp;                             // Getting input, term by term
        
        for(j = 1; j<=t; j++){
            if(j == temp)                    // Comparing given term from 1 to 10
            {
                a[j]++;                      // Incrementing the term number
                break;
            }
        }
    }

    for(j = 1; j<=t; j++)                    // Printing the term number
        g<<j<<" ";
    
    g<<endl;
    
    for(j = 1; j<=t; j++)                    // Printing the quantity of terms
        g<<a[j]<<" ";
    
    g<<"\n\nAscending Order is:\n";
    
    for(j = 1; j<=t; j++)
    {
        while(a[j]!=0)
        {
            g<<j<<" ";
            a[j]--;
        }
        
    }
    
      return 0;
}
