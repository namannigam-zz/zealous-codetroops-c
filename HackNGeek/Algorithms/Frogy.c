int arr[1000];
void print_array(int max)
{
	int i;
	for(i=0;i<=max;i++)
        {
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void hop_path(int n, int i, int cur)
{
	if(cur==n)
        {
		arr[i]=cur;
		printf("\n%d",arr[i]);
		return;
	}
	else
    if(cur>n)
    {
		return;
    }
	arr[i] = cur;
	hop_path(n,i+1,cur+1);
	hop_path(n,i+1,cur+2);
}
