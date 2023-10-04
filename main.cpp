#include <iostream>
#include <Buffer.hpp>
int main(){
std::cout<<"Hello Buffer"<<std::endl;
std::cout<<"test 2 git"<<std::endl;

Buffer<float> bufloat;
bufloat.Allocate(20);
std::cout<<bufloat.GetSize()<<std::endl<<bufloat.IsAllocated()<<std::endl;
}