//
//  main.cpp
//  88. Merge Sorted Array
//
//  Created by chenyufeng on 10/5/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    vector<int>::iterator nums1Vec = nums1.begin();
    for (long i = 0; i < nums2.size(); i++)
    {
        nums1Vec = nums1.begin();
        for (int j = 0; j < m + n; j++,nums1Vec++)
        {
            if (nums2[i] < nums1[j])
            {
                nums1.insert(nums1Vec, nums2[i]);
                break;
            }

            // 插入到最后一位
            if (j == m + n - 1)
            {
                nums1.insert(nums1Vec, nums2[i]);
            }
        }
    }
    cout << "ok";
}

int main(int argc, const char * argv[])
{

    int arr1[] = {1,3};
    int arr2[] = {2,4};
    vector<int>vv1(arr1,arr1+sizeof(arr1)/sizeof(int));
    vector<int>vv2(arr2,arr2+sizeof(arr2)/sizeof(int));

    merge(vv1,2,vv2,2);




    return 0;
}
