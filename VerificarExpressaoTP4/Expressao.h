#ifndef EXPRESSAO_H_INCLUDED
#define EXPRESSAO_H_INCLUDED
#include <math.h>

using namespace std;

struct Expressao{
    int a,b,c;
    bool isTriangulo(int a,int b,int c){
       return a<b+c && b<a+c && c<a+b;
    }
    int getPerimetro(int a,int b,int c){
        return a+b+c;
    }
    double getArea(int a,int b,int c){
        double sp=(a+b+c)/2;
        return sqrt (sp+(sp-a)*(sp-b)*(sp-c));
    }
    string getTipo(int a,int b,int c){
       if(a==b && b==c){
            return "equilatero";
       }
       else {
            if(a==b || b==c || a==c){
                return "isoceles";
            }
            else{
                return "escaleno";
            }
       }
    }
};




#endif // EXPRESSAO_H_INCLUDED
