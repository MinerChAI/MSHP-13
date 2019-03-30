def ch_enc(from_file, to_file, from_enc = 'utf-8', to_enc = 'cp866'):
    with open(from_file, encoding=from_enc) as f:
        text = f.read()
    with open(to_file, 'w', encoding=to_enc) as f:
        f.write(text)