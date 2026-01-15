add_rocmlir_dialect_library(MLIRBooleanOps 
    BooleanDialect.cpp

    ADDITIONAL_HEADER_DIRS
    ${MLIR_MAIN_INCLUDE_DIR}/mlir/Boolean

    DEPENDS
    MLIRDialect
    MLIRIR
    MLIRBooleanOpsIncGen
)


target_link_libraries(MLIRBooleanOps
  PUBLIC
  MLIRAffineDialect
  MLIRAMDGPUDialect
  MLIRFuncDialect
  MLIRGPUDialect
  MLIRIR
  MLIRInferIntRangeInterface
  MLIRDialect
  MLIRAnalysis
  MLIRParser
  MLIRROCDLDialect
  MLIRSupport
  MLIRLinalgTransformOps
  )
