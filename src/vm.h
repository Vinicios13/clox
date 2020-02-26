#ifndef clox_vm_hf
#define clox_vm_hf

#include "chunk.h"
#define STACK_MAX 256
#include "value.h"

typedef struct
{
  Chunk *chunk;
  uint8_t *ip;
  Value stack[STACK_MAX];
  Value *stackTop;
} VM;

typedef enum
{
  INTERPRET_OK,
  INTERPRET_COMPILE_ERROR,
  INTERPRET_RUNTIME_ERROR,
} InterpretResult;

void initVM();
void freeVM();
InterpretResult interpret(Chunk *chunk);

void push(Value value);
Value pop();

static InterpretResult run();

#endif
