#include "PrintingVisitor.h" 
#include "ElData.h"
#include <iostream>

void PrintingVisitor::visit(const IntData* data) { 
    std::cout << " " << data->getInt(); 
}

void PrintingVisitor::visit(const FloatData* data) { 
    std::cout  << " " << data->getFloat(); 
}