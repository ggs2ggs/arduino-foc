// little C++ script to test the custom filter classes designed for the Simple FOC Library
// compile using
// clang++ testFilter.cpp medianFilter.h medianFilter.cpp
// produces executable a.out

#include <iostream>
#include <vector>
#include <string>

#include "median_filter.h"

using namespace std;

int main()
{
    // create a median Filter
    MedianFilter mf = MedianFilter();

    // supply a range of inputs
    int n_inputs = 15;
    //float inputs[] = {0,0,0,0,0,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1};
    //float inputs[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    float inputs[] = {0,1,2,0,1,2,0,1,2,0,1,2,0,1,2,}; // should stabilize at 1

    // print the filtered result to the command line
    // initial state
    /*
    cout << "SSA :";
    for(int j = 0;j<5;j++) cout << mf.steps_since_addition[j] << " ";
    cout << endl << "SM  :";
    for(int j = 0;j<5;j++) cout << mf.sorted_measurements[j] << " ";
    cout << endl;
    */
    // feed in measurements
    float result;
    for(int i = 0; i<n_inputs; i++){
        result = mf(inputs[i]);
        cout << result << " ";
        /*cout << "SSA :";
        for(int j = 0;j<5;j++) cout << mf.steps_since_addition[j] << " ";
        cout << endl << "SM  :";
        for(int j = 0;j<5;j++) cout << mf.sorted_measurements[j] << " ";
        cout << endl;
        */
    }
    cout << endl;
}