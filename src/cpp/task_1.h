#include <iostream>
#include <cstdlib>

void task_1(int year){
    if (year%4==0){
        if(year%100==0){
            if (year%400==0){
                std::cout<<"true"<<std::endl;
            } else{
                std::cout<<"false"<<std::endl;
            }
        } else{
            std::cout<<"true"<<std::endl;
        }
    } else{
        std::cout<<"false"<<std::endl;
    }
    
}
