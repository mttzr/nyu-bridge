void printTriangle(int n){
    

    if(n == 1){
        string output = "*";
        cout<<output<<endl;
    }
    else{
        printTriangle(n-1);
        string output;
        for(int i = 1; i <= n; i++){
            output = output + "*";
        }
        cout<<output<<endl;
    }
    
}

void printOppositeTriangles(int n){
    if(n <= 0){
            return;
    }
    else{
        string  output = "";
        for (int i = 0; i < n; i++){
            output = output +"*";
        }
        output += "\n";
        cout<<output;
        printOppositeTriangles(n-1);
        cout<<output;
    }
}