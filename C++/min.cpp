#include<iostream>

int min(int a,int b){
    if (a<b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(){
    int a,b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    
    if (min(a, b)) {
        std::cout << "The minimum is: " << a << std::endl;
    } else {
        std::cout << "The minimum is: " << b << std::endl;
    }
    
    return 0;
}