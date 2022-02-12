/*returns frequency array
*/
vector<int> countingSort(vector<int> arr) {
    map<int,int> number;
    vector<int> result;
    int i=0, size=arr.size(),maximum=0;
    sort(arr.begin(),arr.end());
    for(i=0;i<size;i++){
        if(number.find(arr[i]) != number.end()){    //found in map
            number.find(arr[i])->second++;
        }
        else{
            
            number.insert(pair<int,int>(arr[i],1));
        }
        
        maximum=max(arr[i],maximum);
    }
    
    for(i=0;i<=99;i++){
        
        if(number.find(i) != number.end()){    //found in map
            result.push_back(number.find(i)->second);
        }
        else{
            
            result.push_back(0);
        }
        
    }
    
    return result;    
}