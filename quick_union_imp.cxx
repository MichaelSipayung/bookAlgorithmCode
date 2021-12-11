#ifndef QUICK_UNION_IMP
#define QUICK_UNION_IMP
#include <iostream>
#include "quick_find.hpp"
void quick_union(){
    int i,p,q,id[N],j;
    std::cout<<"input 2 pair number \t: " ;
    for ( i = 0; i < N; i++)
    {
        id[i]=i;
    }
    while (std::cin>>p>>q)
    {
        for ( i = p; i !=id[i]; i=id[i]);
        for ( j = q; j !=id[j]; j=id[j]);
        if (i==j)
        {
            continue ;//pass
        }
        id[i]  = j;
        std::cout<<" " <<p <<" " << q<<std::endl;
    } 
    for ( i = 0; i < N; i++)
    {
        std::cout<< id[i] <<" ";
    }
}
#endif