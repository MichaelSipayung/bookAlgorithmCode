#ifndef QUICK_FIND_IMP
#define QUICK_FIND_IMP
#include "quick_find.hpp"
#include <iostream>
void union_find(){
    int i,p,q,id[N];
    std::cout<<"input 2 pair number \t: " ;
    for (size_t i = 0; i < N; i++)
    {
        id[i]=i;
    }
    while (std::cin>>p>>q)
    {
        int t=id[p];
        if (t==id[q])
        {
            continue; //pass ... 
        }
        for ( i = 0; i < N; i++)
        {
            if (id[i]==t)
            {
                id[i]=id[q];
            }
        }
        std::cout<<" " << p <<" " <<q<<std::endl;
    }
    std::cout<<" result \t: "<<std::endl;
    for (size_t i = 0; i < N; i++)
    {
        std::cout<<id[i] <<" |";
    }
}
#endif
