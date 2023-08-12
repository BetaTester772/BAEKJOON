words = []
candidates = []

N = int(input())
for _ in range(N):
    words.append(input())

M = int(input())
for _ in range(M):
    candidates.append(input())


def replace_question(target, word_list):
    result = []
    for word in word_list:
        if word == '?':
            result.append(target)
        else:
            result.append(word)
    return result


def check_validity(word_list):
    used_words = set()
    for i in range(len(word_list) - 1):
        if word_list[i][-1] != word_list[i + 1][0]:
            return False
        if word_list[i] in used_words:
            return False
        used_words.add(word_list[i])
    if word_list[-1] in used_words:
        return False
    return True


for candidates in candidates:
    replaced = replace_question(candidates, words)
    print(replaced)
    if check_validity(replaced):
        print(candidates)
        break
