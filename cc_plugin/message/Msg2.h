#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "cc_plugin/Message.h"

namespace demo2
{

namespace cc_plugin
{

namespace message
{

class Msg2Impl;
class Msg2 : public demo2::cc_plugin::Message
{
public:
    Msg2();
    Msg2(const Msg2&) = delete;
    Msg2(Msg2&&) = delete;
    virtual ~Msg2();
    Msg2& operator=(const Msg2& other);
    Msg2& operator=(Msg2&&);

protected:
    virtual const char* nameImpl() const override;
    virtual const QVariantList& fieldsPropertiesImpl() const override;
    virtual void dispatchImpl(comms_champion::MessageHandler& handler) override;
    virtual void resetImpl() override;
    virtual bool assignImpl(const comms_champion::Message& other) override;
    virtual MsgIdParamType getIdImpl() const override;
    virtual comms::ErrorStatus readImpl(ReadIterator& iter, std::size_t len) override;
    virtual comms::ErrorStatus writeImpl(WriteIterator& iter, std::size_t len) const override;
    virtual bool validImpl() const override;
    virtual std::size_t lengthImpl() const override;
    virtual bool refreshImpl() override;

private:
    std::unique_ptr<Msg2Impl> m_pImpl;
};

} // namespace message

} // namespace cc_plugin

} // namespace demo2



