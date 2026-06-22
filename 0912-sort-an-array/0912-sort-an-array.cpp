class Solution {
public:
    void megre(vector<int> &arr,int low ,int mid, int high){
    vector <int> temp;
    int left=low;
    int right=mid+1;
    while (left<=mid&&right<=high)
    {
        if (arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <=high; i++)
    {
        arr[i]=temp[i-low];
    }
}

void mergesort(vector<int> &arr,int low,int high){
    
    if (low<high)
    {
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        megre(arr,low,mid,high);
    }
    
}
vector<int> sortArray(vector <int> &arr){
    int low =0;
    int high=arr.size()-1;
    mergesort(arr,low,high);
    return arr;
}
};