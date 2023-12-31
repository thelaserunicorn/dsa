int secondLargest(vector<int> &a, int n){
    int largest = a[0];
    int second_largest = -1;
    for (int i=1; i<n; i++){
        if(a[i]>largest){
            second_largest = largest;
            largest = a[i];
        }else if(a[i] < largest && a[i]>second_largest){
            second_largest = a[i];
        }
    }
    return second_largest;
}

int secondSmallest(vector<int> &a, int n){
    int smallest = a[0];
    int second_smallest = INT_MAX;

    for(int i = 1; i<n; i++){
        if(a[i]<smallest){
            second_smallest = smallest;
            smallest = a[i];
        }else if(a[i] != smallest && a[i] < second_smallest){
            second_smallest = a[i];
        }
    }
    return second_smallest;
}




vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int slargest = secondLargest(a, n);
    int ssmallest = secondSmallest(a, n);
    return { slargest, ssmallest };
}

