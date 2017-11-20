void insertSort(int a[], int aSize){

	int sorted_count = 0;

	//created unsorted array, of size aSize, copy in all elements from array

	int * unsorted = new int[aSize];
	for (int i = 0; i <= aSize-1; i++){
		unsorted[i] = a[i];

	}

	//create sorted array of size 1, move over first element from unsorted array

	int * sorted = new int[1];
	
	sorted[0] = unsorted[0];
	unsorted = unsorted + 1;
	sorted_count ++;

	//copy over each element of unsorted array, sorting it into sorted array.
	
	for(int i = 1; i <= aSize - 1; i++){
		int to_be_added = unsorted[i];
		bool added = false;
		
		int * sorted_temp = new int[sorted_count + 1];
		for (i = 0; i <= sorted_count; i++){
			if(sorted[i] <= to_be_added){
				sorted_temp[i] = sorted[i];
			}
			else if((sorted[i] > to_be_added) && (added == false)){
				sorted_temp[i] = to_be_added;
				added == true;
				
			}
			else{
				sorted_temp[i] = sorted[i];
			}
				
		}
		delete[] sorted;
		sorted = sorted_temp;
		sorted_count++;
		
	}


}