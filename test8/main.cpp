#include <bits/stdc++.h>

// void PlusMinus(int *arr, short int &size)
// {
//     short int zeros{0}, positive{0}, negetive{0};
//     for (short int i = 0; i < size; i++)
//     {

//         if (arr[i] == 0)
//         {
//             ++zeros;
//         }   
//         else if (arr[i] > 0)
//         {
//             ++positive;
//         }
//         else if (arr[i] < 0)
//         {
//             ++negetive;
//         };
//     };
//     printf("positive radio %.7f \nnegetive radio %.7f \nzeros radio %.7f\n",
//            static_cast<float>(positive) / size,
//            static_cast<float>(negetive) / size,
//            static_cast<float>(zeros) / size);
// };
// int main(void)
// {
//     short int size{0};
//     std::cerr << "please enter size of arr : ";
//     std::cin >> size;
//     int *arr = (int *)malloc(size * sizeof(int));
//     for (int i = 0; i < size; i++)
//     {
//         std::cin >> arr[i];
//         std::cerr << arr[i] << "\n";
//     };
//     PlusMinus(arr, size);
//     return 0;
// };
#include <iostream>
#include <iomanip>
enum OperatingSystem
{
WINDOW,LINUX, IOS, ANDROID, MAC
};
const constinit int ONWINDOW {5};
int main()
{

constexpr int OS = OperatingSystem::LINUX;
// ONWINDOW=5;
/*if (*/static_assert(OS == OperatingSystem::LINUX);//)
// ONWINDOW =9;
static_assert(ONWINDOW);
std::cerr << "Running on Android ...\n";
// else if (static_assert(OS == OperatingSystem::IOS))
// std::cerr << "Running on IOS ...\n";
// else if (static_assert(OS == OperatingSystem::LINUX))
// std::cerr << "Yeah ! Running on Linux ...\n";

return 0;
}