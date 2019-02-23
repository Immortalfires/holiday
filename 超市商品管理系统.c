#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
//��ϵͳΪ ������Ʒ����ϵͳ 
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
	printf("\t\t|\t 1. Add Commodity Information          |\n");      //�����Ʒ��Ϣ 
	printf("\t\t|\t 2. Search Commodity Information       |\n");   //������Ʒ��Ϣ 
	printf("\t\t|\t 3. Delerte Commodity Information      |\n");  //ɾ����Ʒ��Ϣ 
	printf("\t\t|\t 4. Modify Commodity Information       |\n");   //�޸���Ʒ��Ϣ 
	printf("\t\t|\t 5. Browse Commodity Information       |\n");   //�����Ʒ��Ϣ
	printf("\t\t|\t 6. change the color                   |\n");   //����ϵͳ��ɫ 
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
	printf("\n\n\t\tѡ�����·���\n");
	printf("\n\n\t\t1.------------------ ��׺���\n");
	printf("\t\t2.------------------ �׵׺���\n");
	printf("\t\t3.------------------ �ڵ׺���\n");
	printf("\t\t4.------------------ �̵�����\n");
	printf("\t\t5.------------------ �Ƶ�����\n");
	printf("\t\t6.------------------ ϵͳĬ��\n");
	printf("\n\n\t\t��ѡ����ϲ������ɫ������");
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
			printf("\t\t������Ч������������\n");
			getch();
			colorsetting();
	}
	
	printf("\t\t����ѡ��ɫ�������𣬣�'y' or 'n')");
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
	printf("\t\t----������Ҫ������Ʒ��Ϣ----\n");
	printf("\t\t��������Ʒ���:");
	scanf("%d",&i.iId);
	while((Panduan(i.iId))==1)
	{
		printf("\t\t�˱���Ѵ��ڣ�����������\n\t\t");
		scanf("%d",&i.iId);
	}
	printf("\t\t��������Ʒ����:");
	scanf("%s",&i.cName);
	printf("\t\t��������Ʒ������:");
	scanf("%s",&i.cProduce);
	printf("\t\t��������Ʒ����:");
	scanf("%d",&i.iNumber);
	printf("\t\t��������Ʒ����:");
	scanf("%f",&i.fPrice);
	fwrite(&i,sizeof(struct Commodity),1,fp);
	fclose(fp);
	printf("\t\t���Ϊ%d����Ʒ�ɹ����\n",i.iId);
	printf("\t\t�Ƿ���Ҫ����¼����Ʒ��Ϣ��Y/N)");
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
	printf("\t\t��������Ҫ������Ʒ�ı��");
	scanf("%d",&ifID);
	fread(&i,sizeof(struct Commodity),1,fp);
	while(!feof(fp))
	{
		if(i.iId==ifID)
		{
			printf("\t\t----------��Ʒ��Ϣ----------\n");
			printf("\t\t��Ʒ��ţ�%d\n",i.iId);
			printf("\t\t��Ʒ���ƣ�%s\n",i.cName);
			printf("\t\t��Ʒ�����أ�%s\n",i.cProduce);
			printf("\t\t��Ʒ���ۣ�%f\n",i.fPrice);
			printf("\t\t��Ʒ������%d\n",i.iNumber);
			printf("\t\t��ϣ��������ѯ��Y/N)");
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
	printf("\t\t����ı�Ų����ڣ�����������\n");
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
	
	printf("\t\t��������Ҫɾ������Ʒ���");
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
	printf("\t\t�ѳɹ�ɾ�����Ϊ%d����Ʒ��Ϣ\n",Delid);
	printf("\t\t�Ƿ���Ҫ��������ɾ������Y/N)");
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
		printf("\t\t----------������Ʒ��Ϣһ��----------\n");
		printf("\t\t��Ʒ��ţ�%d\n",&i.iId);
		printf("\t\t��Ʒ���ƣ�%s\n",&i.cName);
		printf("\t\t��Ʒ������:%s\n",&i.cProduce);
		printf("\t\t��Ʒ������%d\n",&i.iNumber);
		printf("\t\t��Ʒ���ۣ�%s\n",&i.fPrice);
		fread(&i,sizeof(struct Commodity),1,fp);
	}
	fclose(fp);
	
	printf("��ϣ��������(Y/N)");
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
	printf("\t\t��������Ҫ�޸���Ϣ����Ʒ�ı�ţ�");
	scanf("%d",&ID);
	for(j=0;j<=iIndex-1;j++)
	{
		if(i[j].iId!=ID)
		{
			fwrite(&i[j],sizeof(struct Commodity),1,fp);
		}
		else
		{
			printf("\t\t��Ʒ�����޸�Ϊ��");
			scanf("%s",&i[j].cName);
			printf("\t\t��Ʒ��������Ϊ��");
			scanf("%s",&i[j].cProduce);
			printf("\t\t��Ʒ�����޸�Ϊ��");
			scanf("%d",&i[j].iNumber);
			printf("\t\t��Ʒ�����޸�Ϊ��");
			scanf("%f",&i[j].fPrice);
			fwrite(&i[j],sizeof(struct Commodity),1,fp);
		}
	}
	fclose(fp);
	printf("\t\t��Ʒ��Ϣ���޸�\n");
	printf("\t\t��Ҫ�����޸���Ʒ��Ϣ��Y/N)");
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
