int linearSearch(int array[], int target, int size){
    for(int i = 0; i < size; i++){
        if(array[i] == target){
            return i;
        }
    }
    return -1;
}