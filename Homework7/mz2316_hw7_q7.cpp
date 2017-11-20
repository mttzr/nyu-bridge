int findChange(int arr01[], int arr01Size){
    
    bool found = false;
    int low = 0;
    int high = arr01Size - 1;
    int mid;
    int ind = 0;
    int val = 1;
    
    while((found == false) && (low <= high)){
        
        mid = (low+high)/2;
        
        if(arr01[low] == val){
            ind = low;
            found = true;
        }
        else if (arr01[mid] == val){
            high = mid;
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