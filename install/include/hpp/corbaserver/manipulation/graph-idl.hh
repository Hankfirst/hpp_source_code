// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __graph_hh__
#define __graph_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_graph
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_graph
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_graph
#endif



#ifndef __gcommon_hh_EXTERNAL_GUARD__
#define __gcommon_hh_EXTERNAL_GUARD__
#include <hpp/corbaserver/manipulation/gcommon-idl.hh>
#endif
#ifndef __common_hh_EXTERNAL_GUARD__
#define __common_hh_EXTERNAL_GUARD__
#include <hpp/common-idl.hh>
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





_CORBA_MODULE hpp

_CORBA_MODULE_BEG

  _CORBA_MODULE corbaserver

  _CORBA_MODULE_BEG

    _CORBA_MODULE manipulation

    _CORBA_MODULE_BEG

      class Namess_t_var;

      class Namess_t : public _CORBA_Unbounded_Sequence< Names_t >  {
      public:
        typedef Namess_t_var _var_type;
        inline Namess_t() {}
        inline Namess_t(const Namess_t& _s)
          : _CORBA_Unbounded_Sequence< Names_t > (_s) {}

        inline Namess_t(_CORBA_ULong _max)
          : _CORBA_Unbounded_Sequence< Names_t > (_max) {}
        inline Namess_t(_CORBA_ULong _max, _CORBA_ULong _len, Names_t* _val, _CORBA_Boolean _rel=0)
          : _CORBA_Unbounded_Sequence< Names_t > (_max, _len, _val, _rel) {}

      

        inline Namess_t& operator = (const Namess_t& _s) {
          _CORBA_Unbounded_Sequence< Names_t > ::operator=(_s);
          return *this;
        }
      };

      class Namess_t_out;

      class Namess_t_var {
      public:
        inline Namess_t_var() : _pd_seq(0) {}
        inline Namess_t_var(Namess_t* _s) : _pd_seq(_s) {}
        inline Namess_t_var(const Namess_t_var& _s) {
          if( _s._pd_seq )  _pd_seq = new Namess_t(*_s._pd_seq);
          else              _pd_seq = 0;
        }
        inline ~Namess_t_var() { if( _pd_seq )  delete _pd_seq; }
          
        inline Namess_t_var& operator = (Namess_t* _s) {
          if( _pd_seq )  delete _pd_seq;
          _pd_seq = _s;
          return *this;
        }
        inline Namess_t_var& operator = (const Namess_t_var& _s) {
          if( _s._pd_seq ) {
            if( !_pd_seq )  _pd_seq = new Namess_t;
            *_pd_seq = *_s._pd_seq;
          } else if( _pd_seq ) {
            delete _pd_seq;
            _pd_seq = 0;
          }
          return *this;
        }
        inline Names_t& operator [] (_CORBA_ULong _s) {
          return (*_pd_seq)[_s];
        }

      

        inline Namess_t* operator -> () { return _pd_seq; }
        inline const Namess_t* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
        inline operator Namess_t& () const { return *_pd_seq; }
#else
        inline operator const Namess_t& () const { return *_pd_seq; }
        inline operator Namess_t& () { return *_pd_seq; }
#endif
          
        inline const Namess_t& in() const { return *_pd_seq; }
        inline Namess_t&       inout()    { return *_pd_seq; }
        inline Namess_t*&      out() {
          if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
          return _pd_seq;
        }
        inline Namess_t* _retn() { Namess_t* tmp = _pd_seq; _pd_seq = 0; return tmp; }
          
        friend class Namess_t_out;
        
      private:
        Namess_t* _pd_seq;
      };

      class Namess_t_out {
      public:
        inline Namess_t_out(Namess_t*& _s) : _data(_s) { _data = 0; }
        inline Namess_t_out(Namess_t_var& _s)
          : _data(_s._pd_seq) { _s = (Namess_t*) 0; }
        inline Namess_t_out(const Namess_t_out& _s) : _data(_s._data) {}
        inline Namess_t_out& operator = (const Namess_t_out& _s) {
          _data = _s._data;
          return *this;
        }
        inline Namess_t_out& operator = (Namess_t* _s) {
          _data = _s;
          return *this;
        }
        inline operator Namess_t*&()  { return _data; }
        inline Namess_t*& ptr()       { return _data; }
        inline Namess_t* operator->() { return _data; }

        inline Names_t& operator [] (_CORBA_ULong _i) {
          return (*_data)[_i];
        }

      

        Namess_t*& _data;

      private:
        Namess_t_out();
        Namess_t_out& operator=(const Namess_t_var&);
      };

      struct Rule {
        typedef _CORBA_ConstrType_Variable_Var<Rule> _var_type;

        
        Names_t grippers;

        Names_t handles;

        ::CORBA::Boolean link;

      

        void operator>>= (cdrStream &) const;
        void operator<<= (cdrStream &);
      };

      typedef Rule::_var_type Rule_var;

      typedef _CORBA_ConstrType_Variable_OUT_arg< Rule,Rule_var > Rule_out;

      class Rules_var;

      class Rules : public _CORBA_Unbounded_Sequence< Rule >  {
      public:
        typedef Rules_var _var_type;
        inline Rules() {}
        inline Rules(const Rules& _s)
          : _CORBA_Unbounded_Sequence< Rule > (_s) {}

        inline Rules(_CORBA_ULong _max)
          : _CORBA_Unbounded_Sequence< Rule > (_max) {}
        inline Rules(_CORBA_ULong _max, _CORBA_ULong _len, Rule* _val, _CORBA_Boolean _rel=0)
          : _CORBA_Unbounded_Sequence< Rule > (_max, _len, _val, _rel) {}

      

        inline Rules& operator = (const Rules& _s) {
          _CORBA_Unbounded_Sequence< Rule > ::operator=(_s);
          return *this;
        }
      };

      class Rules_out;

      class Rules_var {
      public:
        inline Rules_var() : _pd_seq(0) {}
        inline Rules_var(Rules* _s) : _pd_seq(_s) {}
        inline Rules_var(const Rules_var& _s) {
          if( _s._pd_seq )  _pd_seq = new Rules(*_s._pd_seq);
          else              _pd_seq = 0;
        }
        inline ~Rules_var() { if( _pd_seq )  delete _pd_seq; }
          
        inline Rules_var& operator = (Rules* _s) {
          if( _pd_seq )  delete _pd_seq;
          _pd_seq = _s;
          return *this;
        }
        inline Rules_var& operator = (const Rules_var& _s) {
          if( _s._pd_seq ) {
            if( !_pd_seq )  _pd_seq = new Rules;
            *_pd_seq = *_s._pd_seq;
          } else if( _pd_seq ) {
            delete _pd_seq;
            _pd_seq = 0;
          }
          return *this;
        }
        inline Rule& operator [] (_CORBA_ULong _s) {
          return (*_pd_seq)[_s];
        }

      

        inline Rules* operator -> () { return _pd_seq; }
        inline const Rules* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
        inline operator Rules& () const { return *_pd_seq; }
#else
        inline operator const Rules& () const { return *_pd_seq; }
        inline operator Rules& () { return *_pd_seq; }
#endif
          
        inline const Rules& in() const { return *_pd_seq; }
        inline Rules&       inout()    { return *_pd_seq; }
        inline Rules*&      out() {
          if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
          return _pd_seq;
        }
        inline Rules* _retn() { Rules* tmp = _pd_seq; _pd_seq = 0; return tmp; }
          
        friend class Rules_out;
        
      private:
        Rules* _pd_seq;
      };

      class Rules_out {
      public:
        inline Rules_out(Rules*& _s) : _data(_s) { _data = 0; }
        inline Rules_out(Rules_var& _s)
          : _data(_s._pd_seq) { _s = (Rules*) 0; }
        inline Rules_out(const Rules_out& _s) : _data(_s._data) {}
        inline Rules_out& operator = (const Rules_out& _s) {
          _data = _s._data;
          return *this;
        }
        inline Rules_out& operator = (Rules* _s) {
          _data = _s;
          return *this;
        }
        inline operator Rules*&()  { return _data; }
        inline Rules*& ptr()       { return _data; }
        inline Rules* operator->() { return _data; }

        inline Rule& operator [] (_CORBA_ULong _i) {
          return (*_data)[_i];
        }

      

        Rules*& _data;

      private:
        Rules_out();
        Rules_out& operator=(const Rules_var&);
      };

#ifndef __hpp_mcorbaserver_mmanipulation_mGraph__
#define __hpp_mcorbaserver_mmanipulation_mGraph__

      class Graph;
      class _objref_Graph;
      class _impl_Graph;
      
      typedef _objref_Graph* Graph_ptr;
      typedef Graph_ptr GraphRef;

      class Graph_Helper {
      public:
        typedef Graph_ptr _ptr_type;

        static _ptr_type _nil();
        static _CORBA_Boolean is_nil(_ptr_type);
        static void release(_ptr_type);
        static void duplicate(_ptr_type);
        static void marshalObjRef(_ptr_type, cdrStream&);
        static _ptr_type unmarshalObjRef(cdrStream&);
      };

      typedef _CORBA_ObjRef_Var<_objref_Graph, Graph_Helper> Graph_var;
      typedef _CORBA_ObjRef_OUT_arg<_objref_Graph,Graph_Helper > Graph_out;

#endif

      // interface Graph
      class Graph {
      public:
        // Declarations for this interface type.
        typedef Graph_ptr _ptr_type;
        typedef Graph_var _var_type;

        static _ptr_type _duplicate(_ptr_type);
        static _ptr_type _narrow(::CORBA::Object_ptr);
        static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
        
        static _ptr_type _nil();

        static inline void _marshalObjRef(_ptr_type, cdrStream&);

        static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
          omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
          if (o)
            return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
          else
            return _nil();
        }

        static _core_attr const char* _PD_repoId;

        // Other IDL defined within this scope.
        
      };

      class _objref_Graph :
        public virtual ::CORBA::Object,
        public virtual omniObjRef
      {
      public:
        ::CORBA::Long createGraph(const char* graphName);
        void deleteGraph(const char* graphName);
        void selectGraph(const char* graphName);
        ::CORBA::Long createSubGraph(const char* subgraphName);
        void setTargetNodeList(::hpp::ID subgraph, const ::hpp::IDseq& nodes);
        ::CORBA::Long createNode(::CORBA::Long subGraphId, const char* nodeName, ::CORBA::Boolean waypoint, ::CORBA::Long priority);
        ::CORBA::Long createEdge(::CORBA::Long nodeFromId, ::CORBA::Long nodeToId, const char* edgeName, ::CORBA::Long weight, ::CORBA::Long isInNodeId);
        void setContainingNode(::hpp::ID edgeId, ::hpp::ID nodeId);
        char* getContainingNode(::hpp::ID edgeId);
        ::CORBA::Long createWaypointEdge(::CORBA::Long nodeFromId, ::CORBA::Long nodeToId, const char* edgeName, ::CORBA::Long number, ::CORBA::Long weight, ::CORBA::Long isInNode);
        ::CORBA::Long getWaypoint(::CORBA::Long edgeId, ::CORBA::Long index, ::hpp::ID& nodeId);
        void setWaypoint(::hpp::ID waypointEdgeId, ::CORBA::Long index, ::hpp::ID edgeId, ::hpp::ID nodeId);
        void getGraph(::hpp::GraphComp_out graph, ::hpp::GraphElements_out elmts);
        void getEdgeStat(::hpp::ID edgeId, ::hpp::Names_t_out reasons, ::hpp::intSeq_out freqs);
        ::CORBA::Long getFrequencyOfNodeInRoadmap(::hpp::ID nodeId, ::hpp::intSeq_out freqPerConnectedComponent);
        ::CORBA::Boolean getConfigProjectorStats(::hpp::ID elmt, ::hpp::ConfigProjStat& config, ::hpp::ConfigProjStat& path);
        ::CORBA::Long createLevelSetEdge(::CORBA::Long nodeFromId, ::CORBA::Long nodeToId, const char* edgeName, ::CORBA::Long weight, ::hpp::ID isInNodeId);
        void setLevelSetFoliation(::CORBA::Long edgeId, const ::hpp::Names_t& condNC, const ::hpp::Names_t& condLJ, const ::hpp::Names_t& paramNC, const ::hpp::Names_t& paramPassiveJoints, const ::hpp::Names_t& paramLJ);
        void addLevelSetFoliation(::CORBA::Long edgeId, const ::hpp::Names_t& condNC, const ::hpp::Names_t& condLJ, const ::hpp::Names_t& paramNC, const ::hpp::Names_t& paramPassiveJoints, const ::hpp::Names_t& paramLJ);
        void resetConstraints(::CORBA::Long graphComponentId);
        void setNumericalConstraints(::CORBA::Long graphComponentId, const ::hpp::Names_t& constraintNames, const ::hpp::Names_t& passiveDofsNames);
        void addNumericalConstraints(::CORBA::Long graphComponentId, const ::hpp::Names_t& constraintNames, const ::hpp::Names_t& passiveDofsNames);
        void getNumericalConstraints(::CORBA::Long graphComponentId, ::hpp::Names_t_out constraintNames);
        void getLockedJoints(::CORBA::Long graphComponentId, ::hpp::Names_t_out constraintNames);
        void setNumericalConstraintsForPath(::CORBA::Long nodeId, const ::hpp::Names_t& constraintNames, const ::hpp::Names_t& passiveDofsNames);
        void addNumericalConstraintsForPath(::CORBA::Long nodeId, const ::hpp::Names_t& constraintNames, const ::hpp::Names_t& passiveDofsNames);
        void setLockedDofConstraints(::CORBA::Long graphComponentId, const ::hpp::Names_t& constraintNames);
        void addLockedDofConstraints(::CORBA::Long graphComponentId, const ::hpp::Names_t& constraintNames);
        void removeCollisionPairFromEdge(::hpp::ID edgeId, const char* joint1, const char* joint2);
        void getNode(const ::hpp::floatSeq& dofArray, ::hpp::ID& nodeId);
        ::CORBA::Boolean getConfigErrorForNode(::hpp::ID nodeId, const ::hpp::floatSeq& config, ::hpp::floatSeq_out errorVector);
        ::CORBA::Boolean getConfigErrorForEdge(::hpp::ID EdgeId, const ::hpp::floatSeq& config, ::hpp::floatSeq_out errorVector);
        ::CORBA::Boolean getConfigErrorForEdgeLeaf(::hpp::ID EdgeId, const ::hpp::floatSeq& leafConfig, const ::hpp::floatSeq& config, ::hpp::floatSeq_out errorVector);
        ::CORBA::Boolean getConfigErrorForEdgeTarget(::hpp::ID EdgeId, const ::hpp::floatSeq& leafConfig, const ::hpp::floatSeq& config, ::hpp::floatSeq_out errorVector);
        void displayNodeConstraints(::hpp::ID nodeId, ::CORBA::String_out constraints);
        void displayEdgeTargetConstraints(::hpp::ID edgeId, ::CORBA::String_out constraints);
        void displayEdgeConstraints(::hpp::ID edgeId, ::CORBA::String_out constraints);
        void getNodesConnectedByEdge(::hpp::ID edgeId, ::CORBA::String_out from, ::CORBA::String_out to);
        void display(const char* filename);
        void getHistogramValue(::hpp::ID edgeId, ::hpp::floatSeq_out freq, ::hpp::floatSeqSeq_out values);
        void setShort(::hpp::ID edgeId, ::CORBA::Boolean isShort);
        ::CORBA::Boolean isShort(::hpp::ID edgeId);
        intSeq* autoBuild(const char* graphName, const ::hpp::Names_t& grippers, const ::hpp::Names_t& objects, const ::hpp::corbaserver::manipulation::Namess_t& handlesPerObject, const ::hpp::corbaserver::manipulation::Namess_t& contactsPerObject, const ::hpp::Names_t& envNames, const ::hpp::corbaserver::manipulation::Rules& rulesList);
        void setWeight(::hpp::ID edgeID, ::CORBA::Long weight);
        ::CORBA::Long getWeight(::hpp::ID edgeID);
        char* getName(::hpp::ID elmtID);
        void initialize();
        void getRelativeMotionMatrix(::hpp::ID edgeID, ::hpp::intSeqSeq_out matrix);

        inline _objref_Graph()  { _PR_setobj(0); }  // nil
        _objref_Graph(omniIOR*, omniIdentity*);

      protected:
        virtual ~_objref_Graph();

        
      private:
        virtual void* _ptrToObjRef(const char*);

        _objref_Graph(const _objref_Graph&);
        _objref_Graph& operator = (const _objref_Graph&);
        // not implemented

        friend class Graph;
      };

      class _pof_Graph : public _OMNI_NS(proxyObjectFactory) {
      public:
        inline _pof_Graph() : _OMNI_NS(proxyObjectFactory)(Graph::_PD_repoId) {}
        virtual ~_pof_Graph();

        virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
        virtual _CORBA_Boolean is_a(const char*) const;
      };

      class _impl_Graph :
        public virtual omniServant
      {
      public:
        virtual ~_impl_Graph();

        virtual ::CORBA::Long createGraph(const char* graphName) = 0;
        virtual void deleteGraph(const char* graphName) = 0;
        virtual void selectGraph(const char* graphName) = 0;
        virtual ::CORBA::Long createSubGraph(const char* subgraphName) = 0;
        virtual void setTargetNodeList(::hpp::ID subgraph, const ::hpp::IDseq& nodes) = 0;
        virtual ::CORBA::Long createNode(::CORBA::Long subGraphId, const char* nodeName, ::CORBA::Boolean waypoint, ::CORBA::Long priority) = 0;
        virtual ::CORBA::Long createEdge(::CORBA::Long nodeFromId, ::CORBA::Long nodeToId, const char* edgeName, ::CORBA::Long weight, ::CORBA::Long isInNodeId) = 0;
        virtual void setContainingNode(::hpp::ID edgeId, ::hpp::ID nodeId) = 0;
        virtual char* getContainingNode(::hpp::ID edgeId) = 0;
        virtual ::CORBA::Long createWaypointEdge(::CORBA::Long nodeFromId, ::CORBA::Long nodeToId, const char* edgeName, ::CORBA::Long number, ::CORBA::Long weight, ::CORBA::Long isInNode) = 0;
        virtual ::CORBA::Long getWaypoint(::CORBA::Long edgeId, ::CORBA::Long index, ::hpp::ID& nodeId) = 0;
        virtual void setWaypoint(::hpp::ID waypointEdgeId, ::CORBA::Long index, ::hpp::ID edgeId, ::hpp::ID nodeId) = 0;
        virtual void getGraph(::hpp::GraphComp_out graph, ::hpp::GraphElements_out elmts) = 0;
        virtual void getEdgeStat(::hpp::ID edgeId, ::hpp::Names_t_out reasons, ::hpp::intSeq_out freqs) = 0;
        virtual ::CORBA::Long getFrequencyOfNodeInRoadmap(::hpp::ID nodeId, ::hpp::intSeq_out freqPerConnectedComponent) = 0;
        virtual ::CORBA::Boolean getConfigProjectorStats(::hpp::ID elmt, ::hpp::ConfigProjStat& config, ::hpp::ConfigProjStat& path) = 0;
        virtual ::CORBA::Long createLevelSetEdge(::CORBA::Long nodeFromId, ::CORBA::Long nodeToId, const char* edgeName, ::CORBA::Long weight, ::hpp::ID isInNodeId) = 0;
        virtual void setLevelSetFoliation(::CORBA::Long edgeId, const ::hpp::Names_t& condNC, const ::hpp::Names_t& condLJ, const ::hpp::Names_t& paramNC, const ::hpp::Names_t& paramPassiveJoints, const ::hpp::Names_t& paramLJ) = 0;
        virtual void addLevelSetFoliation(::CORBA::Long edgeId, const ::hpp::Names_t& condNC, const ::hpp::Names_t& condLJ, const ::hpp::Names_t& paramNC, const ::hpp::Names_t& paramPassiveJoints, const ::hpp::Names_t& paramLJ) = 0;
        virtual void resetConstraints(::CORBA::Long graphComponentId) = 0;
        virtual void setNumericalConstraints(::CORBA::Long graphComponentId, const ::hpp::Names_t& constraintNames, const ::hpp::Names_t& passiveDofsNames) = 0;
        virtual void addNumericalConstraints(::CORBA::Long graphComponentId, const ::hpp::Names_t& constraintNames, const ::hpp::Names_t& passiveDofsNames) = 0;
        virtual void getNumericalConstraints(::CORBA::Long graphComponentId, ::hpp::Names_t_out constraintNames) = 0;
        virtual void getLockedJoints(::CORBA::Long graphComponentId, ::hpp::Names_t_out constraintNames) = 0;
        virtual void setNumericalConstraintsForPath(::CORBA::Long nodeId, const ::hpp::Names_t& constraintNames, const ::hpp::Names_t& passiveDofsNames) = 0;
        virtual void addNumericalConstraintsForPath(::CORBA::Long nodeId, const ::hpp::Names_t& constraintNames, const ::hpp::Names_t& passiveDofsNames) = 0;
        virtual void setLockedDofConstraints(::CORBA::Long graphComponentId, const ::hpp::Names_t& constraintNames) = 0;
        virtual void addLockedDofConstraints(::CORBA::Long graphComponentId, const ::hpp::Names_t& constraintNames) = 0;
        virtual void removeCollisionPairFromEdge(::hpp::ID edgeId, const char* joint1, const char* joint2) = 0;
        virtual void getNode(const ::hpp::floatSeq& dofArray, ::hpp::ID& nodeId) = 0;
        virtual ::CORBA::Boolean getConfigErrorForNode(::hpp::ID nodeId, const ::hpp::floatSeq& config, ::hpp::floatSeq_out errorVector) = 0;
        virtual ::CORBA::Boolean getConfigErrorForEdge(::hpp::ID EdgeId, const ::hpp::floatSeq& config, ::hpp::floatSeq_out errorVector) = 0;
        virtual ::CORBA::Boolean getConfigErrorForEdgeLeaf(::hpp::ID EdgeId, const ::hpp::floatSeq& leafConfig, const ::hpp::floatSeq& config, ::hpp::floatSeq_out errorVector) = 0;
        virtual ::CORBA::Boolean getConfigErrorForEdgeTarget(::hpp::ID EdgeId, const ::hpp::floatSeq& leafConfig, const ::hpp::floatSeq& config, ::hpp::floatSeq_out errorVector) = 0;
        virtual void displayNodeConstraints(::hpp::ID nodeId, ::CORBA::String_out constraints) = 0;
        virtual void displayEdgeTargetConstraints(::hpp::ID edgeId, ::CORBA::String_out constraints) = 0;
        virtual void displayEdgeConstraints(::hpp::ID edgeId, ::CORBA::String_out constraints) = 0;
        virtual void getNodesConnectedByEdge(::hpp::ID edgeId, ::CORBA::String_out from, ::CORBA::String_out to) = 0;
        virtual void display(const char* filename) = 0;
        virtual void getHistogramValue(::hpp::ID edgeId, ::hpp::floatSeq_out freq, ::hpp::floatSeqSeq_out values) = 0;
        virtual void setShort(::hpp::ID edgeId, ::CORBA::Boolean isShort) = 0;
        virtual ::CORBA::Boolean isShort(::hpp::ID edgeId) = 0;
        virtual intSeq* autoBuild(const char* graphName, const ::hpp::Names_t& grippers, const ::hpp::Names_t& objects, const ::hpp::corbaserver::manipulation::Namess_t& handlesPerObject, const ::hpp::corbaserver::manipulation::Namess_t& contactsPerObject, const ::hpp::Names_t& envNames, const ::hpp::corbaserver::manipulation::Rules& rulesList) = 0;
        virtual void setWeight(::hpp::ID edgeID, ::CORBA::Long weight) = 0;
        virtual ::CORBA::Long getWeight(::hpp::ID edgeID) = 0;
        virtual char* getName(::hpp::ID elmtID) = 0;
        virtual void initialize() = 0;
        virtual void getRelativeMotionMatrix(::hpp::ID edgeID, ::hpp::intSeqSeq_out matrix) = 0;
        
      public:  // Really protected, workaround for xlC
        virtual _CORBA_Boolean _dispatch(omniCallHandle&);

      private:
        virtual void* _ptrToInterface(const char*);
        virtual const char* _mostDerivedRepoId();
        
      };


    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE POA_hpp
_CORBA_MODULE_BEG

  _CORBA_MODULE corbaserver
  _CORBA_MODULE_BEG

    _CORBA_MODULE manipulation
    _CORBA_MODULE_BEG

      class Graph :
        public virtual hpp::corbaserver::manipulation::_impl_Graph,
        public virtual ::PortableServer::ServantBase
      {
      public:
        virtual ~Graph();

        inline ::hpp::corbaserver::manipulation::Graph_ptr _this() {
          return (::hpp::corbaserver::manipulation::Graph_ptr) _do_this(::hpp::corbaserver::manipulation::Graph::_PD_repoId);
        }
      };

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE OBV_hpp
_CORBA_MODULE_BEG

  _CORBA_MODULE corbaserver
  _CORBA_MODULE_BEG

    _CORBA_MODULE manipulation
    _CORBA_MODULE_BEG

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr



inline void
hpp::corbaserver::manipulation::Graph::_marshalObjRef(::hpp::corbaserver::manipulation::Graph_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_graph
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_graph
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_graph
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_graph
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_graph
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_graph
#endif

#endif  // __graph_hh__

