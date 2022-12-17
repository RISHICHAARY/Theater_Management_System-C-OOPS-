#include <iostream>
#include <string.h>
using namespace std;
class Theater{
public:
    string name;
    string screen1Name,screen2Name,screen3Name,screen4Name,screen1Status,screen2Status,screen3Status,screen4Status,screen1Movie,screen2Movie,screen3Movie,screen4Movie,screenSelected;
    char screen1Seats[10][20][4]={{"A01","A02","A03","A04","A05","A06","A07","A08","A09","A10","A11","A12","A13","A14","A15","A16","A17","A18","A19","A20"},
    {"B01","B02","B03","B04","B05","B06","B07","B08","B09","B10","B11","B12","B13","B14","B15","B16","B17","B18","B19","B20"}
    ,{"C01","C02","C03","C04","C05","C06","C07","C08","C09","C10","C11","C12","C13","C14","C15","C16","C17","C18","C19","C20"}
    ,{"D01","D02","D03","D04","D05","D06","D07","D08","D09","D10","D11","D12","D13","D14","D15","D16","D17","D18","D19","D20"}
    ,{"E01","E02","E03","E04","E05","E06","E07","E08","E09","E10","E11","E12","E13","E14","E15","E16","E17","E18","E19","E20"}
    ,{"F01","F02","F03","F04","F05","F06","F07","F08","F09","F10","F11","F12","F13","F14","F15","F16","F17","F18","F19","F20"}
    ,{"G01","G02","G03","G04","G05","G06","G07","G08","G09","G10","G11","G12","G13","G14","G15","G16","G17","G18","G19","G20"}
    ,{"H01","H02","H03","H04","H05","H06","H07","H08","H09","H10","H11","H12","H13","H14","H15","H16","H17","H18","H19","H20"}
    ,{"I01","I02","I03","I04","I05","I06","I07","I08","I09","I10","I11","I12","I13","I14","I15","I16","I17","I18","I19","I20"}
    ,{"J01","J02","J03","J04","J05","J06","J07","J08","J09","J10","J11","J12","J13","J14","J15","J16","J17","J18","J19","J20"}};
    char screen2Seats[10][20][4]={{"A01","A02","A03","A04","A05","A06","A07","A08","A09","A10","A11","A12","A13","A14","A15","A16","A17","A18","A19","A20"},
    {"B01","B02","B03","B04","B05","B06","B07","B08","B09","B10","B11","B12","B13","B14","B15","B16","B17","B18","B19","B20"}
    ,{"C01","C02","C03","C04","C05","C06","C07","C08","C09","C10","C11","C12","C13","C14","C15","C16","C17","C18","C19","C20"}
    ,{"D01","D02","D03","D04","D05","D06","D07","D08","D09","D10","D11","D12","D13","D14","D15","D16","D17","D18","D19","D20"}
    ,{"E01","E02","E03","E04","E05","E06","E07","E08","E09","E10","E11","E12","E13","E14","E15","E16","E17","E18","E19","E20"}
    ,{"F01","F02","F03","F04","F05","F06","F07","F08","F09","F10","F11","F12","F13","F14","F15","F16","F17","F18","F19","F20"}
    ,{"G01","G02","G03","G04","G05","G06","G07","G08","G09","G10","G11","G12","G13","G14","G15","G16","G17","G18","G19","G20"}
    ,{"H01","H02","H03","H04","H05","H06","H07","H08","H09","H10","H11","H12","H13","H14","H15","H16","H17","H18","H19","H20"}
    ,{"I01","I02","I03","I04","I05","I06","I07","I08","I09","I10","I11","I12","I13","I14","I15","I16","I17","I18","I19","I20"}
    ,{"J01","J02","J03","J04","J05","J06","J07","J08","J09","J10","J11","J12","J13","J14","J15","J16","J17","J18","J19","J20"}};
    char screen3Seats[10][20][4]={{"A01","A02","A03","A04","A05","A06","A07","A08","A09","A10","A11","A12","A13","A14","A15","A16","A17","A18","A19","A20"},
    {"B01","B02","B03","B04","B05","B06","B07","B08","B09","B10","B11","B12","B13","B14","B15","B16","B17","B18","B19","B20"}
    ,{"C01","C02","C03","C04","C05","C06","C07","C08","C09","C10","C11","C12","C13","C14","C15","C16","C17","C18","C19","C20"}
    ,{"D01","D02","D03","D04","D05","D06","D07","D08","D09","D10","D11","D12","D13","D14","D15","D16","D17","D18","D19","D20"}
    ,{"E01","E02","E03","E04","E05","E06","E07","E08","E09","E10","E11","E12","E13","E14","E15","E16","E17","E18","E19","E20"}
    ,{"F01","F02","F03","F04","F05","F06","F07","F08","F09","F10","F11","F12","F13","F14","F15","F16","F17","F18","F19","F20"}
    ,{"G01","G02","G03","G04","G05","G06","G07","G08","G09","G10","G11","G12","G13","G14","G15","G16","G17","G18","G19","G20"}
    ,{"H01","H02","H03","H04","H05","H06","H07","H08","H09","H10","H11","H12","H13","H14","H15","H16","H17","H18","H19","H20"}
    ,{"I01","I02","I03","I04","I05","I06","I07","I08","I09","I10","I11","I12","I13","I14","I15","I16","I17","I18","I19","I20"}
    ,{"J01","J02","J03","J04","J05","J06","J07","J08","J09","J10","J11","J12","J13","J14","J15","J16","J17","J18","J19","J20"}};
    char screen4Seats[10][20][4]={{"A01","A02","A03","A04","A05","A06","A07","A08","A09","A10","A11","A12","A13","A14","A15","A16","A17","A18","A19","A20"},
    {"B01","B02","B03","B04","B05","B06","B07","B08","B09","B10","B11","B12","B13","B14","B15","B16","B17","B18","B19","B20"}
    ,{"C01","C02","C03","C04","C05","C06","C07","C08","C09","C10","C11","C12","C13","C14","C15","C16","C17","C18","C19","C20"}
    ,{"D01","D02","D03","D04","D05","D06","D07","D08","D09","D10","D11","D12","D13","D14","D15","D16","D17","D18","D19","D20"}
    ,{"E01","E02","E03","E04","E05","E06","E07","E08","E09","E10","E11","E12","E13","E14","E15","E16","E17","E18","E19","E20"}
    ,{"F01","F02","F03","F04","F05","F06","F07","F08","F09","F10","F11","F12","F13","F14","F15","F16","F17","F18","F19","F20"}
    ,{"G01","G02","G03","G04","G05","G06","G07","G08","G09","G10","G11","G12","G13","G14","G15","G16","G17","G18","G19","G20"}
    ,{"H01","H02","H03","H04","H05","H06","H07","H08","H09","H10","H11","H12","H13","H14","H15","H16","H17","H18","H19","H20"}
    ,{"I01","I02","I03","I04","I05","I06","I07","I08","I09","I10","I11","I12","I13","I14","I15","I16","I17","I18","I19","I20"}
    ,{"J01","J02","J03","J04","J05","J06","J07","J08","J09","J10","J11","J12","J13","J14","J15","J16","J17","J18","J19","J20"}};
    Theater(){
    name="Relax Talkies";
    screen1Name="Dandiliones 4k 3D DD(7.1)";
    screen2Name="May 4K DD(5.1)";
    screen3Name="Cherry 8k 7D DD(7.1)";
    screen4Name="PineTree IMAX";
    screen1Status="Open";
    screen2Status="Open";
    screen3Status="Open";
    screen4Status="Open";
    screen1Movie="Movie1";
    screen2Movie="Movie2";
    screen3Movie="Movie3";
    screen4Movie="Movie4";
    }
    void showScreen(){
        cout<<"\t\tWelcome To "<<name<<endl;
        std::string stuff(60, '-');
        std::cout << stuff << std::endl;
        cout<<"Screen No\tScreen Name\t\tScreen Status"<<"\tScreen Movie"<<endl;
        cout<<"  1\t   "<<screen1Name<<"\t      "<<screen1Status<<"\t   "<<screen1Movie<<endl;
        cout<<"  2\t   "<<screen2Name<<"\t              "<<screen2Status<<"\t   "<<screen2Movie<<endl;
        cout<<"  3\t   "<<screen3Name<<"               "<<screen3Status<<"\t   "<<screen3Movie<<endl;
        cout<<"  4\t   "<<screen4Name<<"\t\t      "<<screen4Status<<"\t   "<<screen4Movie<<endl<<endl;
        selectScreen();
    }
    virtual void showSeatLayout()=0;
    void selectScreen(){
        cout<<"Enter Screen Number/(E to Exit): ";
        cin>>screenSelected;
        if(screenSelected == "E"){
            cout<<"Thank You";
        }
        else{
        showSeatLayout();}
    }
};
class Screen: public Theater{
public:
    int i,j;
    string selectedSeat;
    void showSeatLayout(){
        if(screenSelected=="1"){
                cout<<endl<<"Screen: "<<screen1Name<<"\tMovie: "<<screen1Movie<<endl<<endl;
                for(i=0;i<10;i++){
                        for(j=0;j<20;j++){
                            cout<<screen1Seats[i][j]<<" ";
                        }
                        cout<<endl;
                }
        }
        if(screenSelected=="2"){
                cout<<endl<<"Screen: "<<screen2Name<<"\tMovie: "<<screen2Movie<<endl<<endl;
                for(i=0;i<10;i++){
                        for(j=0;j<20;j++){
                            cout<<screen2Seats[i][j]<<" ";
                        }
                        cout<<endl;
                }
        }
        if(screenSelected=="3"){
                cout<<endl<<"Screen: "<<screen3Name<<"\tMovie: "<<screen3Movie<<endl<<endl;
                for(i=0;i<10;i++){
                        for(j=0;j<20;j++){
                            cout<<screen3Seats[i][j]<<" ";
                        }
                        cout<<endl;
                }
        }
        if(screenSelected=="4"){
                cout<<endl<<"Screen: "<<screen4Name<<"\tMovie: "<<screen4Movie<<endl<<endl;
                for(i=0;i<10;i++){
                        for(j=0;j<20;j++){
                            cout<<screen4Seats[i][j]<<" ";
                        }
                        cout<<endl;
                }
        }
    cout<<endl<<endl<<"\t\t\t   Screen This Side"<<endl;
    cout<<"***-->Booked"<<endl<<endl;
    selectSeat();
    }
    void selectSeat(){
        cout<<"Enter Seats/(E to Exit): ";
        cin>>selectedSeat;
        bookSeat();
    }
    void bookSeat(){
        int g=0,h=3;
        if(selectedSeat=="E"){
                cout<<"Thank You";
        }
        else{
        if(screenSelected=="1"){
                for(i=0;i<10;i++){
                    for(j=0;j<20;j++){
                        if(selectedSeat.substr(g,h).find(screen1Seats[i][j])==0){
                            strcpy(screen1Seats[i][j], "***");
                            if(h<=selectedSeat.length()){
                            g+=3;}
                        }
                    }
                }
        }
        if(screenSelected=="2"){
                for(i=0;i<10;i++){
                    for(j=0;j<20;j++){
                        if(selectedSeat.substr(g,h).find(screen2Seats[i][j])==0){
                            strcpy(screen2Seats[i][j], "***");
                            if(h<=selectedSeat.length()){
                            g+=3;}
                        }
                    }
                }
        }
        if(screenSelected=="3"){
                for(i=0;i<10;i++){
                    for(j=0;j<20;j++){
                        if(selectedSeat.substr(g,h).find(screen3Seats[i][j])==0){
                            strcpy(screen3Seats[i][j], "***");
                            if(h<=selectedSeat.length()){
                            g+=3;}
                        }
                    }
                }
        }
        if(screenSelected=="4"){
                for(i=0;i<10;i++){
                    for(j=0;j<20;j++){
                        if(selectedSeat.substr(g,h).find(screen4Seats[i][j])==0){
                            strcpy(screen4Seats[i][j], "***");
                            if(h<=selectedSeat.length()){
                            g+=3;}
                        }
                    }
                }
        }
        cout<<"Seats Booked."<<endl<<endl;
        showScreen();
}
    }
};
void loop();
int main()
{
    Screen Obj;
    Obj.showScreen();
    return 0;
}
void loop(){
    int k=0;
    cout<<"Enter 1 To Get in & 2 To Exit: ";
    cin>>k;
    if(k==1){
    Screen Obj;
    Obj.showScreen();
    Obj.showSeatLayout();
    loop();
    }
    else{cout<<"ThankYou :)";}
}
