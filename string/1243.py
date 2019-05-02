while True:
    try:
        sentence = input().split()

        word = 0
        while word < len(sentence):

            if any(ch.isdigit() for ch in sentence[word]):
                del sentence[word]
                word -= 1
            elif sentence[word].count('.') > 1:
                del sentence[word]
                word -= 1

            word += 1

        length = 0
        for word in sentence:
            if (word.count('.') == 0) or (word.index('.') == len(word) - 1):
                length += len(word)
                if '.' in word:
                    length -= 1

        if len(sentence):
            length = length//len(sentence)

        if length <= 3:
            points = 250
        elif length <= 5:
            points = 500
        else:
            points = 1000

        print(points)

    except EOFError:
        break