# TransformAndConquerAlgorithms
Transform And Conquer Algorithms | Simpler Instance| Presorting C-Language Implementation

ALGORITHM : MODE OF AN ARRAY

//arr : presorted using quick sort.

MODE(arr[0...n-1])
{
	i=0
	modefreq=0
	while(i<n-1) do
		runlength =1
		runvalue = arr[i]
		while(i+runlength<=n-1 and arr[i+runlength]=runvalue)
		{
			runlength = runlength +1
		}
	if(runlength>modefreq)
		modefreq = runlength
	i=i+1;
}

Complexity :[Big-theta](sorting) +[Big-theta](scan)
	   : [Big-theta](nlogn)
	

