void Trim(char s[])
{
	int i = 0;
	int ok = false;
	int poz1, poz2;
	while (s[i] != '\0')
	{
		if (s[i] != ' ' && ok == false)
			ok = true, poz1 = i;
		if (s[i] != ' ')
			poz2 = i;
		i++;
	}
	for (int i = poz1; i <= poz2; ++i)
		s[i - poz1] = s[i];
	s[poz2 - poz1 + 1] = '\0';
}