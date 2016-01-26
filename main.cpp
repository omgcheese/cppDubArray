//
//  main.cpp
//  cppDubArray
//
//  Created by Jinwook Lee on 2016-01-26.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

//  Question: An array contains n numbers ranging from 0 to n-2. There is exactly one number duplicated in the array. How do you find the duplicated number? For example, if an array with length 5 contains numbers {0,2,1,3,2}, the duplicated number is 2

#include <vector>
#include <iostream>
using namespace std;

int dubChecker(vector<int> arr) {
    unsigned long int size = arr.size();
    long int sum1 = 0, sum2 = 0;
    for(int i = 0; i < size; i++){
        if(i <= size-2) {
            sum1 += i;
            //cout << sum1 << endl;
        }
        sum2 += arr[i];
        
    }
    //cout << sum2 << " " << sum1 << " "<< size <<endl;
    return sum2-sum1;
}


int main() {
    vector<int> arr = {0,2,1,3,4,5,7,8,6,8};
    //vector<int> arr = {0,2,1,3,2};
    
    //We know that elements should be in between 0 to 3 since there are 5 elements in the vector
    //We know extra element is being added and we will call it m
    //By taking difference between 0+1+2+3 and 0+1+2+3+m, we know what the duplication value is
    int result = dubChecker(arr);
    cout << "Duplicated value is... " << result << endl;
    
    return 0;
}
