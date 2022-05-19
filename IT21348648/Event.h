class event //Class event 
{
    private: //Attributes
    	
        string E_name;
        int E_ID;
        string E_rype;
        string location;

    public:
        event(); 
        
        event (string peName, int pE_ID, char pE_type, string pLocation);
        void setEventName(string name);
        void setID(int id);
        void setEventType(char type);
        void setLocation(string loc);
        void display();
        ~event();
        
};