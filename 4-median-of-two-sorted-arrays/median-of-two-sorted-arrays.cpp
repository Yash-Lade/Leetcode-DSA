class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n1 = a.size(), n2 = b.size();
	int n = (n1 + n2);
	int idx2 = n/2;
	int idx1 = idx2 - 1;
	int idx1el = -1, idx2el = -1;
	int i = 0, j = 0;
	int cnt = 0;
	while(i < n1 && j < n2){

		if(a[i] <= b[j]){

			if(cnt == idx1) idx1el = a[i];
			if(cnt == idx2) idx2el = a[i];
			cnt++;
			i++;
		}
		else{
			if(cnt == idx1) idx1el = b[j];
			if(cnt == idx2) idx2el = b[j];
			cnt++;
			j++;
		}
	}

	while(i < n1){
		if(cnt == idx1) idx1el = a[i];
		if(cnt == idx2) idx2el = a[i];
		i++;
		cnt++;
	}

	while(j < n2){
		if(cnt == idx1) idx1el = b[j];
		if(cnt == idx2) idx2el = b[j];
		cnt++;
		j++;
	}

	if(n%2 == 1) 
	return idx2el;

	return double((double)(idx1el + idx2el)/ 2.0);
    }
};