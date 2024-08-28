// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: jobmanagement_ordermanagement.proto
#ifndef GRPC_jobmanagement_5fordermanagement_2eproto__INCLUDED
#define GRPC_jobmanagement_5fordermanagement_2eproto__INCLUDED

#include "jobmanagement_ordermanagement.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc_jobmanagement {

class JobManagement_OrderManagement_Service final {
 public:
  static constexpr char const* service_full_name() {
    return "grpc_jobmanagement.JobManagement_OrderManagement_Service";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status ActOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc_jobmanagement::Reply_Act* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpc_jobmanagement::Reply_Act>> AsyncActOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpc_jobmanagement::Reply_Act>>(AsyncActOrderRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpc_jobmanagement::Reply_Act>> PrepareAsyncActOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpc_jobmanagement::Reply_Act>>(PrepareAsyncActOrderRaw(context, request, cq));
    }
    virtual ::grpc::Status CancelOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc_jobmanagement::Reply_Cancel* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpc_jobmanagement::Reply_Cancel>> AsyncCancelOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpc_jobmanagement::Reply_Cancel>>(AsyncCancelOrderRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpc_jobmanagement::Reply_Cancel>> PrepareAsyncCancelOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpc_jobmanagement::Reply_Cancel>>(PrepareAsyncCancelOrderRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void ActOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Act* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void ActOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Act* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void ActOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Act* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      virtual void CancelOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Cancel* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void CancelOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Cancel* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void CancelOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Cancel* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpc_jobmanagement::Reply_Act>* AsyncActOrderRaw(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpc_jobmanagement::Reply_Act>* PrepareAsyncActOrderRaw(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpc_jobmanagement::Reply_Cancel>* AsyncCancelOrderRaw(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpc_jobmanagement::Reply_Cancel>* PrepareAsyncCancelOrderRaw(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status ActOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc_jobmanagement::Reply_Act* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpc_jobmanagement::Reply_Act>> AsyncActOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpc_jobmanagement::Reply_Act>>(AsyncActOrderRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpc_jobmanagement::Reply_Act>> PrepareAsyncActOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpc_jobmanagement::Reply_Act>>(PrepareAsyncActOrderRaw(context, request, cq));
    }
    ::grpc::Status CancelOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc_jobmanagement::Reply_Cancel* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpc_jobmanagement::Reply_Cancel>> AsyncCancelOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpc_jobmanagement::Reply_Cancel>>(AsyncCancelOrderRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpc_jobmanagement::Reply_Cancel>> PrepareAsyncCancelOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpc_jobmanagement::Reply_Cancel>>(PrepareAsyncCancelOrderRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void ActOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Act* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void ActOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Act* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void ActOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Act* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void CancelOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Cancel* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void CancelOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Cancel* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void CancelOrder(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Cancel* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::grpc_jobmanagement::Reply_Act>* AsyncActOrderRaw(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpc_jobmanagement::Reply_Act>* PrepareAsyncActOrderRaw(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpc_jobmanagement::Reply_Cancel>* AsyncCancelOrderRaw(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpc_jobmanagement::Reply_Cancel>* PrepareAsyncCancelOrderRaw(::grpc::ClientContext* context, const ::grpc_jobmanagement::Request_Order& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_ActOrder_;
    const ::grpc::internal::RpcMethod rpcmethod_CancelOrder_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status ActOrder(::grpc::ServerContext* context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Act* response);
    virtual ::grpc::Status CancelOrder(::grpc::ServerContext* context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Cancel* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_ActOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_ActOrder() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ActOrder() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ActOrder(::grpc::ServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Act* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestActOrder(::grpc::ServerContext* context, ::grpc_jobmanagement::Request_Order* request, ::grpc::ServerAsyncResponseWriter< ::grpc_jobmanagement::Reply_Act>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CancelOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_CancelOrder() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_CancelOrder() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelOrder(::grpc::ServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Cancel* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCancelOrder(::grpc::ServerContext* context, ::grpc_jobmanagement::Request_Order* request, ::grpc::ServerAsyncResponseWriter< ::grpc_jobmanagement::Reply_Cancel>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ActOrder<WithAsyncMethod_CancelOrder<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_ActOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_ActOrder() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc_jobmanagement::Request_Order, ::grpc_jobmanagement::Reply_Act>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Act* response) { return this->ActOrder(context, request, response); }));}
    void SetMessageAllocatorFor_ActOrder(
        ::grpc::experimental::MessageAllocator< ::grpc_jobmanagement::Request_Order, ::grpc_jobmanagement::Reply_Act>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpc_jobmanagement::Request_Order, ::grpc_jobmanagement::Reply_Act>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_ActOrder() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ActOrder(::grpc::ServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Act* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* ActOrder(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Act* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* ActOrder(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Act* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_CancelOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_CancelOrder() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc_jobmanagement::Request_Order, ::grpc_jobmanagement::Reply_Cancel>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc_jobmanagement::Request_Order* request, ::grpc_jobmanagement::Reply_Cancel* response) { return this->CancelOrder(context, request, response); }));}
    void SetMessageAllocatorFor_CancelOrder(
        ::grpc::experimental::MessageAllocator< ::grpc_jobmanagement::Request_Order, ::grpc_jobmanagement::Reply_Cancel>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpc_jobmanagement::Request_Order, ::grpc_jobmanagement::Reply_Cancel>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_CancelOrder() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelOrder(::grpc::ServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Cancel* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* CancelOrder(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Cancel* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* CancelOrder(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Cancel* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_ActOrder<ExperimentalWithCallbackMethod_CancelOrder<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_ActOrder<ExperimentalWithCallbackMethod_CancelOrder<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_ActOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_ActOrder() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ActOrder() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ActOrder(::grpc::ServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Act* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CancelOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_CancelOrder() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_CancelOrder() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelOrder(::grpc::ServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Cancel* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_ActOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_ActOrder() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_ActOrder() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ActOrder(::grpc::ServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Act* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestActOrder(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_CancelOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_CancelOrder() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_CancelOrder() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelOrder(::grpc::ServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Cancel* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCancelOrder(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_ActOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_ActOrder() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->ActOrder(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_ActOrder() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ActOrder(::grpc::ServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Act* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* ActOrder(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* ActOrder(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_CancelOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_CancelOrder() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->CancelOrder(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_CancelOrder() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelOrder(::grpc::ServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Cancel* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* CancelOrder(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* CancelOrder(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ActOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_ActOrder() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpc_jobmanagement::Request_Order, ::grpc_jobmanagement::Reply_Act>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpc_jobmanagement::Request_Order, ::grpc_jobmanagement::Reply_Act>* streamer) {
                       return this->StreamedActOrder(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_ActOrder() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ActOrder(::grpc::ServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Act* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedActOrder(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpc_jobmanagement::Request_Order,::grpc_jobmanagement::Reply_Act>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CancelOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_CancelOrder() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpc_jobmanagement::Request_Order, ::grpc_jobmanagement::Reply_Cancel>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpc_jobmanagement::Request_Order, ::grpc_jobmanagement::Reply_Cancel>* streamer) {
                       return this->StreamedCancelOrder(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_CancelOrder() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CancelOrder(::grpc::ServerContext* /*context*/, const ::grpc_jobmanagement::Request_Order* /*request*/, ::grpc_jobmanagement::Reply_Cancel* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCancelOrder(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpc_jobmanagement::Request_Order,::grpc_jobmanagement::Reply_Cancel>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_ActOrder<WithStreamedUnaryMethod_CancelOrder<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_ActOrder<WithStreamedUnaryMethod_CancelOrder<Service > > StreamedService;
};

}  // namespace grpc_jobmanagement


#endif  // GRPC_jobmanagement_5fordermanagement_2eproto__INCLUDED
