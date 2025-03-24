#include <climits>
#include <iostream>

int ssum(int arr[], int n){
    int max_sum = arr[0];
    int cur_max_sum = arr[0];

    for(int i = 1; i < n; i++){
        cur_max_sum = std::max(arr[i], cur_max_sum + arr[i]);

        max_sum = std::max(max_sum, cur_max_sum);
    }

    if(max_sum < 0) return 0;
    return max_sum;
}
