    //Shishir Bishwokarma //UTA ID 1001644424 //CSE 1325

    #ifndef	REGISTER_H	#define	REGISTER_H	
        
    #include	<gtkmm.h>	
        
        
    class	Person{	
        
    public:		
    std::string	first_name;	
        std::string	weight;	
        
        
        Person();	};	
        
        
        
    class	Info_box:public	Gtk::Window{	
        
    public:		
    Info_box(std::string first_name,	std::string	weight);	
        
        virtual	~Info_box();	
        
        Gtk::Label	label,	label1;
        Gtk::Button	ok_button;	
        Gtk::Grid	grid;	
        Gtk::VBox	vbox;	
        Gtk::HBox	hbox;	
        
    protected:		void	ok_function();	
        
    };	
        
    #endif	