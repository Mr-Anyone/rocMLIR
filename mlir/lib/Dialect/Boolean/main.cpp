#include <iostream> 
// boolean MLIR
#include "mlir/IR/Dialect.h"
#include "mlir/Dialect/Boolean/IR/BooleanOpsDialect.h.inc"
#include "mlir/Dialect/Boolean/IR/BooleanOps.h.inc"
#include "mlir/IR/MLIRContext.h"

int main(){
    // creating a MLIR context and loading boolean dialect
    mlir::MLIRContext context;
    context.loadDialect<mlir::boolean::BooleanDialect>();
    std::cout << "I have loaded BooleanDialect" << std::endl;

    std::cout << "Hello World?" << std::endl;
    return 0;
}
