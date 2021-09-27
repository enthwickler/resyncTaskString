
#include <stdio.h>
#include <string.h>
#define MAX_STR 97
 
void main()
{
    int count = 0, c = 0, i, j = 0, k, l, space = 0, NA = 0,tempcnt = 0,z = 0;
    char str[100], p[50][100], str1[20], ptr1[50][100], cmp[50];
	char input[100][15] = {"print","happy","against","monkey","need","different","effect","sheep","paper","horse",
"parallel","journey","kind","account","opinion","lock","knowledge","look","weather","join","market","space","married",
"who","nerve","responsible","payment","again","while","rhythm","prison","opposite","special","why","authority",
"rest","school","operation","river","year","shake","than","shame","push","when","question","road","waiting","Zoo",
"respect","that","ring","then","very","theory","water","tomorrow","wheel","umbrella","the","view","walk","twist","unit",
"waste","together","week","weight","yesterday","tooth","you","young","Zibra","will","yellow","brain","verse","Xray"
"voice","cloud","adjustment","between","where","connection","branch","care","needle","about","with","addition",
"cart","button","control","desire","Xman","cloth","balance"};
 
    printf("Enter the string\n");
    scanf(" %[^\n]s", str);
    
    for (i = 0, j = 0, k = 0;j < strlen(str);j++)
    {
		if((str[j] >= 97 && str[j] <= 122) || (str[j] >= 65 && str[j] <= 90) || str[j] == ' ')
		{
			if ((str[j] == ' '))  
			{    
				space++;
				p[i][k] = '\0';
				i++;
				k = 0;
			}  
			
			
			else
				p[i][k++] = str[j];
		}	
		else
		{
			printf("\nNon alphabat detected at = %d",j);
			 
			while(str[j] != ' ')
			 j++;
			p[i][0] = '\0';
			k = 0;
			NA = 1;
		}
		
	}	
	
// 	for (i = 0;i <= 95;i++)
//     {
//         printf("input[%d] = %s \n",i, input[i]);
//     }
    
    
// 	for (i = 0;i <= space+1;i++)
//     {
//         printf("p[%d] = %s \n",i, p[i]);
//     }
    
    for (i = 0;i < space+1;i++)
    {
    for (k = 0; k < 95 ; k++)
		{
			if ((strcmp(p[i], input[k]) == 0))
			{
				printf("String = %s " "is found position = %d\n",p[i] ,k);
				break;
				
			}
			 else
			{
			    tempcnt++;
				
			} 	
		}
    }	
	printf("tempcnt = %d", tempcnt);
    
    
    for (i = 0;i < space+1;i++)    
    {
//         for (z = 0; z < 95 ; z++)
// 		{
// 			if ((strcmp(p[i], input[z]) == 0))
// 			{
// 				printf("String = %s " "is found position = %d\n",p[i] ,z);
// 				break;
				
// 			}
// 			 else
// 			{
// 			    tempcnt++;
				
// 			} 	
// 		}
	
        for (j = i + 1;j <= space;j++)
        {
            if ((strcmp(p[i], p[j]) > 0))
            {
                strcpy(cmp, p[i]);
                strcpy(p[i], p[j]);
                strcpy(p[j], cmp);
            }
        }
    }
    
    printf("tempcnt = %d", tempcnt);
    printf("\nAfter sorting string is \n");
    for (i = 0;i <= space;i++)
    {
        printf("%s ", p[i]);
    }
}