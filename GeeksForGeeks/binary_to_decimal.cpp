int binary_to_decimal(char str[])
{
		    // Code here.
		    int ans = 0;
	int n = strlen(str);
	for(int i = 0; i < n; i++)
	// Calculating 2^i * s[i]
	ans += (1 << (n - i -1)) * (str[i] - '0');
	return ans;
}
