#include <iostream>

int main()
{
    std::cout<<"Getting the user data in DM\n";
    int numbers;
    std::cout<<"Kindly input number of grades : ";
    std::cin>> numbers;
    char *pGrades = nullptr;
    pGrades = new char[numbers];
    for(int i = 0; i < numbers; i++){
        std::cout <<"Enter grade #"<< i+1 << " : ";
        std::cin >> pGrades[i];
    }
    for(int i = 0; i < numbers ; i++){
        std::cout<<"The grade #"<<i+1<< " is : "<< pGrades[i]<< std::endl;
    }

    delete[] pGrades;
    return 0;
}
