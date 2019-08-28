import disassembler
import sys

def main():
    x = 10
    def f(x):
        def g():
            return x
        return g
    print(f(3)())

if len(sys.argv) == 1:
    main()
else:
    disassembler.disassemble(main)
