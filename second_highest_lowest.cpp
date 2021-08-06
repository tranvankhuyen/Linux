#include <iostream>
// Delete element function..
void Delete_element(int a[], int size_a, int x)
{
    for(int i = x; i <= size_a - 1; i++)
    {
        a[i] = a[i + 1];
        a[size_a] = '\0'; 
    }
}
// Sort function : Max -> min.
void Sort(int a[], int n)
{
    for(int i = 0; i <= n -2; i++)
    {
        for(int j = i+1; j <= n - 1; j++)
        {
            if(a[i] < a[j])
            {
                std::swap(a[i], a[j]);
            }
        }
    }
}
// Remove redundant elements function.
void Remove_redundant_elements(int a[], int &n)
{
    for(int i = 0; i <= n - 1; i++)
    {
        for(int j = i+1; j <= n - 1; j++)
        {
            if(a[i] == a[j])
            {
                Delete_element(a, n, j);
                n--;
            }
        }
    }
}
//main function
int main(){
    int a[] = {1,5,4,4,5};
    int size_t = sizeof(a)/sizeof(a[0]);
    Sort(a, size_t);
    Remove_redundant_elements(a, size_t);
    if(size_t <= 2)
    {
        std::cout<<"INVALID";
    }
    else
    {
        std::cout<<a[1]<<" "<<a[size_t - 2];
    }
    return 0;
}