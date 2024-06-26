#include <iostream>
//namespace :: std;

const double m_to_k = 1.609;

inline double convert(int mi){

    return mi * m_to_k;

}

int main(void){

    int miles = 1;
    while(miles != 0 ){

        std::cout << "Input distance in miles or 0 to terminate:";

        std::cin >> miles;

        std::cout << "\nDistance is " << convert(miles) << "km" << std::endl;

    }

    std::cout << std::endl;
}