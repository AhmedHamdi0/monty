//#include "monty.h"
//
//void free_head(void)
//{
//	if (arguments->head)
//		free_stack(arguments->head);
//
//	arguments->head = NULL;
//}
//
//void free_arguments()
//{
//	if (arguments == NULL)
//		return;
//
//	if (arguments->instruction)
//	{
//		free(arguments->instruction);
//		arguments->instruction = NULL;
//	}
//
//	free_head();
//
//	if (arguments->line)
//	{
//		free(arguments->line);
//		arguments->line = NULL;
//	}
//
//	free(arguments);
//}