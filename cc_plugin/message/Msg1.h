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

class Msg1Impl;
class Msg1 : public demo2::cc_plugin::Message
{
public:
    Msg1();
    Msg1(const Msg1&) = delete;
    Msg1(Msg1&&) = delete;
    virtual ~Msg1();
    Msg1& operator=(const Msg1& other);
    Msg1& operator=(Msg1&&);

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
    std::unique_ptr<Msg1Impl> m_pImpl;
};

} // namespace message

} // namespace cc_plugin

} // namespace demo2


