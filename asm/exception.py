import disassembler
import sys

# Without exception handling.
# def main():
#     x = float(input("Enter a number: "))
#     y = float(input("Enter a number: "))
#     z = x/y
#     print(x, "/", y, "=", z)

# With exception handling.
def main():
    try:
        x = float(input("Enter a number: "))
        y = float(input("Enter a number: "))
        z = x / y
        print(x, "/", y, "=", z)
    except Exception as ex:
        print(ex)

if len(sys.argv) == 1:
    main()
else:
    disassembler.disassemble(main)
