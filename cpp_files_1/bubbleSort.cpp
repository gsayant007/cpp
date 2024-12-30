#include <iostream>
#include <vector>
#include <array>

using namespace std;

void bubbleSort(vector<int>&arr)
{   
    int n = arr.size();
    if(n==1)
    {
        std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, "\n"));
        std::cout << std::endl;
    }
    else
    {
        for(int i=0; i<=n-1;i++)
        {
            for(int j=i; j<=n-1;j++)
            {
                if(arr[i]>=arr[j])
                {
                    swap(arr[i],arr[j]);
                }
            }
        }
        std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, "\n"));
        std::cout << std::endl;
    }
}