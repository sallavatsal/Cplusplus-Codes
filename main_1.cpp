//
//  main.cpp
//  oocp
//
//  Created by Vatsal Salla on 9/16/18.
//  Copyright © 2018. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int main()
{
    int a, b, c, sum;
        
    f>>a>>b>>c;
    sum = a+b+c;

    g<<"sum = "<<sum<<endl;
    g<<"Maximum = "<<max(a,b)<<endl;
    g<<"Minimum = "<<min(a,b)<<endl;;
    swap(a,b);
    g<<"Swapped Values: \n"<<"a = "<< a <<endl<<"b = "<<b<<endl;
    
    return 0;
}
