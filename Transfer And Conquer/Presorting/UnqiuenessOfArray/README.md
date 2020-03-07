# TransformAndConquerAlgorithms
Transform And Conquer Algorithms | Simpler Instance| Presorting C-Language Implementation

ALGORITHM : UNIQUENESS OF AN ARRAY

//arr : presorted using quick sort.

	UNIQUENESS(arr[0...n-1])
	{
		for i =0 upto n-2 do
			if(arr[i]== arr[i+1])
				return false
		end for
		return true;
	}

Complexity :Big-theta (sorting) +Big-theta(Uniqueness)

	   : [Big-theta](nlogn)
	

