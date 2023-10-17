#Sara Rocío Miranda Mateos
#Melany Monroy Domínguez

def load_grammar(filename):
    grammar = {}
    with open(filename, 'r') as file:
        for line in file:
            parts = line.strip().split(' ')
            non_terminal = parts[0]
            productions = ' '.join(parts[1:]).split(' | ')
            grammar[non_terminal] = productions
    return grammar

def generate_strings(grammar, symbol, depth_limit=5):
    if depth_limit <= 0:
        return []  

    results = []
    if symbol not in grammar: 
        return [symbol]

    for prod in grammar[symbol]:
        tokens = prod.split(' ')
        combination_results = ['']

        for token in tokens:
            token_results = generate_strings(grammar, token, depth_limit - 1)
            combination_results = [prev + curr for prev in combination_results for curr in token_results]

        results.extend(combination_results)

    return results


parse_cache = {}  

def parse(grammar, symbol, input_str):
    cache_key = (symbol, input_str)
    if cache_key in parse_cache:
        return parse_cache[cache_key]

    if not input_str and not symbol:
        return True

    if not input_str or not symbol:
        return False

    if symbol not in grammar:
        result = input_str[0] == symbol and parse(grammar, '', input_str[1:])
        parse_cache[cache_key] = result
        return result

    for prod in grammar[symbol]:
        tokens = prod.split(' ')
        print(f"  Analizando '{input_str}' con {symbol} -> {prod}")  
        if parse_sequence(grammar, tokens, input_str):
            parse_cache[cache_key] = True
            return True
    parse_cache[cache_key] = False
    return False


def parse_sequence(grammar, tokens, input_str):
    if not tokens:
        return not input_str

    first, rest = tokens[0], tokens[1:]
    for end in range(1, len(input_str)+1):
        if parse(grammar, first, input_str[:end]) and parse_sequence(grammar, rest, input_str[end:]):
            return True
    return False


def main():
    #filename = "Equipo_2/texto.txt"
    filename = "FuerzaBruta/test3/Equipo_2/texto.txt"
    grammar = load_grammar(filename)
    starting_symbol = list(grammar.keys())[0]
    possible_strings = generate_strings(grammar, starting_symbol)

    valid_strings = [s for s in possible_strings if parse(grammar, starting_symbol, s)]
    
    print("\nCadenas: ", valid_strings)

    user_input = input("\n\tIntroduce una cadena: ")

    if user_input in valid_strings:
        print(f"\t\tLa cadena '{user_input}' es generada por la gramática.")
    else:
        print(f"\t\tLa cadena '{user_input}' no es generada por la gramática.")


main()
