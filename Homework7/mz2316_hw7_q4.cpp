int lowestCost(int arr[], int arrSize){
    
    int sum;
    int next;
    int jump;
    int index;
    
    if(arrSize == 1){
        index = arrSize-1;
        sum = arr[arrSize-1];
    }
    else{
        sum = sum + lowestCost(arr+1, arrSize-1);
        if(arrSize < 3){
            return sum;
        }
        else{
            jump = arr[0];
            next = arr[1];
            if(jump < next){
                sum = sum + jump;	
            }
            else{
                sum = sum + next;
            } 
        }
        
        
    }
