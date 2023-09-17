//Efficient code for the fibonacci series
#include <iostream>
#include <vector>
using namespace std;
void printVector(vector <long long> vec)
{
    for(int i = 0 ; i < vec.size() ; i++)
        cout << vec[i] << " ";
}
vector<long long> fibonacci(int n)
{
    vector <long long> fib ;
    fib.push_back(0);
    fib.push_back(1);
    for(int i = 2 ; i < n ; i++)
    {
        fib.push_back(fib[i-1] + fib[i-2]);
    }
    return fib;
}
int main()
{
    int n;
    cout << "Enter the number of terms of fibonacci series you want to print : ";
    cin >> n;
    vector <long long> ans = fibonacci(n);
    printVector(ans);
    return 0;
}