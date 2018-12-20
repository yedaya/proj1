//
// Created by yedaya on 12/17/18.
//

#ifndef PROJ1_DIVEXP_H
#define PROJ1_DIVEXP_H

#include "IExpression.h"
#include "BinaryExpression.h"

class DivExp: BinaryExpression{
    double calculate() override {
        if(right->calculate()==0){
            throw "Divid by zero - error!";
        }
        return (left->calculate()/right->calculate())
    }



};

#endif //PROJ1_DIVEXP_H
