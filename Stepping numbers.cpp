vector<int> Solution::stepnum(int A, int B) {
		int l,h;
		l=A,h=B;
			set<int>s1;
		if(l<=0 and h>=0)s1.insert(0);
		queue<int>q1;
		int i,j;
		for(i=1;i<=9;i++)
		{
			queue<int>q1;
			q1.push(i);
			while(!q1.empty())
			{
				int n=q1.front();q1.pop();
				if(n>=l and n<=h)s1.insert(n);
				int r=n%10;
				if(r-1>=0 and n<INT_MAX/10)
				{	
					int d1=n*10+(r-1);
					if(d1<=h)
					q1.push(d1);
				}
				if(r+1<=9 and n<INT_MAX/10)
				{
					int d2=n*10+(r+1);
					if(d2<=h)
					q1.push(d2);
				}
			}
		}
		vector<int>v1(s1.begin(),s1.end());
		return v1;
}
