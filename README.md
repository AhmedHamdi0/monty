# `The Monty Language`
![Hell Yeah](assets/hell-yeah.gif)

## `Description`
```text
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python).
It depends on a unique stack, with specific instructions to manipulate it.
The goal of this project is to create an interpreter for Monty ByteCodes files.
```

## `Installation`
```shell
$ git clone https://github.com/AhmedHamdi0/monty.git
```
```shell
~/monty$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```
```shell
~/monty$ ./monty bytecodes/<file_name>.m
```

## `Opcodes`
| Opcode | Description                                           |
|--------|--------------------------------------------------------|
| `push` | Pushes an element onto the stack.                      |
| `pall` | Prints all the values on the stack.                    |
| `pint` | Prints the value at the top of the stack.              |
| `pop`  | Removes the top element of the stack.                  |
| `swap` | Swaps the top two elements of the stack.               |
| `add`  | Adds the top two elements of the stack.                |
| `nop`  | Does nothing (comments).                               |
| `sub`  | Subtracts the top element from the second top element. |
| `div`  | Divides the second top element by the top element.     |
| `mul`  | Multiplies the second top element with the top element. |
| `mod`  | Computes the modulo of the second top element.         |
| `pchar`| Prints the char at the top of the stack.               |
| `pstr` | Prints the string starting at the top of the stack.    |
| `rotl` | Rotates the stack to the top.                          |
| `rotr` | Rotates the stack to the bottom.                       |
| `stack`| Sets the format of the data to a stack (LIFO).         |
| `queue`| Sets the format of the data to a queue (FIFO).         |


## `Usage`

- [x] `push <int>` and `pall`
```shell
~/monty$ cat -e bytecodes/00.m
push 1
push 2
push 3
pall
~/monty$ ./monty bytecodes/00.m
3
2
1
julien@ubuntu:~/monty$
```

- [x] `pint`
```shell
~/monty$ cat bytecodes/06.m 
push 1
pint
push 2
pint
push 3
pint
~/monty$ ./monty bytecodes/06.m 
1
2
3
~/monty$ 
```

- [x] `pop`
```shell
~/monty$ cat bytecodes/07.m 
push 1
push 2
push 3
pall
pop
pall
pop
pall
pop
pall
~/monty$ ./monty bytecodes/07.m 
3
2
1
2
1
1
~/monty$ 
```

- [x] `swap`
```shell
~/monty$ cat bytecodes/09.m 
push 1
push 2
push 3
pall
swap
pall
~/monty$ ./monty bytecodes/09.m 
3
2
1
2
3
1
~/monty$ 
```

- [x] `add`
```shell
~/monty$ cat bytecodes/12.m 
push 1
push 2
push 3
pall
add
pall
~/monty$ ./monty bytecodes/12.m 
3
2
1
5
1
~/monty$
```

- [x] `sub`
```shell
~/monty$ cat bytecodes/19.m 
push 1
push 2
push 10
push 3
sub
pall
~/monty$ ./monty bytecodes/19.m 
7
2
1
~/monty$
```

- [x] `pchar`
```shell
~/monty$ cat bytecodes/28.m 
push 72
pchar
~/monty$ ./monty bytecodes/28.m 
H
~/monty$
```

- [x] `pstr`
```shell
~/monty$ cat bytecodes/31.m 
push 1
push 2
push 3
push 4
push 0
push 110
push 0
push 108
push 111
push 111
push 104
push 99
push 83
pstr
~/monty$ ./monty bytecodes/31.m 
School
~/monty$ 
```

- [x] `rotl`
```shell
~/monty$ cat bytecodes/35.m 
push 1
push 2
push 3
push 4
push 5
push 6
push 7
push 8
push 9
push 0
pall
rotl
pall
~/monty$ ./monty bytecodes/35.m 
0
9
8
7
6
5
4
3
2
1
9
8
7
6
5
4
3
2
1
0
~/monty$ 
```

- [x] `stack` and `queue`
```shell
~/monty$ cat bytecodes/47.m
queue
push 1
push 2
push 3
pall
stack
push 4
push 5
push 6
pall
add
pall
queue
push 11111
add
pall
~/monty$ ./monty bytecodes/47.m
1
2
3
6
5
4
1
2
3
11
4
1
2
3
15
1
2
3
11111
~/monty$ 
```

<a href="https://www.linkedin.com/in/ahmedhamdi0/" target="_blank">  <img align="left" alt="Ahmed Hamdi" src="https://img.shields.io/badge/LinkedIn-blue?style=social&logo=linkedin" /> </a>
