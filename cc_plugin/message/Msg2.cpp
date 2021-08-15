// Generated by commsdsl2comms v3.6.4

#include "Msg2.h"

#include "comms_champion/property/field.h"
namespace cc = comms_champion;

namespace demo2
{

namespace cc_plugin
{

namespace message
{

namespace
{

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_f1()
        {
            using Field = demo2::message::Msg2Fields<>::ListMembers::ElementMembers::F1;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_f2()
        {
            using InnerField = demo2::message::Msg2Fields<>::ListMembers::ElementMembers::F2Field;
            auto props =
                cc::property::field::ForField<InnerField>()
                    .name(InnerField::name())
                    .asMap();
            
            using Field = demo2::message::Msg2Fields<>::ListMembers::ElementMembers::F2;
            return
                cc::property::field::ForField<Field>()
                    .name(InnerField::name())
                    .uncheckable()
                    .field(std::move(props))
                    .asMap();
            
        }
        
        static QVariantMap createProps_f3()
        {
            using InnerField = demo2::message::Msg2Fields<>::ListMembers::ElementMembers::F3Field;
            auto props =
                cc::property::field::ForField<InnerField>()
                    .name(InnerField::name())
                    .asMap();
            
            using Field = demo2::message::Msg2Fields<>::ListMembers::ElementMembers::F3;
            return
                cc::property::field::ForField<Field>()
                    .name(InnerField::name())
                    .uncheckable()
                    .field(std::move(props))
                    .asMap();
            
        }
        
        static QVariantMap createProps_f4()
        {
            using InnerField = demo2::message::Msg2Fields<>::ListMembers::ElementMembers::F4Field;
            auto props =
                cc::property::field::ForField<InnerField>()
                    .name(InnerField::name())
                    .asMap();
            
            using Field = demo2::message::Msg2Fields<>::ListMembers::ElementMembers::F4;
            return
                cc::property::field::ForField<Field>()
                    .name(InnerField::name())
                    .uncheckable()
                    .field(std::move(props))
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = demo2::message::Msg2Fields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_f1())
                .add(ElementMembers::createProps_f2())
                .add(ElementMembers::createProps_f3())
                .add(ElementMembers::createProps_f4())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = demo2::message::Msg2Fields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ListMembers::createProps_element())
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_list());
    return props;
}

} // namespace

Msg2::Msg2() = default;
Msg2::~Msg2() = default;
Msg2& Msg2::operator=(const Msg2&) = default;
Msg2& Msg2::operator=(Msg2&&) = default;

const QVariantList& Msg2::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_plugin

} // namespace demo2


