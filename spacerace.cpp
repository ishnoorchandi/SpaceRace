#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class racer {
        private:
            double distance;
            string initials;
            double velocity;
            double fuelconsumed;
            double fuelrate;
            double time; 
            double efficiency;
        
        public:
           // void assign(string i, double v, double fc, double fr, double t , double e){
             double assign(double d, string i, double v, double fc){
                distance = d;
                initials = i;
                velocity = v;
                fuelconsumed = fc;
                // fuelrate = fr;
                //time = t;
                //efficiency = e;
                time = distance / velocity;
                fuelrate = fuelconsumed / time;
                efficiency = velocity / fuelrate;
                

                return efficiency;
                
            }
    };
int main() {
    double ArrayEfficiency[15];
    string RacerName[15];
    
    double n = 0; // number of space-cars
    double d = 0; // distance start to end 
    string InputFirstStr = ""; 
    double Inputvelocity;
    double Inputfuelconsumed;
    

    cin >> n;
    cin >> d;
    racer racer1;
    
    for(int i=0; i < n; i++)
    {
        cin >> InputFirstStr >> Inputvelocity >> Inputfuelconsumed;
        RacerName[i] = InputFirstStr;
        ArrayEfficiency[i] = racer1.assign (d, InputFirstStr, Inputvelocity, Inputfuelconsumed);
    }
    
    double MaxEfficciency = 0 ;

    for (int a = 0; a < n; a++) {
        if (ArrayEfficiency[a] > MaxEfficciency)
            MaxEfficciency = ArrayEfficiency[a];
    }

    for (int b = 0; b < n; b++) {
        if (ArrayEfficiency[b] == MaxEfficciency)
          cout << RacerName[b];
    }

    return 0;    
}


    /* string InputStr[15] = "";
    string TempStr;
    cin >> n;
    cin >> d;
    for(int i=0; i < n; i++) {
    cin >> TempStr;
    
    InputStr[i] = TempStr;
    
    }

   for (int j=0; j< sizeof.InputStr(0); j++)
   {


   }
*/ 

