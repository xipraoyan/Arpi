#include <iostream>


void createArr(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void initArr(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void printMaxSum(int *arr, double size)
{
  int sum = 0;
  
  
   for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    double mean = sum / size;
    std::cout << "arithmetical mean =" << mean << std::endl;
    
}


void deleteArr(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        delete [] arr;
    }
    
}


int main() {
   int size = 5;
   
   int *arr = new int[size];
   
   
   initArr(arr, size);
   createArr(arr, size);
   
   
   
   
   std::cout << std::endl;
   printMaxSum(arr, size);
   
   
   deleteArr(arr, size);
   
   return 0;
}