#ifndef BOOL_BASE
#define BOOL_BASE

include "mlir/IR/EnumAttr.td"
include "mlir/IR/OpBase.td"

def Boolean_Dialect : Dialect {
    let name = "boolean";
    let cppNamespace = "::mlir::boolean";

    let summary = "A dialect for boolean algebra";
    let description = [{
        A dialect used to transform boolean algebra
    }];
}

#endif
