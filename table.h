typedef int (*GeneralFunction)();

typedef struct{
	VTable *vptr;
	int num;
}Base;
typedef struct{
	Base m_base;
	char name;;
}Derived;
typedef struct{
	Derived m_derived;
	int age;
}DeDerived;

typedef GeneralFunction[] vTable;

v_table Base_table={
	(GeneralFunction)pureVirtualCallError, 
	(GeneralFunction)Base_view
};
v_table Derived_table={
	(GeneralFunction)Base_print, 
	(GeneralFunction)Derived_view
};
v_table DeDerived_table={
	(GeneralFunction)DeDerived_print, 
	(GeneralFunction)Derived_view,
	(GeneralFunction)DeDerived_show
};

void DeDerived_DeDerived(DeDerived* this)
{
	Derived_Derived(this->m_derived);
	this->m_derived->m_base.vptr=DeDerived_table;
	/*initialize members*/
	this->age=88;
	/*do whatever done in curly braces*/
}
void Derived_Derived(DeDerived* this)
{
	Base_Base(this->m_Base);
	this->m_base.vptr=Derived_table;
	/*initialize members*/
	this->name="noname";
	/*do whatever done in curly braces*/
}
/*
typedef struct
{
}vTable;
*/
