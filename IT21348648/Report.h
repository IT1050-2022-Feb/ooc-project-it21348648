class report //Class report
{
    private: //Attributes
    	
        string R_name;
        int R_ID;
        char R_type[10];
        int R_date;
        
    public: //Methods
    
        report();
        
		report(string pR_name, int pR_ID, char pR_type, int R_date);
        void setReportName(string name);
        void setID(int id);
        void setReportType(char type);
        void setDate(int date); 
        Void Display();
        
        ~report(); 
};