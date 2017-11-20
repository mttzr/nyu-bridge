int binarySearch( int arr[], int arrSize, int val){
    
    bool found = false;
    int low = 0;
    int high = arrSize - 1;
    int mid;
    int ind = 0;
    
    while((found == false) && (low <= high)){
        
        mid = (low+high)/2;
        if(arr[mid] == val){
            ind = mid;
            found = true;
        }
        else if (arr[mid] > val){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }	
    }
    if (found == true){
        return ind;
    }
    else{	
        return - 1;
    }
    
}