#include "SomeClass.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

void spinner()
{
    while(true){
        std::cout << " Spinner executing .." << std::endl;
        std::this_thread::sleep_for(2s);
    }
}

int main(){

    //std::thread t(spinner);
    
    SomeClass some;
    some.doSomeThing();
    return 0;
}

