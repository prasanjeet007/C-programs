#include <iostream>
using namespace std;
bool pairTwoSum(int arr[], int target){
 for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
           if(arr[row]+arr[col]==target){
            return true;
           }
        }
    }
 return false;
}
int main()
{
    int arr[] = {10, 20, 30};
    int target = 0;
    bool result = pairTwoSum(arr,target);
    if(result){
        cout<<"Found"<<"\n";
    } else{
        cout<<"Not Found"<<"\n";
    }
    return 0;
}