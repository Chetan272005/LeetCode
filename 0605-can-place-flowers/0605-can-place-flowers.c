#include <stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n){
    int left=0;
    int mid=1;
    int right=2;
    int count=0;
    if(flowerbedSize == 1 && n == 1 && flowerbed[0] == 0){
        return true;
    }
     if(flowerbedSize == 1 && n == 1 && flowerbed[0] == 1){
        return false;
    }
     if(flowerbedSize == 1 && n > 1){
        return false;
    }
    if(flowerbedSize >= 2){
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
        flowerbed[0] = 1;
        count++;
    }
    }
    while(right < flowerbedSize){
        if(flowerbed[left] == 0 && flowerbed[right] == 0 && flowerbed[mid] ==0){
            count++;
            flowerbed[mid] = 1;
            left++;
            mid++;
            right++;
        }
        else{
            left++;
            mid++;
            right++;
        }
    }
    if(flowerbedSize >= 3){
        if(flowerbed[flowerbedSize-2] == 0 && flowerbed[flowerbedSize-1] == 0){
        flowerbed[flowerbedSize-1] = 1;
        count++;
    }
    }
    if(n <= count){
        return true;
    }
    else{
        return false;
    }
}