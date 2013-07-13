//
//  main.cpp
//  SortHeap
//
//  Created by Eagle on 13-7-11.
//  Copyright (c) 2013年 Eagle. All rights reserved.
//

#include <iostream>
#include "SortHeap.h"

using namespace std;

int main(int argc, const char * argv[])
{
    int MaxSize = 7;
    SortHeap<double> sort(MaxSize);
    sort.Insert(0.12);
    sort.Insert(0.35);
    sort.Insert(0.413);
    sort.Insert(0.59);
    sort.Insert(0.002);
    sort.Insert(0.11);
    sort.Insert(0.59);
    sort.Insert(0.41);
    sort.Insert(0.22);
    sort.Insert(0.85);
    sort.Insert(0.32);
    sort.Insert(0.8);
    sort.Insert(1.5);
    sort.Insert(2.6);
    double* heap = sort.Output();
    for (int i=1;i<MaxSize+1;i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
    return 0;
}

