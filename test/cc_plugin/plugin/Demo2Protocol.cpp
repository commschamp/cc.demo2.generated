#include "Demo2Protocol.h"

#include "comms_champion/ProtocolBase.h"
#include "cc_plugin/frame/Frame.h"
#include "cc_plugin/frame/FrameTransportMessage.h"

namespace cc = comms_champion;

namespace demo2
{

namespace cc_plugin
{

namespace plugin
{

class Demo2ProtocolImpl : public
    cc::ProtocolBase<
        demo2::cc_plugin::frame::Frame,
        demo2::cc_plugin::frame::FrameTransportMessage
    >
{
    using Base =
        cc::ProtocolBase<
            demo2::cc_plugin::frame::Frame,
            demo2::cc_plugin::frame::FrameTransportMessage
        >;
public:
    friend class demo2::cc_plugin::plugin::Demo2Protocol;

    Demo2ProtocolImpl() = default;
    virtual ~Demo2ProtocolImpl() = default;

protected:
    virtual const QString& nameImpl() const override
    {
        static const QString Str("demo2");
        return Str;
    }

    using Base::createInvalidMessageImpl;
    using Base::createRawDataMessageImpl;
    using Base::createExtraInfoMessageImpl;
};

Demo2Protocol::Demo2Protocol()
  : m_pImpl(new Demo2ProtocolImpl())
{
}

Demo2Protocol::~Demo2Protocol() = default;

const QString& Demo2Protocol::nameImpl() const
{
    return m_pImpl->name();
}

Demo2Protocol::MessagesList Demo2Protocol::readImpl(const cc::DataInfo& dataInfo, bool final)
{
    return m_pImpl->read(dataInfo, final);
}

cc::DataInfoPtr Demo2Protocol::writeImpl(cc::Message& msg)
{
    return m_pImpl->write(msg);
}

Demo2Protocol::MessagesList Demo2Protocol::createAllMessagesImpl()
{
    return m_pImpl->createAllMessages();
}

cc::MessagePtr Demo2Protocol::createMessageImpl(const QString& idAsString, unsigned idx)
{
    return static_cast<cc::Protocol*>(m_pImpl.get())->createMessage(idAsString, idx);
}

Demo2Protocol::UpdateStatus Demo2Protocol::updateMessageImpl(cc::Message& msg)
{
    return m_pImpl->updateMessage(msg);
}

cc::MessagePtr Demo2Protocol::cloneMessageImpl(const cc::Message& msg)
{
    return m_pImpl->cloneMessage(msg);
}

cc::MessagePtr Demo2Protocol::createInvalidMessageImpl()
{
    return m_pImpl->createInvalidMessageImpl();
}

cc::MessagePtr Demo2Protocol::createRawDataMessageImpl()
{
    return m_pImpl->createRawDataMessageImpl();
}

cc::MessagePtr Demo2Protocol::createExtraInfoMessageImpl()
{
    return m_pImpl->createExtraInfoMessageImpl();
}

} // namespace plugin

} // namespace cc_plugin

} // namespace demo2


