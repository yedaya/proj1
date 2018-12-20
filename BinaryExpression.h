//
// Created by yedaya on 12/17/18.
//

#ifndef PROJ1_BINARYEXPRESSION_H
#define PROJ1_BINARYEXPRESSION_H

#include "IExpression.h"
class BinaryExpression: IExpression{
protected:
    IExpression *left;
    IExpression *right;

public:
    virtual double calculate()=0;
    BinaryExpression(IExpression*first, IExpression*second): left(first), right(second){};
};

#endif //PROJ1_BINARYEXPRESSION_H
