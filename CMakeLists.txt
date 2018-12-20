cmake_minimum_required(VERSION 3.13)
project(proj1)

set(CMAKE_CXX_STANDARD 14)

add_executable(proj1 main.cpp IExpression.h UnaryExpression.h BinaryExpression.h AddExp.h MulExp.h DivExp.h MinusExp.h Num.h Equal.h Command.h)