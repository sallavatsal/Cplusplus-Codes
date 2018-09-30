//
//  main.cpp
//  Queue Implementation. FIFO - First In First Out Data Structure
//
//  Created by Vatsal Salla on 9/29/18.
//  Copyright © 2018. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int Queue[100] = {0};
int frontInd = 0, backInd = -1;

int push(int);
int pop();
int isEmpty();
int front();

int main(){
    push(46);
    push(38);
    push(89);
    push(60);
    
    pop();
    pop();
    pop();
    
    cout << front() << endl;
}

int push(int x){
    ++backInd;
    Queue[backInd] = x;
    
    return 0;
}

int pop(){
    Queue[frontInd] = '\0';
    ++frontInd;
    
    return 0;
}

int isEmpty(){
    if(backInd<frontInd)
        return true;
    else
        return false;
}

int front(){
    return Queue[frontInd];
}
