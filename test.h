#ifndef TEST_H
#define TEST_H

using namespace std;
#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <vector>

vector<int> generateRandomArray(int size)
{
    vector<int> vec(size);
    for (int i = 0; i < size; i++)
    {
        vec[i] = rand();
    }
    return vec;
}
vector<int> SortedArr(int size)
{
    vector<int> vec(size);
    for (int i = 0; i < size; i++)
    {
        vec[i] = i;
    }
    return vec;
}
vector<int> ReversedSortedArr(int size)
{
    vector<int> vec(size);
    for (int i = size - 1; i >= 0; i--)
    {
        vec[i] = i;
    }
    return vec;
}

struct Timer
{
    std::chrono::high_resolution_clock::time_point start, end;
    chrono::duration<float> duration;
    Timer()
    {
        start = chrono::high_resolution_clock::now();
    }

    ~Timer()
    {
        end = chrono::high_resolution_clock::now();
        duration = end - start;
        float ms = duration.count() * 1000.0f;
        cout << "Timer took " << ms << "ms" << endl;
    }
};
#endif