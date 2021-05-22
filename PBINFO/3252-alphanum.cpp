void Alphanum(char s[], char cuv[][21], int &n, int num[], int &m){
    int i = 0;
    char a[101][101];
    int j = 0, cnt = 1;
    while(s[i]){
        if(s[i] != ' ')
            a[cnt][j++] = s[i];
        else if(s[i-1] != ' ')
            cnt++, j = 0;
        i++;
    }
    n = 0, m = 0;
    for(int i = 1; i <= cnt; ++i){
        if(a[i][0] >= '0' && a[i][0] <= '9')
        {
            int nu = 0;
            int j = 0;
            while(a[i][j]){
                nu = nu * 10 + a[i][j] - '0';
                j++;
            }
            num[m++] = nu;
        }
        else{
            int j = 0;
            while(a[i][j]){
                cuv[n][j] = a[i][j];
                j++;
            }
            n++;
        }
    }
}