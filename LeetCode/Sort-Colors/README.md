# Sort Colors

Can you solve this real interview question? Sort Colors - Given an array nums with n objects colored red, white, or blue, sort them in-place [https://en.wikipedia.org/wiki/In-place_algorithm] so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:


Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]


Example 2:


Input: nums = [2,0,1]
Output: [0,1,2]


DNF (Dutch National Flag) Problem – Definition:

The Dutch National Flag problem is a classic algorithmic problem where you are given an array containing three distinct types of elements (for example, 0, 1, and 2) and the goal is to sort the array in a single pass such that all elements of the same type are grouped together.

The name comes from the Dutch national flag, which has three colors arranged in order.

The problem is commonly solved using three pointers (low, mid, high) to partition the array into three regions.

In short:

Sort an array of three distinct values in one pass and constant space, grouping identical values together.*/
