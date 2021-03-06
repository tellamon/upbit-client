/**
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGOrderbookUnit.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGOrderbookUnit::SWGOrderbookUnit(QString json) {
    init();
    this->fromJson(json);
}

SWGOrderbookUnit::SWGOrderbookUnit() {
    init();
}

SWGOrderbookUnit::~SWGOrderbookUnit() {
    this->cleanup();
}

void
SWGOrderbookUnit::init() {
    ask_price = 0.0;
    m_ask_price_isSet = false;
    bid_price = 0.0;
    m_bid_price_isSet = false;
    ask_size = 0.0;
    m_ask_size_isSet = false;
    bid_size = 0.0;
    m_bid_size_isSet = false;
}

void
SWGOrderbookUnit::cleanup() {




}

SWGOrderbookUnit*
SWGOrderbookUnit::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGOrderbookUnit::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&ask_price, pJson["ask_price"], "double", "");
    
    ::Swagger::setValue(&bid_price, pJson["bid_price"], "double", "");
    
    ::Swagger::setValue(&ask_size, pJson["ask_size"], "double", "");
    
    ::Swagger::setValue(&bid_size, pJson["bid_size"], "double", "");
    
}

QString
SWGOrderbookUnit::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGOrderbookUnit::asJsonObject() {
    QJsonObject obj;
    if(m_ask_price_isSet){
        obj.insert("ask_price", QJsonValue(ask_price));
    }
    if(m_bid_price_isSet){
        obj.insert("bid_price", QJsonValue(bid_price));
    }
    if(m_ask_size_isSet){
        obj.insert("ask_size", QJsonValue(ask_size));
    }
    if(m_bid_size_isSet){
        obj.insert("bid_size", QJsonValue(bid_size));
    }

    return obj;
}

double
SWGOrderbookUnit::getAskPrice() {
    return ask_price;
}
void
SWGOrderbookUnit::setAskPrice(double ask_price) {
    this->ask_price = ask_price;
    this->m_ask_price_isSet = true;
}

double
SWGOrderbookUnit::getBidPrice() {
    return bid_price;
}
void
SWGOrderbookUnit::setBidPrice(double bid_price) {
    this->bid_price = bid_price;
    this->m_bid_price_isSet = true;
}

double
SWGOrderbookUnit::getAskSize() {
    return ask_size;
}
void
SWGOrderbookUnit::setAskSize(double ask_size) {
    this->ask_size = ask_size;
    this->m_ask_size_isSet = true;
}

double
SWGOrderbookUnit::getBidSize() {
    return bid_size;
}
void
SWGOrderbookUnit::setBidSize(double bid_size) {
    this->bid_size = bid_size;
    this->m_bid_size_isSet = true;
}


bool
SWGOrderbookUnit::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_ask_price_isSet){ isObjectUpdated = true; break;}
        if(m_bid_price_isSet){ isObjectUpdated = true; break;}
        if(m_ask_size_isSet){ isObjectUpdated = true; break;}
        if(m_bid_size_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

