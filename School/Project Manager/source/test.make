#File:       test.make#   Target:     test#   Sources:    controller.c#               data_manager.c#               file_parser.c#               list_handler.c#               macabe.c#               report_generator.c#               stat_calculator.c#               table_handler.c#   Created:    Saturday, 27 January 1996 12:36:49 PMOBJECTS = �		controller.c.o �		data_manager.c.o �		file_parser.c.o �		list_handler.c.o �		macabe.c.o �		report_generator.c.o �		stat_calculator.c.o �		table_handler.c.otest �� test.make {OBJECTS}	Link -d -c 'MPS ' -t MPST �		{OBJECTS} �		"{CLibraries}"Clib881.o �		"{CLibraries}"CSANELib881.o �		"{CLibraries}"Math881.o �		#"{CLibraries}"Complex881.o �		"{CLibraries}"StdClib.o �		"{Libraries}"Stubs.o �		"{Libraries}"Runtime.o �		"{Libraries}"Interface.o �		"{Libraries}"ToolLibs.o �		-o testcontroller.c.o � test.make controller.c	 C -r  -mc68020 -mc68881 controller.cdata_manager.c.o � test.make data_manager.c	 C -r  -mc68020 -mc68881 data_manager.cfile_parser.c.o � test.make file_parser.c	 C -r  -mc68020 -mc68881 file_parser.clist_handler.c.o � test.make list_handler.c	 C -r  -mc68020 -mc68881 list_handler.cmacabe.c.o � test.make macabe.c	 C -r  -mc68020 -mc68881 macabe.creport_generator.c.o � test.make report_generator.c	 C -r  -mc68020 -mc68881 report_generator.cstat_calculator.c.o � test.make stat_calculator.c	 C -r  -mc68020 -mc68881 stat_calculator.ctable_handler.c.o � test.make table_handler.c	 C -r  -mc68020 -mc68881 table_handler.c
