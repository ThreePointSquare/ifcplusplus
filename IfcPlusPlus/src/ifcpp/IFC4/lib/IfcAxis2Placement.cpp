/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement.h"

// TYPE IfcAxis2Placement = SELECT	(IfcAxis2Placement2D	,IfcAxis2Placement3D);
shared_ptr<IfcAxis2Placement> IfcAxis2Placement::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.size() == 0 ){ return shared_ptr<IfcAxis2Placement>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcAxis2Placement>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcAxis2Placement>();
	}
	shared_ptr<IfcAxis2Placement> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}