void ReverseWords(char s[]) {
	int i = 0, j = 0, cnt = 0;
	while (s[i]) {
		if (s[i] == ' ') {
			j = cnt;
			cnt = i - 1;
			int cpy = cnt;
			while (j < cnt)
				swap(s[j], s[cnt]), cnt--, j++;
			cnt = cpy + 2;
		}
		i++;
	}
	j = cnt;
	cnt = i - 1;
	int cpy = cnt;
	while (j < cnt)
		swap(s[j], s[cnt]), cnt--, j++;
	cnt = cpy + 2;
	int a = 0, b = i - 1;
	while (a < b)
		swap(s[a], s[b]), a++, b--;
}