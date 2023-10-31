# Sara Rocio Miranda Mateos 0244643
# Melany Monroy Dominguez 0244654

input_file_path = 'Sara_Miranda/texto.txt'  

#Aqui se abre el archivo de texto y se lee
with open(input_file_path, 'r') as file:
    inputgrammar = file.read()

#Aqui se separa el archivo de texto en lineas
fgrammar = []
for line in inputgrammar.strip().split('\n'):
    lhs, rhs = line.split('   ')
    
    formatted_rhs = ' '.join(production.replace(' ', '') for production in rhs.split(' | '))
    
    linefromfile = f"{lhs} {formatted_rhs}"
    fgrammar.append(linefromfile)

output = '\n'.join(fgrammar)

lines = output.strip().split('\n')

#Aqui se inicializan las variables
NT = set()  
RHS = {}    
FIRST = {}  

#Aqui se separa la gramatica en sus componentes
for line in lines:
    symbols = line.split(' ')
    
    nts = symbols[0]
    NT.add(nts)
    
    RHS[nts] = symbols[1:]
    
    FIRST[nts] = symbols[1] if len(symbols) > 1 else None
    
#Aqui se saca el maximo 
maximum = {nts: len(rhs_options) for nts, rhs_options in RHS.items()}

print("NT = ", NT)
print("RHS = ", RHS)
print("FIRST = ", FIRST)
print("MAX = ", maximum)

class Parser:
    def __init__(self, input_str):
        self.input = input_str
        self.index = 0

    def E(self):
        save = self.index
        if self.index < len(self.input) and self.input[self.index] == 'a':
            self.index += 1
            if self.E(): return True

        self.index = save
        if self.index < len(self.input) and self.input[self.index] == 'b':
            self.index += 1
            if self.E(): return True

        self.index = save
        if self.index < len(self.input) and self.input[self.index] == 'c':
            self.index += 1
            if self.S(): return True

        self.index = save
        return False

    def S(self):
        save = self.index
        if self.index < len(self.input) and self.input[self.index] == 'e':
            self.index += 1
            if self.S(): return True

        self.index = save
        if self.index < len(self.input) and self.input[self.index] == 'b':
            self.index += 1
            if self.B(): return True

        self.index = save
        if self.index < len(self.input) and self.input[self.index] == 'c':
            self.index += 1
            if self.B(): return True

        self.index = save
        return False

    def B(self):
        save = self.index
        if self.index < len(self.input) and self.input[self.index] == 'b':
            self.index += 1
            if self.E(): return True

        self.index = save
        if self.index < len(self.input) and self.input[self.index] == 'c':
            self.index += 1
            if self.E(): return True

        self.index = save
        if self.index < len(self.input) and (self.input[self.index] in ['c', 'g', 'h']):
            self.index += 1
            return True

        self.index = save
        return False

    def parse(self):
        return self.E() and self.index == len(self.input)


if __name__ == "__main__":
    input_str = input("Enter the string to be checked: ")

    parser = Parser(input_str)
    if parser.parse():
        print("SUCCESSFUL PARSE")
    else:
        print("UNSUCCESSFUL PARSE")
