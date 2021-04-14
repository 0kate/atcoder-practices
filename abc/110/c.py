from string import ascii_lowercase

s = input()
t = input()

s_count_table = {}
t_count_table = {}
for i in range(len(s)):
    if s[i] not in s_count_table:
        s_count_table[s[i]] = 0
    if t[i] not in t_count_table:
        t_count_table[t[i]] = 0
    s_count_table[s[i]] += 1
    t_count_table[t[i]] += 1

s_summary_table = {}
for c in ascii_lowercase:
    if c not in s_count_table:
        continue
    if s_count_table[c] not in s_summary_table:
        s_summary_table[s_count_table[c]] = 0
    s_summary_table[s_count_table[c]] += 1

t_summary_table = {}
for c in ascii_lowercase:
    if c not in t_count_table:
        continue
    if t_count_table[c] not in t_summary_table:
        t_summary_table[t_count_table[c]] = 0
    t_summary_table[t_count_table[c]] += 1

transformable = True
for key in s_summary_table.keys():
    if key not in t_summary_table or s_summary_table[key] != t_summary_table[key]:
        transformable = False
        break

print('Yes' if transformable else 'No')


    
