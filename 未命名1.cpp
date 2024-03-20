#include<stdio.h>
	void selectSort(int T[],int n){
		int i=0;
		int j=i+1;
		while(j<n){
			int min=i;
			int j=i+1
			while(j<n){
		if(T[min]>T[j])
			min=j;
			j++;	}
		}
		int temp=T[i];
		T[i]=T[min];
		T[min=temp];
		i++;
	}
}
void selectSortfor(int T[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(T[min]>T[j])
			min=j;
		}
		int temp=T[i];
	}
}
