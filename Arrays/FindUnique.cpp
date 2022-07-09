Question:Find unique

Approach: Take a variable ans and **XOR** it with every Element of array.


CODE:
int findUnique(int *arr, int size)
{
    int ans=0;
    for(int i=0;i<size;i++){
        //Using XOR
        ans=ans^arr[i];
    }
    return ans;
}
