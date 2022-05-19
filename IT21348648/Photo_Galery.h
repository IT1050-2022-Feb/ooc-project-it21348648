class Photo_Gallery //Class Photo Gallery
{

    private: //Attributes
    
        string P_name;
        int P_ID;
        string P_type;

    public: //Methods
    	
		Photo_Gallery();
		
        Photo_Gallery(string pP_name, int pP_ID, string pP_type);
        void setPhotoGalleryName (string name);
        void setID (int id);
        void setPhotoGalleryType (string type);
        Void Display();
        ~Photo_Gallery();
};