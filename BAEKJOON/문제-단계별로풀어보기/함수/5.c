long long sum(int *a, int n){ //15596
	long long ans = 0;
    for(int i=0;i<n;i++)
        ans+=a[i];
	return ans;
}



int selfnumber(int n) //4673
{
    int tmp = n;
    int sum = n;
    for (int i = 0; i <= 4; i++)
    {
        if (tmp == 0)
            break;
        sum += tmp % 10;
        tmp = tmp / 10;
    }
    return sum;
}
int main()
{
    int n[10001];
    int tmp;
    for (int i = 1; i <= 10000; i++)
        n[i] = 1;

    for(int i=1;i<=10000;i++)
    {
        tmp = i;
        if (n[tmp] == 0) continue;

        while (1) {
            tmp = selfnumber(tmp);
            if (tmp > 10000) break;
            if (n[tmp] == 0) break;

            n[tmp] = 0;
        }
        if (n[i] != 0)
            printf("%d\n", i);
    }
  return 0;
}



int hansu(int n) //1065
{
    int save[4] = {0};
    int i,compare1,compare2;

    int tmp = n;
    for(i=0;i<4;i++)
    {
        save[i] = tmp % 10;
        tmp = tmp / 10;
        if (tmp==0)
            break; 
    }

    if (n < 10)
        return 1;
    else if (n < 100)
        return 1;
    else if (n < 1000)
    {
        compare1 = save[1] - save[0];
        compare2 = save[2] - save[1];
        if (compare1 == compare2)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}
int main()
{
    int n,count=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (hansu(n - i) == 1)
            count++;
    }
    printf("%d\n", count);
    return 0;
}
