import argparse
import sys

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--x", type=float, default=1.0, help="What is the first numer ?")
    parser.add_argument("--y", type=float, default=1.0, help="What is the second numer ?")
    parser.add_argument("--operation", type=str, default="add", help="What operation to do ?")
    
    args = parser.parse_args()
    sys.stdout.write(str(calc(args)))
    print()
    
def calc(args):
    if args.operation == "add":
        return args.x + args.y
    elif args.operation == "sub":
        return args.x - args.y
    elif args.operation == "div":
        return args.x / args.y
    elif args.operation == "mult":
        return args.x * args.y

if __name__ == "__main__":
    main() 
        
