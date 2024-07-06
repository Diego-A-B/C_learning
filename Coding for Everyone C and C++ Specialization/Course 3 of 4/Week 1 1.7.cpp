#include <iostream>
#include <cstdlib>


using namespace std;

inline void swap_in_cpp(int& i, int& j){
    int temp = i;
    i=j;
    j=temp;
}

int main(void){

    int x, y;
    cout << "Enter the numbers to swap:"<<endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin>>y;

    swap_in_cpp(x,y);
    cout << "Now the x = " << x 
        << " and y = " << y << endl;


    return 0;
}