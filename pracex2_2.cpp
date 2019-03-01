#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>

using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	ifstream score("score3.txt");
	
	string text;
	float num[20]={};
	float r;
    int p=0,y=0;
	while((getline(score,text)))
	{
		//cout << text << "\n";
		
	
		//getline(score,text);
		r=atof(text.c_str());
		//cout << r <<endl;
		
		num[p] = r;
		//cout << num[p]<<endl;
		
	
		
		//cout << num[p]<<endl;
		//rank <<num[p]<<endl;
		p++;
		
	}

		for(int i = 1; i <p; i++)
		{
			for(int j = i; j >0; j--)
			{
				if(num[j] > num[j-1])
				{
					float temp = num[j];
					num[j] = num[j-1];
					num[j-1] = temp;
				}		else
					{
						break;
					} 
			}
		
		}

	
		

		ofstream rank("rank.txt");
		int n=1;
		for(int l = 0; l < 20;l++){
			
			if (num[19]==num[0]){
			
			rank <<num[l]<<"="<<n-l<<"\n";
		}
		else if(num[l]==num[0]){
				rank << num[l] <<"="<<n<<"\n";
			}

			else if(num[l]==num[l-2]){
				rank<< num[l] <<"="<<n-2 <<"\n";
				}
			else if(num[l]==num[l-1]){
				rank<< num[l] <<"="<< n-1<<"\n";
				
			}
			
			else{
		rank<< num[l] <<"=" <<n<<"\n";
			}
			n++;
	}
	rank.close();
	ofstream result("result.txt");
	int b=1;
	for(int l = 0; l < 20;l++){
		if (num[19]==num[0]){
			
			result <<num[l]<<"="<<b-l<<"\n";
		}
		else if(num[l]==num[0]){
				result << num[l] <<"="<<b<<"\n";
			}

			else if(num[l]==num[l-2]){
					result<< num[l] <<"="<<b-2 <<"\n";
				}
			else if(num[l]==num[l-1]){
				result<< num[l] <<"="<< b-1<<"\n";
				
			}
			
			else{
		result<< num[l] <<"=" <<b<<"\n";
			}
			b++;
	}
	result.close();
		return 0;
}

