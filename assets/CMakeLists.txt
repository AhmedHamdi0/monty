cmake_minimum_required(VERSION 3.26)
project(monty C)

set(CMAKE_C_STANDARD 11)

add_executable(monty ../main.c
        ../monty.h
        ../utils/validate_arguments.c
        ../utils/initialize_arguments.c
        ../utils/malloc_failed.c
        ../utils/is_number.c
        ../parser/get_stream.c
        ../parser/tokenize_line.c
        ../parser/close_stream.c
        ../executor/get_instruction.c
        ../executor/run_instruction.c
        ../deallocators/free_tokens.c
        ../deallocators/free_arguments.c
        ../deallocators/free_stack.c
        ../deallocators/free_head.c
        ../deallocators/free_all_args.c
        ../opcodes/push.c
        ../opcodes/pall.c
        ../opcodes/pint.c
        ../opcodes/pop.c
        ../opcodes/swap.c
        ../opcodes/add.c
        ../opcodes/sub.c
        ../opcodes/mul.c
        ../opcodes/div.c
        ../opcodes/nop.c
        ../opcodes/mod.c
        ../opcodes/pchar.c
        ../opcodes/pstr.c
        ../opcodes/rotl.c
        ../opcodes/rotr.c
        ../opcodes/stack.c
        ../opcodes/queue.c)
