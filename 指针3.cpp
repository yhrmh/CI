#include<stdio.h>
int main()
{
	void average(float (*p)[5],int n);
	float *search(float(*pointer)[5]);
	float *great(float(*point)[5]);
	float score[4][5]={{65,57,70,60,55},{58,87,90,81,55},{90,99,100,98,90},{70,80,90,100,60}};
	float *p,*q;
	int i,j;
	average(score,4);
	
	printf("两门成绩不及格的学生：\n");
	for(i=0;i<4;i++)
	{
		p=search(score+i);
		if(p==*(score+i))
		{
			printf("No.%d score:\n",i+1);
			for(j=0;j<5;j++)
			{
				printf("%5.2f",*(p+j));
				printf("\n");
		    }
		}
	}
	
	printf("平均分高于90或者全部课程在85分以上的学生有：\n");
	for(i=0;i<4;i++)
	{
		q=great(score+i);
		if(q==*(score+i))
		{
			printf("No.%d score\n",i+1);
		}
	}
	return 0;
	
} 
void average(float (*p)[5],int n)
{
	int i,j;
	float sum=0,aver;
	for(i=0;i<n;i++)
	{
		sum=sum+*(*(p+i)+0);
	}
	aver=sum/n;
	printf("%5.2f\n",aver);
}


float *search(float(*pointer)[5])
{
	int i=0,k=0;
	float *pr;
	pr=NULL;
	for(i=0;i<5;i++)
	{
		if(*(*pointer+i)<60) k++;
		if(k>1) pr=*pointer;	
	}
	return(pr);
}



float *great(float(*point)[5])
{
	int i=0,k=0,j;
	float sum=0;
	float *prl;
	prl=NULL;
	for(i=0;i<5;i++)
	{
		if(*(*point+i)<85) k++;
		if(k==0) prl=*point;	
	}
	for(j=0;j<5;j++)
	{
		sum=sum+*(*(point+0)+j);
	}
	return(prl);
	
	
}

