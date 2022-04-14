	//Shishir Bishwokarma //UTA ID 1001644424 //CSE 1325

	#include	<gtkmm.h>	
	#include	"register.h"
	#include	<iostream>
	#include	<string>	
	#include	<vector>	
	#include <sstream>
	Person::Person()
	{
	Gtk::Window	w;			//you	will	get	a	warning	if	you	don’t	include	this						
		Gtk::Dialog	*dialog	=	new	Gtk::Dialog();						
		dialog->set_transient_for(w);	//you	will	get	a	warning	if	you	don’t	include	this							
		dialog->set_title("Enter	info...");	


	Gtk::Label	*label	=	new	Gtk::Label("Enter	first	name:");							
	dialog->get_content_area()->pack_start(*label);					
	label->show();	


	dialog->add_button("Cancel",	0);
	dialog->add_button("Convert",1);

	dialog->set_default_response(1);

	Gtk::Entry	*entry_first	=	new	Gtk::Entry();						
	entry_first->set_text("default_text");
	entry_first->set_max_length(50);		
	entry_first->show();		

	dialog->get_vbox()->pack_start(*entry_first);	

	Gtk::Label	*label1	=	new	Gtk::Label("Enter weight:");	
	dialog->get_content_area()->pack_start(*label1);	

	label1->show();
	Gtk::Entry	*entry_last	=	new	Gtk::Entry();	
	entry_last->set_text("default_text");						
		entry_last->set_max_length(50);						
		entry_last->show();					

	dialog->get_vbox()->pack_start(*entry_last);

	int	result	=	dialog->run();	//running	the	dialog	window	
	first_name	=	entry_first->get_text();
	weight = entry_last->get_text();
	//std::stringstream ss ;

	//std::string temp ; 
	//ss <<  entry_last->get_text();	
	//ss >>temp>>weight ; 
	//num = std::stof(temp);

	dialog->close();										
			delete	dialog;					
			delete	label;						
			delete	entry_first;					
			delete	entry_last;			
	}

	
	
	Info_box::Info_box(std::string	first_name,	std::string	weight)	
	{
	set_title("New weight");		
	set_size_request(150,	100);	
	add(vbox);

		label.set_text("First	name:	"+first_name);						
		label.set_padding(10,10);			
		vbox.pack_start(label);
		std:: string newUnit;

	std::stringstream ss ;

	std::string temp ; 
	ss <<  weight	;
	ss >>temp>>newUnit ; 
	float num = std::stof(temp);



		if ( newUnit.compare("pounds")==0)
		{
			newUnit="kilos";
			num = num/2.2046 ;
			label1.set_text("New weight:	"+std::to_string(num)+""+newUnit);		
			label1.set_padding(10,10);		
			vbox.pack_start(label1);
			
		}
		else if ( newUnit.compare("kilos")==0)
		{
			newUnit="pounds";
			num = num*2.2046;
			label1.set_text("New weight:	"+std::to_string(num)+""+newUnit);		
			label1.set_padding(10,10);		
			vbox.pack_start(label1);
		}
		
		else {

				label1.set_text("Not enough data, Please restart ");		
			label1.set_padding(10,10);		
			vbox.pack_start(label1);
		}
		
			

			ok_button.set_label("Okay");	
			ok_button.signal_pressed().connect(sigc::mem_fun(*this,&Info_box::ok_function));

				vbox.pack_start(ok_button);							
				show_all_children();



	}

		Info_box::~Info_box(){};


			void	Info_box::ok_function()	
				{			
							hide();	
					}	
		