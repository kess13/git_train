#include <iostream>
#include <vector>
#include<string>
using namespace std;
#include <algorithm>
vector <int> countingsort(vector<int> vec)
{

auto max = max_element(vec.begin(), vec.end());//Find out the maximum element from the given array.
int maxel= *max;
int temp=0;
vector<int> countarr(maxel+1,0);//Right.Initialize a countArray[] of length max+1 with all elements as 0. This array will be used for storing the occurrences of the elements of the input array.

for (int i=0; i <= maxel; i++)
{
countarr[i]=count(vec.begin(), vec.end(), i);//Right.In the countArray[], store the count of each unique element of the input array at their respective indices.
}
for (int i=0; i <= maxel; i++) 
{
                      //Store the cumulative sum or prefix sum of the elements of the countArray[] . right
temp=temp+countarr[i];
countarr[i]=temp;
}
vector<int> res(vec.size());
 for (int i = vec.size() - 1; i >= 0; i--) {//wrong
       res[ countarr[vec[i]] - 1] =vec[i];
       countarr[vec[i]]--;
    }
    return res;

}
 
 
vector<int> radix(vector<int> vec) {
    auto max = max_element(vec.begin(), vec.end());
    int maxel = *max;
    string maxDigit = to_string(maxel);

    for (int i = 0; i < maxDigit.length(); i++) {
        vector<int> positionvec = countingsort(vec); 
        vector<int> res(vec.size());


        vec = res; 
    }
    return vec;
}




int main()
{

vector <int> vec = {1, 1, 9, 3,3,3, 3, 4, 4, 0, 5,3, 8};

vec=countingsort(vec);
for (int i : vec)
{
cout << " " <<i;

}

}