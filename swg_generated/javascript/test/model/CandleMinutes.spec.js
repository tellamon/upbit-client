/*
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.1.6
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.4.17
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.UpbitOpenApi);
  }
}(this, function(expect, UpbitOpenApi) {
  'use strict';

  var instance;

  describe('(package)', function() {
    describe('CandleMinutes', function() {
      beforeEach(function() {
        instance = new UpbitOpenApi.CandleMinutes();
      });

      it('should create an instance of CandleMinutes', function() {
        // TODO: update the code to test CandleMinutes
        expect(instance).to.be.a(UpbitOpenApi.CandleMinutes);
      });

      it('should have the property market (base name: "market")', function() {
        // TODO: update the code to test the property market
        expect(instance).to.have.property('market');
        // expect(instance.market).to.be(expectedValueLiteral);
      });

      it('should have the property candleDateTimeUtc (base name: "candle_date_time_utc")', function() {
        // TODO: update the code to test the property candleDateTimeUtc
        expect(instance).to.have.property('candleDateTimeUtc');
        // expect(instance.candleDateTimeUtc).to.be(expectedValueLiteral);
      });

      it('should have the property candleDateTimeKst (base name: "candle_date_time_kst")', function() {
        // TODO: update the code to test the property candleDateTimeKst
        expect(instance).to.have.property('candleDateTimeKst');
        // expect(instance.candleDateTimeKst).to.be(expectedValueLiteral);
      });

      it('should have the property openingPrice (base name: "opening_price")', function() {
        // TODO: update the code to test the property openingPrice
        expect(instance).to.have.property('openingPrice');
        // expect(instance.openingPrice).to.be(expectedValueLiteral);
      });

      it('should have the property highPrice (base name: "high_price")', function() {
        // TODO: update the code to test the property highPrice
        expect(instance).to.have.property('highPrice');
        // expect(instance.highPrice).to.be(expectedValueLiteral);
      });

      it('should have the property lowPrice (base name: "low_price")', function() {
        // TODO: update the code to test the property lowPrice
        expect(instance).to.have.property('lowPrice');
        // expect(instance.lowPrice).to.be(expectedValueLiteral);
      });

      it('should have the property tradePrice (base name: "trade_price")', function() {
        // TODO: update the code to test the property tradePrice
        expect(instance).to.have.property('tradePrice');
        // expect(instance.tradePrice).to.be(expectedValueLiteral);
      });

      it('should have the property timestamp (base name: "timestamp")', function() {
        // TODO: update the code to test the property timestamp
        expect(instance).to.have.property('timestamp');
        // expect(instance.timestamp).to.be(expectedValueLiteral);
      });

      it('should have the property candleAccTradePrice (base name: "candle_acc_trade_price")', function() {
        // TODO: update the code to test the property candleAccTradePrice
        expect(instance).to.have.property('candleAccTradePrice');
        // expect(instance.candleAccTradePrice).to.be(expectedValueLiteral);
      });

      it('should have the property candleAccTradeVolume (base name: "candle_acc_trade_volume")', function() {
        // TODO: update the code to test the property candleAccTradeVolume
        expect(instance).to.have.property('candleAccTradeVolume');
        // expect(instance.candleAccTradeVolume).to.be(expectedValueLiteral);
      });

      it('should have the property unit (base name: "unit")', function() {
        // TODO: update the code to test the property unit
        expect(instance).to.have.property('unit');
        // expect(instance.unit).to.be(expectedValueLiteral);
      });

    });
  });

}));