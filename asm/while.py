import disassembler

def main():
    f = 8
    i = 1
    j = 1
    n = 1
    while n < f:
        n   = n + 1
        tmp = j
        j   = j+i
        i = tmp
    print("Fib(" + str(n) + ") is", i)

disassembler.disassemble(main)
