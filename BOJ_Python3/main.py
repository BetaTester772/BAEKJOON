a, b, v = map(int,input().split())
days_required = round((v-b)/(a-b))
print(days_required + 1 if (v-b)%(a-b) !=0 else days_required)