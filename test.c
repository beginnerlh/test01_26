//给定一个整数数组，判断是否存在重复元素。
//
//如果任何值在数组中出现至少两次，函数返回 true。如果数组中每个元素都不相同，则返回 false。
//
//示例 1:
//
//输入 : [1, 2, 3, 1]
//输出 : true
//	 示例 2 :
//
// 输入 : [1, 2, 3, 4]
//  输出 : false
//	   示例 3 :
//
//   输入 : [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
//	输出 : true


//给定一个整数数组和一个整数 k，判断数组中是否存在两个不同的索引 i 和 j，使得 nums[i] = nums[j]，并且 i 和 j 的差的绝对值最大为 k。
//
//示例 1:
//
//输入 : nums = [1, 2, 3, 1], k = 3
//输出 : true
//	 示例 2 :
//
// 输入 : nums = [1, 0, 1, 1], k = 1
//  输出 : true
//	   示例 3 :
//
//   输入 : nums = [1, 2, 3, 1, 2, 3], k = 2
//	输出 : false
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool containsDuplicate(int* nums, int numsSize) {
	int count = 0;

	for (int i = 0; i<numsSize - 1; i++)
	{
		for (int j = i + 1; j<numsSize; j++)
		{

			if (nums[i] == nums[j])
			{
				return true;
			}
		}
	}
	return false;
}
bool containsNearbyDuplicate(int* nums, int numsSize, int k) {

	int count = 0;
	for (int i = 0; i<numsSize - 1; i++)
	{
		for (int j = i + 1; j<numsSize; j++)
		{

			if (nums[i] == nums[j] && (j - i <= k))
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{
	int num[] = { 1, 2, 3, 1 };
	int len = sizeof(num) / sizeof(int);

	int a =containsDuplicate(num, len);
	//int a=containsNearbyDuplicate(num, len,3);
	printf("%d\n", a);
	system("pause");
	return 0;
}
