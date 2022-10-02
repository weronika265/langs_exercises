def invert(in_filename, out_filename):
    "Odwraca zawartość pliku tekstowego."
    input_file  = open(in_filename, 'r', encoding = 'utf-8')
    output_file = open(out_filename, 'w', encoding = 'utf-8')

    txt = input_file.read()
    output_file.write(txt[::-1])

    input_file.close()
    output_file.close()


# wykonaj funkcję
invert('inverted.txt', 'wiki10.txt');
