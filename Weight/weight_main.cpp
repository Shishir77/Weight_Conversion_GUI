	
		//Shishir Bishwokarma //UTA ID 1001644424 //CSE 1325
	#include	<gtkmm.h>	
	#include	"register.h"	

		
	int	main(int	argc,	char	**argv)	{	


				Gtk::Main	app(argc,	argv);
							Person	p;	
		
			Info_box	window(p.first_name,	p.weight);		
						Gtk::Main::run(window);					
			return	0;
							
						
				}	
		