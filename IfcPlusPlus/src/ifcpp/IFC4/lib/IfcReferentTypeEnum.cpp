/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcReferentTypeEnum.h"

// TYPE IfcReferentTypeEnum = ENUMERATION OF	(KILOPOINT	,MILEPOINT	,STATION	,USERDEFINED	,NOTDEFINED);
IfcReferentTypeEnum::IfcReferentTypeEnum() {}
IfcReferentTypeEnum::~IfcReferentTypeEnum() {}
shared_ptr<BuildingObject> IfcReferentTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcReferentTypeEnum> copy_self( new IfcReferentTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcReferentTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCREFERENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_KILOPOINT:	stream << ".KILOPOINT."; break;
		case ENUM_MILEPOINT:	stream << ".MILEPOINT."; break;
		case ENUM_STATION:	stream << ".STATION."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcReferentTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_KILOPOINT:	return L"KILOPOINT";
		case ENUM_MILEPOINT:	return L"MILEPOINT";
		case ENUM_STATION:	return L"STATION";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcReferentTypeEnum> IfcReferentTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcReferentTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcReferentTypeEnum>(); }
	shared_ptr<IfcReferentTypeEnum> type_object( new IfcReferentTypeEnum() );
	if( boost::iequals( arg, L".KILOPOINT." ) )
	{
		type_object->m_enum = IfcReferentTypeEnum::ENUM_KILOPOINT;
	}
	else if( boost::iequals( arg, L".MILEPOINT." ) )
	{
		type_object->m_enum = IfcReferentTypeEnum::ENUM_MILEPOINT;
	}
	else if( boost::iequals( arg, L".STATION." ) )
	{
		type_object->m_enum = IfcReferentTypeEnum::ENUM_STATION;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcReferentTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcReferentTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}