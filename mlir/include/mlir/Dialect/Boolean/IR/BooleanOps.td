#ifndef BOOL_OPS
#define BOOL_OPS

include "mlir/IR/Traits.td"
include "mlir/IR/OpBase.td"
include "mlir/Dialect/Boolean/IR/BooleanBase.td"

class Boolean_Op<string mnemonic, list<Trait> traits = []> :
    Op<Boolean_Dialect, mnemonic, traits> {
}

// define some boolean operations 
def Boolean_AndOp : Boolean_Op<"and", []> {}
def Boolean_OrOp : Boolean_Op<"or", []> {}
def Boolean_XorOp : Boolean_Op<"xor", []> {}

// define some boolean operations 

#endif
