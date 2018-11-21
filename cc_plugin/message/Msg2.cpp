#include "Msg2.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "demo2/message/Msg2.h"
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
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_list());
    return props;
}

} // namespace

class Msg2Impl : public
    comms_champion::ProtocolMessageBase<
        demo2::message::Msg2<demo2::cc_plugin::Message>,
        Msg2Impl
    >
{
public:
    Msg2Impl() = default;
    Msg2Impl(const Msg2Impl&) = delete;
    Msg2Impl(Msg2Impl&&) = delete;
    virtual ~Msg2Impl() = default;
    Msg2Impl& operator=(const Msg2Impl&) = default;
    Msg2Impl& operator=(Msg2Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Msg2::Msg2() : m_pImpl(new Msg2Impl) {}
Msg2::~Msg2() = default;

Msg2& Msg2::operator=(const Msg2& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Msg2& Msg2::operator=(Msg2&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Msg2::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Msg2::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Msg2::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Msg2::resetImpl()
{
    m_pImpl->reset();
}

bool Msg2::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Msg2*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Msg2::MsgIdParamType Msg2::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Msg2::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Msg2::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Msg2::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Msg2::lengthImpl() const
{
    return m_pImpl->length();
}

bool Msg2::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace demo2


