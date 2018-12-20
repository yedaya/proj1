//
// Created by yedaya on 12/17/18.
//
#include "BinaryExpression.h"

#ifndef PROJ1_MULEXP_H
#define PROJ1_MULEXP_H
class MulExp: BinaryExpression{
    double calculate() override {
        if(right->calculate()==0){
            throw "Divid by zero - error!";
        }
        return (left->calculate()*right->calculate());
    }



};
#endif //PROJ1_MULEXP_H
