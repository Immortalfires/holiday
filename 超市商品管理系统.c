#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
//本系统为 超市商品管理系统 
struct Commodity 
{
	int iId;
	char cName[100];
	int iNumber;
	char cProduce[64];
	float fPrice;
};
void Add();           
void Search();
void Delete();
void Modify();
void Browse();
void colorsetting();
void menu()
{
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t|--------------------Market--------------------|\n");     
	printf("\t\t|\t 0. Exit System                        |\n");
	printf("\t\t|\t 1. Add Commodity Information          |\n");      //添加商品信息 
	printf("\t\t|\t 2. Search Commodity Information       |\n");   //搜索商品信息 
	printf("\t\t|\t 3. Delerte Commodity Information      |\n");  //删除商品信息 
	printf("\t\t|\t 4. Modify Commodity Information       |\n");   //修改商品信息 
	printf("\t\t|\t 5. Browse Commodity Information       |\n");   //浏览商品信息
	printf("\t\t|\t 6. change the color                   |\n");   //更改系统颜色 
	printf("\t\t|----------------------------------------------|\n\n");
	printf("\t\t\t choose (0-6):"); 
}

int main()
{
	int n;
	menu();
	scanf("%d",&n);
	while (n)
	{
		switch(n)
		{
			case 1:
				Add();
				break;
			case 2:
				Search();
				break;
			case 3:
				Delete();
				break;
			case 4:
				Modify();
				break;
			case 5:
				Browse();
				break;
			case 6:
				colorsetting();
				break;
			default:
				break;
		}
		menu();
		scanf("%d",&n);
	}
}

void colorsetting()
{
	int a;
	char choice,c;
	printf("\n\n\t\t选择以下方案\n");
	printf("\n\n\t\t1.------------------ 红底黑字\n");
	printf("\t\t2.------------------ 白底黑字\n");
	printf("\t\t3.------------------ 黑底红字\n");
	printf("\t\t4.------------------ 绿底蓝字\n");
	printf("\t\t5.------------------ 黄底紫字\n");
	printf("\t\t6.------------------ 系统默认\n");
	printf("\n\n\t\t请选择您喜欢的颜色方案：");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			system("color 40");
			break;
		case 2:
			system("color 70");
			break;
		case 3:
			system("color 04");
			break;
		case 4:
			system("color 21");
			break;
		case 5:
			system("color 65");
			break;
		case 6:
			system("color 07");
			break;
		default:
			printf("\t\t输入无效，请重新输入\n");
			getch();
			colorsetting();
	}
	
	printf("\t\t对所选颜色还满意吗，（'y' or 'n')");
	scanf("%c",&c);
	scanf("%c",&choice);
	if(choice=='y'|| choice=='Y')
	{
		system("cls");
		menu();
	}
	else
	{
		colorsetting();
	}
}

int Panduan(int ID)
{
	FILE *fp;
	struct Commodity i;
	fp=fopen("Commodity","r");
	if (fp==NULL)
	{
		printf("\t\tcan not open");
		return;
	}
	fread(&i,sizeof(i),1,fp);
	while(!feof(fp))
	{
		if(i.iId==ID)
		{
			fclose(fp);
			return 1;
			break;
		}
		fread(&i,sizeof(struct Commodity),1,fp);
	}
	fclose(fp);
	return 0;
	}
void Add()
{
	int m=0;
	FILE *fp;
	struct Commodity i;
	char choice,a;
	fp=fopen("Commodity","ab+");
	if(fp==NULL)
	{
		printf("\t\tcan not open");
		return;
	}
	printf("\t\t----请输入要入库的商品信息----\n");
	printf("\t\t请输入商品编号:");
	scanf("%d",&i.iId);
	while((Panduan(i.iId))==1)
	{
		printf("\t\t此编号已存在，请重新输入\n\t\t");
		scanf("%d",&i.iId);
	}
	printf("\t\t请输入商品名称:");
	scanf("%s",&i.cName);
	printf("\t\t请输入商品生产地:");
	scanf("%s",&i.cProduce);
	printf("\t\t请输入商品数量:");
	scanf("%d",&i.iNumber);
	printf("\t\t请输入商品单价:");
	scanf("%f",&i.fPrice);
	fwrite(&i,sizeof(struct Commodity),1,fp);
	fclose(fp);
	printf("\t\t编号为%d的商品成功入库\n",i.iId);
	printf("\t\t是否需要继续录入商品信息（Y/N)");
	scanf("%c",&a);
	scanf("%c",&choice);
	if(choice=='y' || choice=='Y')
	{
		Add();
	}
	else
	{
		system("cls");
	
		menu();
	}
}
void Search()
{
	FILE *fp;
	int ifID;
	char a,choice;
	struct Commodity i;
	fp=fopen("Commodity","r");
	if(fp==NULL)
	{
		printf("\t\tcan not open");
		return;
	}
	printf("\t\t请输入想要查找商品的编号");
	scanf("%d",&ifID);
	fread(&i,sizeof(struct Commodity),1,fp);
	while(!feof(fp))
	{
		if(i.iId==ifID)
		{
			printf("\t\t----------商品信息----------\n");
			printf("\t\t商品编号：%d\n",i.iId);
			printf("\t\t商品名称：%s\n",i.cName);
			printf("\t\t商品生产地：%s\n",i.cProduce);
			printf("\t\t商品单价：%f\n",i.fPrice);
			printf("\t\t商品数量：%d\n",i.iNumber);
			printf("\t\t您希望继续查询吗（Y/N)");
			scanf("%c",&a);
			scanf("%c",&choice);
			if(choice=='y' || choice=='Y')
			{
				Search();
			}
			else
			{
				system("cls");
				menu();
			}
		}
		fread(&i,sizeof(struct Commodity),1,fp);
	}
	fclose(fp);
	printf("\t\t输入的编号不存在，请重新输入\n");
	Search();
}
void Delete()
{
	struct Commodity i[1000];
	struct Commodity iTemp;
	int Delid,iIndex=0,j=0;
	char choice,a;
	FILE *fp;
	fp=fopen("Commodity","ab+");
	if(fp==NULL)
	{
		printf("\t\tcan not open");
		return;
	}
	fread(&iTemp,sizeof(struct Commodity),1,fp);
	while(!feof(fp))
	{
		i[iIndex]=iTemp;
		iIndex++;
		fread(&iTemp,sizeof(struct Commodity),1,fp);
	}
	fclose(fp);
	
	printf("\t\t请输入想要删除的商品编号");
	scanf("%d",&Delid);
	fopen("Commodity","w");
	if(fp==NULL)
	{
		printf("\t\tcan not open");
		return;
	}
	for(j=0;j<iIndex;j++)
	{
		if(i[j].iId!=Delid)
		{
			fwrite(&i[j],sizeof(struct Commodity),1,fp);
		}
	}
	fclose(fp);
	printf("\t\t已成功删除编号为%d的商品信息\n",Delid);
	printf("\t\t是否需要继续进行删操作（Y/N)");
	scanf("%c",a);
	scanf("%c",choice);
	if(choice=='y' || choice=='Y')
	{
		Delete();
	}
	else
	{
		system("cls");
		menu();
	}
}

void Browse()
{
	struct Commodity i;
	int index=0;
	char a,choice;
	FILE *fp;
	fp=fopen("Commodity","r");
	if(fp==NULL)
	{
		printf("\t\tcan not open");
		return;
	}
	fread(&i,sizeof(struct Commodity),1,fp);
	while(!feof(fp))
	{
		index++;
		printf("\t\t----------所有商品信息一览----------\n");
		printf("\t\t商品编号：%d\n",&i.iId);
		printf("\t\t商品名称：%s\n",&i.cName);
		printf("\t\t商品生产地:%s\n",&i.cProduce);
		printf("\t\t商品数量：%d\n",&i.iNumber);
		printf("\t\t商品单价：%s\n",&i.fPrice);
		fread(&i,sizeof(struct Commodity),1,fp);
	}
	fclose(fp);
	
	printf("你希望继续吗(Y/N)");
	scanf("%c",&a);
	scanf("%c",&choice);
	if(choice=='y' || choice=='Y')
	{
		Browse();
	}
	else
	{
		system("cls");
		menu();
	}
}
void Modify()
{
	int iIndex=0,ID,j;
	char choice,a;
	struct Commodity Temp;
	struct Commodity i[1000];
	FILE *fp;
	fp=fopen("Commodity","r");
	if(fp==NULL)
	{
		printf("\t\tcan not open");
		return;
	}
	fread(&Temp,sizeof(struct Commodity),1,fp);
	while(!feof(fp))
	{
		i[iIndex]=Temp;
		iIndex++;
		fread(&Temp,sizeof(struct Commodity),1,fp);
	}
	fclose(fp);
	fp=fopen("Commodity","w");
	if(fp==NULL)
	{
		printf("\t\tcan not open");
		return;
	}
	printf("\t\t请输入所要修改信息的商品的编号：");
	scanf("%d",&ID);
	for(j=0;j<=iIndex-1;j++)
	{
		if(i[j].iId!=ID)
		{
			fwrite(&i[j],sizeof(struct Commodity),1,fp);
		}
		else
		{
			printf("\t\t商品名称修改为：");
			scanf("%s",&i[j].cName);
			printf("\t\t商品生产产地为：");
			scanf("%s",&i[j].cProduce);
			printf("\t\t商品数量修改为：");
			scanf("%d",&i[j].iNumber);
			printf("\t\t商品单价修改为：");
			scanf("%f",&i[j].fPrice);
			fwrite(&i[j],sizeof(struct Commodity),1,fp);
		}
	}
	fclose(fp);
	printf("\t\t商品信息已修改\n");
	printf("\t\t需要继续修改商品信息吗（Y/N)");
	scanf("%c",&a);
	scanf("%c",&choice);
	if(choice=='Y' || choice=='y')
	{
		Modify();
	}
	else
	{
		system("cls");
		menu();
	}
}
