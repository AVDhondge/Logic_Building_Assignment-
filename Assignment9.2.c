///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Filename:    Assignment9.2.c                                             //
//  Description: Program which accept number from user and                   //
//               check whether it contains 0 in it or not.                   //
//  Author:      Anurag Dhondge                                              //                                                 
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
//Input  :  2395    
//Output :  There is no Zero
//Input  :  1018   
//Output :  It Contains Zero

#include<stdio.h> 
#define TRUE 1 
#define FALSE 0

typedef int BOOL; 

BOOL ChkZero(int iNo) 
{ 
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }

    return FALSE;

} 
int main() 
{ 
    int iValue = 0; 
    BOOL bRet = FALSE; 

    printf("Enter number"); 
    scanf("%d",&iValue); 

    bRet = ChkZero(iValue); 
    if(bRet == TRUE) 
    { 
        printf("It Contains Zero"); 
    } 
    else 
    { 
        printf("There is no Zero");
    } 
    return 0; 
} 