// top level files 
#include "mlir/Bytecode/BytecodeOpInterface.h"
#include "mlir/IR/Dialect.h"
#include "mlir/IR/SymbolTable.h"
#include "mlir/Interfaces/CallInterfaces.h"
#include "mlir/Interfaces/FunctionInterfaces.h"
#include "mlir/Interfaces/SideEffectInterfaces.h"
#include "mlir/Support/TypeID.h"
#include "mlir/IR/OperationSupport.h"

#define GET_OP_CLASSES
#include "mlir/Dialect/Boolean/IR/BooleanOps.h.inc"
#include "mlir/IR/Dialect.h"
#include "mlir/Dialect/Boolean/IR/BooleanOpsDialect.h.inc"


using namespace mlir;
using namespace mlir::boolean; 

// ================ Dialect Settings ================
// Boolean Dialect 
void BooleanDialect::initialize(){
    addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/Boolean/IR/BooleanOps.cpp.inc"
    >();
}

// Tablegened definition
#define GET_OP_CLASSES
#include "mlir/Dialect/Boolean/IR/BooleanOps.cpp.inc"
#include "mlir/Dialect/Boolean/IR/BooleanOpsDialect.cpp.inc"
