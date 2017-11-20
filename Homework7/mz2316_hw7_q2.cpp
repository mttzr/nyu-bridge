int sumOfSquares(int arr[], int arrSize){
    
    int res;
   
    if(arrSize == 1){
        return (arr[arrSize-1]*arr[arrSize-1]);
    }
    else{
        res = sumOfSquares(arr, arrSize-1);
        res = res + (arr[arrSize-1]*arr[arrSize-1]);
        return res;

    }
   
}

bool isSorted(int arr[], int arrSize){
    
    bool result;
    
    if(arrSize == 1){
        return true;
    }
    
    else{
        result = isSorted(arr, arrSize-1);
        if(result == false){
            return false;
        }
        else{
            if(arr[arrSize-2] > arr[arrSize-1]){
                result = false;
            }
            else{
                result = true;
            }
        }

    }
    return result;
}