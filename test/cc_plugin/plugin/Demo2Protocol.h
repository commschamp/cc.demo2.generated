#pragma once

#include "comms_champion/Protocol.h"

namespace demo2
{

namespace cc_plugin
{

namespace plugin
{

class Demo2ProtocolImpl;
class Demo2Protocol : public comms_champion::Protocol
{
public:
    Demo2Protocol();
    virtual ~Demo2Protocol();

protected:
    virtual const QString& nameImpl() const override;
    virtual MessagesList readImpl(const comms_champion::DataInfo& dataInfo, bool final) override;
    virtual comms_champion::DataInfoPtr writeImpl(comms_champion::Message& msg) override;
    virtual MessagesList createAllMessagesImpl() override;
    virtual comms_champion::MessagePtr createMessageImpl(const QString& idAsString, unsigned idx) override;
    virtual UpdateStatus updateMessageImpl(comms_champion::Message& msg) override;
    virtual comms_champion::MessagePtr cloneMessageImpl(const comms_champion::Message& msg) override;
    virtual comms_champion::MessagePtr createInvalidMessageImpl() override;
    virtual comms_champion::MessagePtr createRawDataMessageImpl() override;
    virtual comms_champion::MessagePtr createExtraInfoMessageImpl() override;

private:
    std::unique_ptr<Demo2ProtocolImpl> m_pImpl;
};

} // namespace plugin

} // namespace cc_plugin

} // namespace demo2

