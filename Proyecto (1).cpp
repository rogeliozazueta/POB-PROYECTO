#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()

{	
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
	string linea;
	ifstream archEnt;
	ofstream archSal;
	archSal.open("Desencriptado.txt");
	archEnt.open("Encriptado.txt");
	
	

	while(getline(archEnt,linea))
	{
	
	
	for(int x=0 ; x<15 ;x ++)
	{
			
		    a=linea.find("B");
		    b=linea.find("y");
			c=linea.find("/");
			d=linea.find("8");
			e=linea.find("T");
			f=linea.find("&"); 
			g=linea.find("Q");  
			h=linea.find("E");
			i=linea.find("P");
			j=linea.find("F"); 
			k=linea.find("C");  
			l=linea.find("c");
			m=linea.find("#");
			n=linea.find("@");   
			
			
	
		
			if(a>=0)            
		{		
			linea.erase(a,1);
			linea.insert(a,"0");
			      
		}
		
		
		if(b>=0)
		{
			linea.erase(b,1);
			linea.insert(b,"1");
		}
		
		if(c>=0)
		{
			linea.erase(c,1);
			linea.insert(c,"2");
		
		}
		
		if(d>=0)
		{
			linea.erase(d,1);
			linea.insert(d,"3");
		}
		
		if(e>=0)
		{
			linea.erase(e,1);
			linea.insert(e,"4");
		}
		
		if(f>=0)
		{
			linea.erase(f,1);
			linea.insert(f,"5");
		}
		
		if(g>=0)
		{
			linea.erase(g,1);
			linea.insert(g,"6");
		}
		if(h>=0)
		{
			linea.erase(h,1);
			linea.insert(h,"7");
		}
		
		if(i>=0)
		{
			linea.erase(i,1);
			linea.insert(i,"8");
		}
		
		if(j>=0)
		{
			linea.erase(j,1);
			linea.insert(j,"9");
		}
		
		if(k>=0)
		{
			linea.erase(k,1);
			linea.insert(k,"+");
		}
		
		if(l>=0)
		{
			linea.erase(l,1);
			linea.insert(l,"-");
		}
		
		if(m>=0)
		{
			linea.erase(m,1);
			linea.insert(m,"*");
		}
		if(n>=0)
		{
			linea.erase(n,1);
			linea.insert(n,"%");
		}
		 
		

	}
	
	archSal<<linea<<endl;
    }
 	
 	archSal.close();
	archEnt.close();
	return 0;
	
	}
	
	

