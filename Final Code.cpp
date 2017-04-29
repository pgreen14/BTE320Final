#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

int const LOCATION_DIM_SZ = 2; 
int const TIME_DIM_SZ= 2;
int const PRODUCT_DIM_SIZE= 3;

string Location[]  = {"FL", "TX"};
string Period[]	= {"Jan", "FEB"};
string Product[]	= {"iPhone","iPad","MacBookPro"};


/* 1 */
void printSalesDetails(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){

int i(0),j(0),k(0); int sum =0;

cout<<"Sales Details per Location per Period per Product" <<endl; cout<<"================================================="<<endl;

    
    for (i=0; i<2; i++){ //Location
        sum= 0;
        for (j=0; j<2; j++){//period
    
            for (k=0 ;k<3; k++){//product
          
                sum += sales[i][j][k];
              cout << "sales for Location "<<Location[i]<<"/"<<Period[j]<<"/"<<Product[k]<< " " <<setw(10)<< setfill(' ')<<"\t=$" <<setw(9)<<setfill(' ')<<right<<fixed
<<sales[i][j][k]<<setw(10)<<setfill(' ')<<left<<"\tmillions"<<"\n";
        
            }
            
        }

   

/*cout << "sales for Location " <<Location[i]<<"/"<<Period[j]<<"/"<<Product[k]<< "\t=$" <<setw(9)<<setfill(' ')<<right<<fixed
<<sales[i][j][k]<<setw(10)<<setfill(' ')<<left<<"\tmillions"<<"\n";*/

}

cout << "Sum of Sales for all Apple " << setw(20)<< setfill(' ')<< "\t=$" << setw(9)<< setfill(' ')<<right<< fixed
<<sum<<setw(10)<<setfill(' ')<<left<<"\tmillions"<<endl;

cout<<"==================================================="<<endl;

}

void printSalesByProduct(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){ int i(0),j(0),k(0);
double salesPerProduct=0;

cout<<"Sales per Product" <<endl; cout<<"================="<<endl;

 for (i=0 ;i<3; i++){  //product
        salesPerProduct=0;
        for (j=0 ;j<2;j++){ //location
            
            for (k=0;k<2;k++){ //period
                
                salesPerProduct += sales[j][k][i];
                
            }
        }
        
        cout << "Total Sales for " <<setw(20)<<setfill(' ')<<left<< Product[i] << "\t=$" <<setw(9)<<setfill(' ')<<right<<fixed<<salesPerProduct<<setw(10)<<setfill(' ')<<left<<"\tmillions"<<endl;
        
    }
    


cout<<endl; cout<<"==================================================="<<endl;

}

void printSalesByLocation(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){ int i(0),j(0),k(0);
double salesPerLocation=0;

cout<<"Sales per Location" <<endl; cout<<"================="<<endl;

 for (i=0; i<2;i++){  //location
        salesPerLocation = 0;
        for (j=0 ; j<2;j++){ //period
            
            for (k=0; k<3;k++){ //product
                
                salesPerLocation += sales[i][j][k];
                
            }
        }
        
        cout << "Total Sales for " <<setw(20)<<setfill(' ')<<left<< Location[i] << "\t=$" <<setw(9)<<setfill(' ')<<right<<fixed<< salesPerLocation<<setw(10)<<setfill(' ')<<left<<"\tmillions"<<endl;
        
        
        
    }



cout<<endl; cout<<"==================================================="<<endl;


}

/* 4 */
void printSalesByPeriod(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){ int i(0),j(0),k(0);
double salesPerPeriod=0;

cout<<"Sales per Period" <<endl; cout<<"================="<<endl;

for (i=0; i<2;i++){  //period
        salesPerPeriod = 0;
        for (j=0 ; j<3;j++){ //product
            
            for (k=0; k<2;k++){ //location
                
                salesPerPeriod += sales[k][i][j];
                
            }
        }
        
        cout << "Total Sales for " <<setw(20)<<setfill(' ')<<left<< Period[i] << "\t=$" <<setw(9)<<setfill(' ')<<right<<fixed<< salesPerPeriod<<setw(10)<<setfill(' ')<<left<<"\tmillions"<<endl;
        
        
        
    }



cout<<endl; cout<<"==================================================="<<endl;

}
/* 5 */
void printSalesPerProductPerLocation(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){

int i(0),j(0),k(0);
double salesPerProductPerLocation=0;

cout<<"Total Sales per Product per Location" <<endl; cout<<"===================================="<<endl;

for (i=0 ;i<3; i++){  //product
     
      
        for (j=0 ;j<2;j++){ //location
               salesPerProductPerLocation=0;
            for (k=0; k<2; k++){
             
                salesPerProductPerLocation += sales[j][k][i];
            }
                cout << "Total Sales for " <<setw(20)<<setfill(' ')<<left<< Product[i]<<"in"<< Location[j] << "\t=$" <<setw(9)<<setfill(' ')<<right<<fixed<<salesPerProductPerLocation<<setw(10)<<setfill(' ')<<left<<"\tmillions"<<endl; 
            }
        
        
        }

cout<<endl; cout<<"==================================================="<<endl;

}

/* 6 */
void printSalesPerProductPerPeriod(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){

int i(0),j(0),k(0);
double salesPerProductPerPeriod=0;


cout<<"Total Sales per Product per Period" <<endl; cout<<"===================================="<<endl;

for (i=0 ;i<3; i++){  //product
   
      
        for (j=0 ;j<2;j++){ //location
            salesPerProductPerPeriod=0;
            for (k=0;k<2;k++){
             
                salesPerProductPerPeriod += sales[k][j][i];
                
            }
                cout << "Total Sales for " <<setw(20)<<setfill(' ')<<left<< Product[i]<<"in"<< Period[j] << "\t=$" <<setw(9)<<setfill(' ')<<right<<fixed<<salesPerProductPerPeriod<<setw(10)<<setfill(' ')<<left<<"\tmillions"<<endl; 
            }
        
        
        }


cout<<endl; cout<<"==================================================="<<endl;

}

/* 7 */
void printSalesPerLocationPerPeriod(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){

int i(0),j(0),k(0);
double salesPerLocationPerPeriod=0;

cout<<"Total Sales per Location per Period" <<endl;cout<<"===================================="<<endl;


for (i=0 ;i<2; i++){  //location
        
      
        for (j=0 ;j<2;j++){ //period
            salesPerLocationPerPeriod=0;
            
            for (k=0; k<3; k++){
             
                salesPerLocationPerPeriod += sales[i][j][k];
                
            }
                cout << "Total Sales for " <<setw(20)<<setfill(' ')<<left<< Location[i]<<"in"<< Period[j] << "\t=$" <<setw(9)<<setfill(' ')<<right<<fixed<<salesPerLocationPerPeriod<<setw(10)<<setfill(' ')<<left<<"\tmillions"<<endl; 
            }
        
        
  }
cout<<endl; cout<<"==================================================="<<endl;

}

/* 8 */
void printSalesPerPeriodPerLocation(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){

int i(0),j(0),k(0);
double salesPerPeriodPerLocation=0;

cout<<"Total Sales per Period per Location" <<endl; cout<<"===================================="<<endl;

for (i=0 ;i<2; i++){  //period
       
      
        for (j=0 ;j<2;j++){ //location
            salesPerPeriodPerLocation=0;
            for (k=0; k<3; k++){
                salesPerPeriodPerLocation += sales[j][i][k];
                
                }
        
        cout << "Total Sales for " <<setw(20)<<setfill(' ')<<left<< Period[i]<<"in"<< Location[j] << "\t=$" 
                <<setw(9)<<setfill(' ')<<right<<fixed<<salesPerPeriodPerLocation<<setw(10)<<setfill(' ')<<left<<"\tmillions"<<endl; 
  }

}












cout<<endl; cout<<"==================================================="<<endl;

}


int main(int argc, const char * argv[]) {


double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]={0};


sales[0][0][0]=45;
sales[0][0][1]=8;
sales[0][0][2]=4;
sales[0][1][0]=35;
sales[0][1][1]=10;
sales[0][1][2]=5;
sales[1][0][0]=75;
sales[1][0][1]=15;
sales[1][0][2]=13;
sales[1][1][0]=45;
sales[1][1][1]=17;
sales[1][1][2]=23.1;


printSalesDetails(sales);	/* 1 */
printSalesByProduct(sales);	/* 2 */
printSalesByLocation(sales);	/* 3 */
printSalesByPeriod(sales);	/* 4 */ 
printSalesPerProductPerLocation(sales); /* 5 */ 
printSalesPerProductPerPeriod(sales);	/* 6 */ 
printSalesPerLocationPerPeriod(sales);	/* 7 */ 
printSalesPerPeriodPerLocation(sales);	/* 8 */


return 0;
}

