/**
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.18.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "Wallet.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Wallet::Wallet()
{
    m_Currency = utility::conversions::to_string_t("");
    m_CurrencyIsSet = false;
    m_Wallet_state = utility::conversions::to_string_t("");
    m_Wallet_stateIsSet = false;
    m_Block_state = utility::conversions::to_string_t("");
    m_Block_stateIsSet = false;
    m_Block_height = 0.0;
    m_Block_heightIsSet = false;
    m_Block_updated_at = utility::conversions::to_string_t("");
    m_Block_updated_atIsSet = false;
}

Wallet::~Wallet()
{
}

void Wallet::validate()
{
    // TODO: implement validation
}

web::json::value Wallet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CurrencyIsSet)
    {
        val[utility::conversions::to_string_t("currency")] = ModelBase::toJson(m_Currency);
    }
    if(m_Wallet_stateIsSet)
    {
        val[utility::conversions::to_string_t("wallet_state")] = ModelBase::toJson(m_Wallet_state);
    }
    if(m_Block_stateIsSet)
    {
        val[utility::conversions::to_string_t("block_state")] = ModelBase::toJson(m_Block_state);
    }
    if(m_Block_heightIsSet)
    {
        val[utility::conversions::to_string_t("block_height")] = ModelBase::toJson(m_Block_height);
    }
    if(m_Block_updated_atIsSet)
    {
        val[utility::conversions::to_string_t("block_updated_at")] = ModelBase::toJson(m_Block_updated_at);
    }

    return val;
}

void Wallet::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("currency")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("currency")];
        if(!fieldValue.is_null())
        {
            setCurrency(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wallet_state")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("wallet_state")];
        if(!fieldValue.is_null())
        {
            setWalletState(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_state")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("block_state")];
        if(!fieldValue.is_null())
        {
            setBlockState(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_height")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("block_height")];
        if(!fieldValue.is_null())
        {
            setBlockHeight(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_updated_at")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("block_updated_at")];
        if(!fieldValue.is_null())
        {
            setBlockUpdatedAt(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void Wallet::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_CurrencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currency"), m_Currency));
        
    }
    if(m_Wallet_stateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("wallet_state"), m_Wallet_state));
        
    }
    if(m_Block_stateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("block_state"), m_Block_state));
        
    }
    if(m_Block_heightIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("block_height"), m_Block_height));
    }
    if(m_Block_updated_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("block_updated_at"), m_Block_updated_at));
        
    }
}

void Wallet::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("currency")))
    {
        setCurrency(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("currency"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("wallet_state")))
    {
        setWalletState(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("wallet_state"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("block_state")))
    {
        setBlockState(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("block_state"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("block_height")))
    {
        setBlockHeight(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("block_height"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("block_updated_at")))
    {
        setBlockUpdatedAt(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("block_updated_at"))));
    }
}

utility::string_t Wallet::getCurrency() const
{
    return m_Currency;
}


void Wallet::setCurrency(utility::string_t value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}
bool Wallet::currencyIsSet() const
{
    return m_CurrencyIsSet;
}

void Wallet::unsetCurrency()
{
    m_CurrencyIsSet = false;
}

utility::string_t Wallet::getWalletState() const
{
    return m_Wallet_state;
}


void Wallet::setWalletState(utility::string_t value)
{
    m_Wallet_state = value;
    m_Wallet_stateIsSet = true;
}
bool Wallet::walletStateIsSet() const
{
    return m_Wallet_stateIsSet;
}

void Wallet::unsetWallet_state()
{
    m_Wallet_stateIsSet = false;
}

utility::string_t Wallet::getBlockState() const
{
    return m_Block_state;
}


void Wallet::setBlockState(utility::string_t value)
{
    m_Block_state = value;
    m_Block_stateIsSet = true;
}
bool Wallet::blockStateIsSet() const
{
    return m_Block_stateIsSet;
}

void Wallet::unsetBlock_state()
{
    m_Block_stateIsSet = false;
}

double Wallet::getBlockHeight() const
{
    return m_Block_height;
}


void Wallet::setBlockHeight(double value)
{
    m_Block_height = value;
    m_Block_heightIsSet = true;
}
bool Wallet::blockHeightIsSet() const
{
    return m_Block_heightIsSet;
}

void Wallet::unsetBlock_height()
{
    m_Block_heightIsSet = false;
}

utility::string_t Wallet::getBlockUpdatedAt() const
{
    return m_Block_updated_at;
}


void Wallet::setBlockUpdatedAt(utility::string_t value)
{
    m_Block_updated_at = value;
    m_Block_updated_atIsSet = true;
}
bool Wallet::blockUpdatedAtIsSet() const
{
    return m_Block_updated_atIsSet;
}

void Wallet::unsetBlock_updated_at()
{
    m_Block_updated_atIsSet = false;
}

}
}
}
}
