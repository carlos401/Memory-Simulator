//
// Created by carlos on 25/10/17.
//

#ifndef TP4_OPER_PROGRAM_H
#define TP4_OPER_PROGRAM_H

#include <vector>
#include "MemManager.h"
#include "Process.h"

using namespace std;

class Program {

public:


private:
    MemManager manager;
    vector<Process> threads;
};


#endif //TP4_OPER_PROGRAM_H
