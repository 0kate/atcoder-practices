def main():
    s = input()

    i = 0
    compressed = ''
    while i < len(s):
        c = s[i]
        cnt = 1
        j = i + 1
        while j < len(s) and s[j] == c:
            cnt += 1
            j += 1
        i = j
        compressed += c + str(cnt)

    print(compressed)


if __name__ == '__main__':
    main()
