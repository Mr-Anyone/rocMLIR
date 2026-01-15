add_subdirectory(IR)

add_rocmlir_tool(boolean-test
    PARTIAL_SOURCES_INTENDED

    main.cpp
    DEPENDS
    MLIRDialect
    MLIRIR
    MLIRBooleanOps
)

# FIXME: there are a lot of library we can clean up on
target_link_libraries(boolean-test
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
  MLIRBooleanOps
)
