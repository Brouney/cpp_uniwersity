#include <iostream>
#include "AccumulatingVisitor.h"
#include "ElData.h"


AccumulatingVisitor::AccumulatingVisitor() : sum(0) {}
    
void AccumulatingVisitor::visit(const IntData* data) { 
    sum += data->getInt();
}

void AccumulatingVisitor::visit(const FloatData* data) { 
    sum += data->getFloat(); 
}

float AccumulatingVisitor::getTotalSum()const { 
    return sum; 
}