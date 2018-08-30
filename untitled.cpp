#include<iostream>
using namespace std;
int power(int base ,int n)
{
        int result=1;
        while(n!=0)
        {
                result*=base;
                n--;
               }
        return result;
}
int main()
{
        int n,base,res;
        cout<<"enter number of variables "<<endl;
        cin>>n;
        base=2;
        res=power(base,n);
        cout<<endl<<"enter the min terms "<<endl;
        cout<<"enter -5 to terminate"<<endl;
        int m[res-1],i;
        for(i=0;i<=(res-1);i++)
        {
          m[i]=0;
        }

       //m[15]=0;
        while(i!=-5)
        {
          cin>>i;
          m[i]=1;

        }
          /*if(n==2)
        {
        cout<<"karnaugh map for "<<n<<" variable"<<endl;
         cout<<"                a     "<<endl;
        cout<<"              0   1"<<endl;
        cout<<"       0  |  "<<m[0]<<"|  "<<m[1]<<"|  "<<endl;
      cout<<"   b   1  |  "<<m[2]<<"|  "<<m[3]<<"|  "<<endl;
        
        }
        if(n==3)
        {
        cout<<"karnaugh map for "<<n<<" variable"<<endl;
         cout<<"                    ab      "<<endl;
        cout<<"             00  01  11  10"<<endl;
        cout<<"       0  |  "<<m[0]<<"|  "<<m[1]<<"|  "<<m[3]<<"|  "<<m[2]<<"  |"<<endl;
      cout<<"   c   1  |  "<<m[4]<<"|  "<<m[5]<<"|  "<<m[7]<<"|  "<<m[6]<<"  |"<<endl;
        }*/
        if(n==4)
        {
        cout<<endl<<" karnaugh map for "<<n<<" variable"<<endl;
        cout<<"                    ab      "<<endl;
        cout<<"              00  01  11  10"<<endl;
        cout<<"       00  |  "<<m[0]<<"|  "<<m[1]<<"|  "<<m[3]<<"|  "<<m[2]<<"  |"<<endl;
      cout<<"   cd  01  |  "<<m[4]<<"|  "<<m[5]<<"|  "<<m[7]<<"|  "<<m[6]<<"  |"<<endl;
      cout<<"       11  |  "<<m[12]<<"|  "<<m[13]<<"|  "<<m[15]<<"|  "<<m[14]<<"  |"<<endl;
    
      cout<<"       10  |  "<<m[8]<<"|  "<<m[9]<<"|  "<<m[11]<<"|  "<<m[10]<<"  |"<<endl;
        }
        bool mat[31];
        for(i=0;i<=31;i++)
        {
          mat[i]=0;
        }
      if((m[0]==1) && (m[1]==1))
          mat[0]=1;
      if((m[1]==1) && (m[3]==1))
          mat[1]=1;
      if((m[3]==1) && (m[2]==1))
          mat[2]=1;
      if((m[4]==1) && (m[5]==1))
          mat[3]=1;
      if((m[5]==1) && (m[7]==1))
          mat[4]=1;
      if((m[7]==1)  && (m[6]==1))
          mat[5]=1;
      if((m[12]==1) && (m[13]==1))
          mat[6]=1;
      if((m[13]==1) && (m[15]==1))
          mat[7]=1;
      if((m[15]==1) && (m[14]==1))
          mat[8]=1;
      if((m[8]==1) && (m[9]==1))
          mat[9]=1;
      if((m[9]==1) && (m[11]==1))
          mat[10]=1;
      if((m[11]==1) && (m[10]==1))
          mat[11]=1;
      if((m[0]==1) && (m[4]==1))
          mat[12]=1;
      if((m[1]==1) && (m[5]==1))
          mat[13]=1;
      if((m[3]==1) && (m[7]==1))
          mat[14]=1;
      if((m[2]==1) && (m[6]==1))
          mat[15]=1;
      if((m[4]==1) && (m[12]==1))
          mat[16]=1;
      if((m[5]==1) && (m[13]==1))
          mat[17]=1;
      if((m[7]==1) && (m[15]==1))
          mat[18]=1;
      if((m[6]==1) && (m[14]==1))
          mat[19]=1;
      if((m[12]==1) && (m[8]==1))
          mat[20]=1;
      if((m[13]==1) && (m[9]==1))
          mat[21]=1;
      if((m[15]==1) && (m[11]==1))
          mat[22]=1;
      if((m[14]==1) && (m[10]==1))
          mat[23]=1;
      if((m[0]==1) && (m[8]==1))
          mat[24]=1;
      if((m[1]==1) && (m[9]==1))
          mat[25]=1;
      if((m[3]==1) && (m[11]==1))
          mat[26]=1;
      if((m[2]==1) && (m[10]==1))
          mat[27]=1;
      if((m[0]==1) && (m[2]==1))
          mat[28]=1;
      if((m[4]==1) && (m[6]==1))
          mat[29]=1;
      if((m[12]==1) &&(m[14]==1))
          mat[30]=1;
      if((m[8]==1) && (m[10]==1))
          mat[31]=1;
         bool mat4[23];
         for(i=0;i<=23;i++)
         {
          mat4[i]=0;
         }
    
    if((mat[0]==1)&&(mat[3]==1))
        mat4[0]=1;
    if((mat[1]==1)&&(mat[4]==1))
        mat4[1]=1;
    if((mat[2]==1)&&(mat[5]==1))
        mat4[2]=1;
    if((mat[3]==1)&&(mat[6]==1))
        mat4[3]=1;
    if((mat[4]==1)&&(mat[7]==1))
        mat4[4]=1;
    if((mat[5]==1)&&(mat[8]==1))
        mat4[5]=1;
    if((mat[6]==1)&&(mat[9]==1))
        mat4[6]=1;
    if((mat[7]==1)&&(mat[10]==1))
        mat4[7]=1;
    if((mat[8]==1)&&(mat[11]==1))
        mat4[8]=1;
    if((mat[0]==1)&&(mat[9]==1))
        mat4[9]=1;
    if((mat[1]==1)&&(mat[10]==1))
        mat4[10]=1;
    if((mat[2]==1)&&(mat[11]==1))
        mat4[11]=1;
    if((mat[12]==1)&&(mat[15]==1))
        mat4[12]=1;
    if((mat[16]==1)&&(mat[19]==1))
        mat4[13]=1;
    if((mat[20]==1)&&(mat[23]==1))
        mat4[14]=1;
    if((mat[0]==1)&&(mat[2]==1))
        mat4[15]=1;
    if((mat[3]==1)&&(mat[5]==1))
        mat4[16]=1;
    if((mat[6]==1)&&(mat[8]==1))
        mat4[17]=1;
    if((mat[9]==1)&&(mat[11]==1))
        mat4[18]=1;
    if((mat[12]==1)&&(mat[20]==1))
        mat4[19]=1;
    if((mat[13]==1)&&(mat4[21]==1))
        mat4[20]=1;
    if((mat[14]==1)&&(mat[22]==1))
        mat4[21]=1;
    if((mat[15]==1)&&(mat[23]==1))
        mat4[22]=1;
    if((mat[24]==1)&&(mat[27]==1))
        mat4[23]=1;  
        bool mat8[7] = {0,0,0,0,0,0,0};
    mat8[7]=0;
    if((mat4[19]==1)&&(mat4[20]==1))
        mat8[0]=1;
    if((mat4[20]==1)&&(mat4[21]==1))
        mat8[1]=1;
    if((mat4[21]==1)&&(mat4[22]==1))
        mat8[2]=1;
    if((mat4[15]==1)&&(mat4[16]==1))
        mat8[3]=1;
    if((mat4[16]==1)&&(mat4[17]==1))
        mat8[4]=1;
    if((mat4[17]==1)&&(mat4[18]==1))
        mat8[5]=1;
    if((mat4[15]==1)&&(mat4[18]==1))
        mat8[6]=1;
    if((mat4[19]==1)&&(mat4[22]==1))
        mat8[7]=1;
    bool mat16=0;
    if((mat8[0]==1)&&(mat8[2]==1))
        mat16=1;
      string function;
         if(mat8[0]==1)
        {
            function=function + "a\' + ";
        }
    if(mat8[1]==1)
        {
            function=function + "b + ";
        }
    if(mat8[2]==1)
        {
            function=function + "a + ";
        }
    if (mat8[3]==1)
        {
            function=function + "c\' + ";
        }
    if (mat8[4]==1)
        {
            function = function + "d + ";
        }
    if (mat8[5]==1)
        {
            function = function + "c + ";
        }
      if (mat8[6]==1)
        {
            function = function + "d\' + ";
        }
       if (mat8[7]==1)
        {
            function = function + "b\' + ";
        }
      if (mat4[0]==1)
        {
            if((mat4[2]==0)&&(mat4[6]==0))
                function = function + "a\'c\' + ";
        }
      if (mat4[1]==1)
        {
            if((mat4[7]==0)&&(mat4[12]==0))
                function = function + "bc\' + ";
        }
      if (mat4[2]==1)
        {
            if((mat4[0]==0)&&(mat4[8]==0))
                function = function + "ac\' + ";
        }
      if (mat4[3]==1)
        {
            if((mat4[5]==0)&&(mat4[9]==0))
                function = function + "a\'d + ";
        }
      if (mat4[4]==1)
        {
            if((mat4[10]==0)&&(mat4[13]==0))
                function = function + "bd + ";
        }
      if (mat4[5]==1)
        {
            if((mat4[3]==0)&&(mat4[11]==0))
                function = function + "ad + ";
        }
      if (mat4[6]==1)
        {
            if((mat4[0]==0)&&(mat4[8]==0))
                function = function + "a\'c + ";
        }
      if (mat4[7]==1)
        {
            if((mat4[1]==0)&&(mat4[14]==0))
                function = function + "bc + ";
        }
      if (mat4[8]==1)
        {
            if((mat4[2]==0)&&(mat4[6]==0))
                function = function + "ac + " ;
        }
     if (mat4[9]==1)
        {
            if((mat4[11]==0)&&(mat4[3]==0))
                function = function + "a\'d\' + ";
        }
      if (mat4[10]==1)
        {
            if((mat4[4]==0)&&(mat4[12]==0))
                function = function + "bd\' + ";
        }
      if (mat4[11]==1)
        {
            if((mat4[9]==0)&&(mat4[5]==0))
                function = function + "ad\' + ";
        }
      if (mat4[12]==1)
        {
            if((mat4[14]==0)&&(mat4[1]==0))
                function = function + "b\'c\' + ";
        }
      if (mat4[13]==1)
        {
            if((mat4[4]==0)&&(mat[12]==0))
                function = function + "b\'d + ";
        }
      if(mat4[14]==1)
        {
            if((mat4[12]==0)&&(mat4[7]==0))
                function = function + "b\'c + ";
        }
      if(mat4[15]==1)
      {
        if((mat4[18]==0)&&(mat[16==0]))
          function = function +"c\'d\' + ";
      }
      if(mat4[16]==1)
      {
        if((mat4[15]==0)&&(mat4[17]==0))
          function =function +"cd\'' +";
      }
      if(mat4[17]==1)
      {
        if((mat4[16]==0)&&(mat4[18]==0))
          function =function+"cd + ";
      }
      if(mat4[18]==1)
      {
        if((mat4[15==0])&&(mat4[18==0]))
          function= function +"c\'d + ";
      }
      if(mat4[19]==1)
      {
        if(mat4[20]==0&&mat4[22]==0)
          function=function +"a\'b\'+";
      }
      if (mat4[20]==1)

      {
        if((mat4[19]==0)&&(mat4[21]==0))
          function=function+"a\'b +";
      }
      if(mat4[21]==1)
      {
        if(mat4[20]==0&&mat4[22]==0)
          function=function+"ab +";
      }
      if (mat4[22]==1)

      {
        if((mat4[21]==0)&&(mat4[19]==0))
          function=function+"ab\'+";
      }
      if (mat[0]==1)
        {
            if((mat[12]==0)&&(mat[13]==0)&&(mat[24]==0)&&(mat[25]==0)&&(mat[2]==1)&&(mat[1]==0))
                function = function + "a\'c\'d\' + ";
        }
      if (mat[1]==1)
        {
            if((mat[4]==0)&&(mat[10]==0)&&(mat[28]==0))
                function =function + "bc\'d\' + ";
        }
      if (mat[2]==1)
        {
            if((mat[0]==0)&&(mat[5]==0)&&(mat[11]==0))
                function = function + "ac\'d\' + ";
        }
      if (mat[3]==1)
        {
            if((mat[0]==0)&&(mat[6]==0)&&(mat[5]==0))
                function = function + "a\'c\'d + ";
        }
      if (mat[4]==1)
        {
            if((mat[1]==0)&&(mat[7]==0)&&(mat[29]==0))
                function = function + "b\'c\'d + ";
        }
      if (mat[5]==1)
        {
            if((mat[3]==0)&&(mat[2]==0)&&(mat[8]==0))
                function = function + "ac\'d + ";
        }
       if (mat[6]==1)
        {
            if((mat[3]==0)&&(mat[8]==0)&&(mat[9]==0))
                function = function + "a\'cd + ";
        }
       if (mat[7]==1)
        {
            if((mat[4]==0)&&(mat[10]==0)&&(mat[30]==0))
                function = function + "bcd + ";
        }
       if (mat[8]==1)
        {
            if((mat[6]==0)&&(mat[5]==0)&&(mat[11]==0))
                function = function + "acd + ";
        }
       if (mat[9]==1)
        {
            if((mat[11]==0)&&(mat[6]==0)&&(mat[0]==0))
                function = function + "a\'cd\' + ";
        }
       if (mat[10]==1)
        {
            if((mat[7]==0)&&(mat[1]==0)&&(mat[31]==0))
                function = function + "bcd\' + ";
        }
       if (mat[11]==1)
        {
            if((mat[9]==0)&&(mat[8]==0)&&(mat[2]==0))
                function = function + "acd\' + ";
        }
       if (mat[12]==1)
        {
            if((mat[13]==0)&&(mat[15]==0)&&(mat[20]==0))
                function = function + "a\'b\'c\' + ";
        }
       if(mat[13]==1)
        {
            if((mat[12]==0)&&(mat[14]==0)&&(mat[21]==0))
                function = function + "a\'bc\' + ";
        }
      if(mat[14]==1)
        {
            if((mat[13]==0)&&(mat[15]==0)&&(mat[22]==0))
                function = function + "abc\' + ";
        }
       if(mat[15]==1)
        {
            if((mat[14]==0)&&(mat[12]==0)&&(mat[23]==0))
                function = function + "ab\'c\' + ";
        }
       if(mat[16]==1)
        {
            if((mat[17]==0)&&(mat[19]==0)&&(mat[24]==0))
                function = function + "a\'b\'d + ";
        }
       if(mat[17]==1)
        {
            if((mat[16]==0)&&(mat[18]==0)&&(mat[25]==0))
                function = function + "a\'bd + ";
        }
       if(mat[18]==1)
        {
            if((mat[17]==0)&&(mat[19]==0)&&(mat[26]==0))
                function = function + "abd + ";
        }
       if(mat[19]==1)
        {
            if((mat[18]==0)&&(mat[16]==0)&&(mat[27]==0))
                function = function + "ab\'d + ";
        }
       if(mat[20]==1)
        {
            if((mat[21]==0)&&(mat[23]==0)&&(mat[12]==0))
                function = function + "a\'b\'c + ";
        }
       if(mat[21]==1)
        {
            if((mat[20]==0)&&(mat[22]==0)&&(mat[13]==0))
                function = function + "a\'bc + ";
        }
       if(mat[22]==1)
        {
            if((mat[21]==0)&&(mat[23]==0)&&(mat[14]==0))
                function = function + "abc + ";
        }
      if (mat[23]==1)
        {
            if((mat[22]==0)&&(mat[20]==0)&&(mat[15]==0))
                function = function + "ab\'c + ";
        }
      if (mat[24]==1)
        {
            if((mat[25]==0)&&(mat[27]==0)&&(mat[16]==0))
                function = function + "a\'b\'d\' + ";
        }
      if (mat[25]==1)
        {
            if((mat[24]==0)&&(mat[26]==0)&&(mat[17]==0))
                function = function + "a\'bd\' + ";
        }
      if (mat[26]==1)
        {
            if((mat[25]==0)&&(mat[27]==0)&&(mat[18]==0))
                function = function + "abd\' + ";
        }
      if (mat[27]==1)
        {
            if((mat[26]==0)&&(mat[24]==0)&&(mat[19]==0))
                function = function + "ab\'d\' + ";
        }
      if (mat[28]==1)
        {
            if((mat[29]==0)&&(mat[31]==0)&&(mat[1]==0))
                function = function + "b\'c\'d\' + ";
        }
      if (mat[29]==1)
        {
            if((mat[30]==0)&&(mat[28]==0)&&(mat[4]==0))
                function = function + "b\'c\'d + ";
        }
       if (mat[30]==1)
        {
            if((mat[29]==0)&&(mat[31]==0)&&(mat[7]==0))
                function = function + "b\'cd + ";
        }
     if (mat[31]==1)
        {
            if((mat[30]==0)&&(mat[28]==0)&&(mat[10]==0))
                function = function + "b\'cd\' + ";
        }
          if (m[0]==1)
        {
            if((m[1]==0)&&(m[2]==0)&&(m[4]==0)&&(m[8]==0))
                function = function + "a\'b\'c\'d\' + ";
        }
      if (m[1]==1)
        {
            if((m[0]==0)&&(m[3]==0)&&(m[5]==0)&&(m[9]==0))
                function = function + "a\'bc\'d\' + ";
        }
    if (m[3]==1)
        {
            if((m[1]==0)&&(m[2]==0)&&(m[7]==0)&&(m[11]==0))
                function = function + "abc\'d\' + ";
        }
    if (m[2]==1)
        {
            if((m[3]==0)&&(m[0]==0)&&(m[6]==0)&&(m[10]==0))
                function = function + "ab\'c\'d\' + ";
        }
     if (m[4]==1)
        {
            if((m[0]==0)&&(m[5]==0)&&(m[6]==0)&&(m[12]==0))
                function = function + "a\'b\'c\'d + ";
        }
      if (m[5]==1)
        {
            if((m[4]==0)&&(m[7]==0)&&(m[1]==0)&&(m[13]==0))
                function = function + "a\'bc\'d + ";
        }
      if (m[7]==1)
        {
            if((m[5]==0)&&(m[6]==0)&&(m[3]==0)&&(m[15]==0))
                function = function + "abc\'d + ";
        }
      if (m[6]==1)
        {
            if((m[7]==0)&&(m[4]==0)&&(m[2]==0)&&(m[14]==0))
                function = function + "ab\'c\'d + ";
        }
      if (m[12]==1)
        {
            if((m[4]==0)&&(m[13]==0)&&(m[14]==0)&&(m[8]==0))
                function = function + "a\'b\'cd + ";
        }
      if (m[13]==1)
        {
            if((m[12]==0)&&(m[15]==0)&&(m[5]==0)&&(m[9]==0))
                function = function + "a\'bcd + ";
        }
      if (m[15]==1)
        {
            if((m[13]==0)&&(m[14]==0)&&(m[7]==0)&&(m[11]==0))
                function = function + "abcd + ";
        }
      if (m[14]==1)
        {
            if((m[15]==0)&&(m[12]==0)&&(m[6]==0)&&(m[10]==0))
                function = function + "ab\'cd + ";
        }
      if (m[8]==1)
        {
            if((m[9]==0)&&(m[10]==0)&&(m[0]==0)&&(m[12]==0))
                function = function + "a\'b\'cd\' + ";
        }
      if (m[9]==1)
        {
            if((m[8]==0)&&(m[11]==0)&&(m[13]==0)&&(m[1]==0))
                function = function + "a\'bcd\' + ";
        }
      if (m[11]==1)
        {
            if((m[9]==0)&&(m[10]==0)&&(m[15]==0)&&(m[3]==0))
                function = function + "abcd\' + ";
        }
      if (m[10]==1)
        {
            if((m[11]==0)&&(m[8]==0)&&(m[2]==0)&&(m[14]==0))
                function = function + "ab\'cd\' + ";
        }
      
          cout<<endl<<" The Simplified function is : "<<function<<endl;
       
      
}
