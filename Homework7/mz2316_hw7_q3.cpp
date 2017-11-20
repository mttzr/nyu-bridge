int minInArray1(int arr[], int arrSize){
    
    int min_value;
    
    if(arrSize == 1){
        min_value = arr[arrSize-1];
    }
    else{
        min_value = minInArray1(arr, arrSize-1);
        if(arr[arrSize-1] < min_value){
            min_value = arr[arrSize-1];
        }
    }
    return min_value;
}

int minInArray2(int arr[], int low, int high){
    
    int min_value;
    
    if(low == high){
        min_value = arr[high];
    }
    else{
        min_value = minInArray2(arr, low, high-1);
        if(arr[high] < min_value){
            min_value = arr[high];
        }
    }
    return min_value;
}