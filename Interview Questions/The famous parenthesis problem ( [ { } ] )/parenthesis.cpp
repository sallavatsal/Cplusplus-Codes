//
//  main.cpp
//  Stacks - Imagine an array and fill it up from bottom to top. LIFO DS
//
//  Created by Vatsal Salla on 9/20/18.
//  Copyright © 2018. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <stack>
#include <string>

using namespace std;

ifstream f("in.txt");
ofstream g("out.txt");

stack <char> S[20];

bool areParenthesisBalanced(string expr);              // Prototyping

int main()
{
    string expr;
    f>> expr;

    areParenthesisBalanced(expr) ? g<<"Balanced!\n" : g<<"Not Balanced!\n";
    return 0;
}

// User defined function to check if the given expression is balanced or not

bool areParenthesisBalanced(string expr){

    stack <char> S;
    int i;

    for(i = 0; i<expr.length(); i++){
        
        // Checking if it's an Opening bracket
        if(expr[i]=='(' || expr[i]=='[' || expr[i]=='{'){
            S.push(expr[i]);
            continue;
        }
        
        // Checking if it's a closing bracket
        switch(expr[i]){
                
            case '}':
                if(S.top() == '{')
                    S.pop();
                break;
                
            case ']':
                if(S.top() == '[')
                    S.pop();
                break;
                
            case ')':
                if(S.top() == '(')
                    S.pop();
                break;
                
            default:
                continue;
        }
        
    }
    
    return S.empty();
}
