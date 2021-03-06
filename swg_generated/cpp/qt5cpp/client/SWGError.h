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

/*
 * SWGError.h
 *
 * 
 */

#ifndef SWGError_H_
#define SWGError_H_

#include <QJsonObject>


#include "SWGErrorInfo.h"

#include "SWGObject.h"

namespace Swagger {

class SWGError: public SWGObject {
public:
    SWGError();
    SWGError(QString json);
    ~SWGError();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    SWGError* fromJson(QString jsonString) override;

    SWGErrorInfo* getError();
    void setError(SWGErrorInfo* error);


    virtual bool isSet() override;

private:
    SWGErrorInfo* error;
    bool m_error_isSet;

};

}

#endif /* SWGError_H_ */
