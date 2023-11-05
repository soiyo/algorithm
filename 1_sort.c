#include <stdio.h>

int main(void){
	int i, j, min, index, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9}; //10개의 원소
	for (i = 0; i < 10; i++) { // 10번 반복해 탐색
		min = 9999; // 항상 최솟값을 넣어야 하기 때문에 아주 큰 값을 넣어놓음. (모든 원소보다 큰 무작위 숫자)
		for(j = i; j < 10; j++){ 
			if(min > array[j]) { // 현재 탐색중인 원소가 현재의 최솟값보다 작다면
				min = array[j]; // 그 원소를 min에 넣어준다
				index = j; // 해당 위치 값을 넣어준다
				}
		}
	  // 한 번 탐색이 끝났을 때 가장 작은 값이 선택된 상태라면 그 값을 맨 앞으로 보내줘야 하기때문에 
		// 스와핑 : 두개의 원소값을 바꿔준다
		temp = array[i]; // temp에 가장 앞의 값을 넣어준다
		array[i] = array[index]; // 가장 앞의 값으로 최솟값을 넣어준다.
		array[index] = temp; // 최솟값이 있던 위치에 temp를 넣어준다.
	}
	// 정렬 완료 후 정렬된 값을 출력한다.
	for(i = 0; i < 10; i++){
		printf("%d ", array[i]);
	}
	return 0;
}