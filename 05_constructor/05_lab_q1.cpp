

#include<iostream>

using namespace std;

class DiamondCompany{

  private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    int comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;


    public:
     DiamondCompany(int id, string name, int staff, int revenue, int import_raw_diamonds, int export_diamonds, string ceo)
    {

        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff;
        comp_revenue = revenue;
        comp_import_raw_diamonds = import_raw_diamonds;
        comp_export_diamonds = export_diamonds;
        comp_ceo = ceo;
    };


      void getCompanyDetails()
    {

        cout << " company id                  : " << comp_id << endl;
        cout << " company name                : " << comp_name << endl;
        cout << " company staff quantity      : " << comp_staff_quantity << endl;
        cout << " company revenue             : " << comp_revenue << endl;
        cout << " company import raw diamonds : " << comp_import_raw_diamonds << endl;
        cout << " company export diamonds     : " << comp_export_diamonds << endl;
        cout << " company CEO name            : " << comp_ceo << endl;
    }
};



int main (){

    cout<<"enter number of company ";

    int n;

    cin >> n;

       DiamondCompany *arr[n];

    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    int comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

    for (int i=0; i< n;i++)
    {

        cout << "enter company id " << endl;
        cin >> comp_id;
        cin.ignore();

        cout << "enter company name " << endl;
        getline(cin, comp_name);

        cout << "enter company staff quantity " << endl;
        cin >> comp_staff_quantity;
        cin.ignore();

        cout << "enter company revenue " << endl;
        cin >> comp_revenue;
        cin.ignore();

        cout << "enter company import diamonds " << endl;
        cin >> comp_import_raw_diamonds;
        cin.ignore();

        cout << "enter company export diamonds " << endl;
        cin >> comp_export_diamonds;
        cin.ignore();

        cout << "enter company CEO name " << endl;
        getline(cin, comp_ceo);

        cout<<endl;

        arr[i] = new DiamondCompany(comp_id, comp_name, comp_staff_quantity, comp_revenue, comp_import_raw_diamonds, comp_export_diamonds, comp_ceo);
    }

    cout << "company details mention below " << endl;



    for (int i=0;i<n;i++)
    {

        arr[i]->getCompanyDetails();
        cout<<endl;
        
    }

    return 0;

}