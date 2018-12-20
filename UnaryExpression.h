//
// Created by yedaya on 12/17/18.
//

#ifndef PROJ1_UNARYEXPRESSION_H
#define PROJ1_UNARYEXPRESSION_H

#include "IExpression.h"

class UnaryExpression: IExpression{
public:
    virtual double calculate()=0;
};

#endif //PROJ1_UNARYEXPRESSION_H
