/*
 * logical_operator.h
 *
 *  Created on: Nov 7, 2013
 *      Author: wangli
 */

#ifndef LOGICALOPERATOR_H_
#define LOGICALOPERATOR_H_
#include <stdio.h>
#include <vector>
#ifdef DMALLOC
#include "dmalloc.h"
#endif
#include "../logical_query_plan/Dataflow.h"
#include "../common/Schema/SchemaFix.h"
#include "../BlockStreamIterator/BlockStreamIteratorBase.h"
#include "../logical_query_plan/Requirement.h"

enum operator_type {
  kLogicalScan,
  kLogicalFilter,
  kLogicalAggregation,
  kLogicalEqualJoin,
  kLogicalProject,
  kLogicalSort,
  kLogicalQueryPlanRoot,
  kLogicalCrossJoin
};

typedef BlockStreamIteratorBase* PhysicalPlan;
typedef struct PhysicalPlanDescriptor {
  PhysicalPlan plan;
  Dataflow dataflow;
  unsigned cost;
};
class LogicalOperator {
 public:
  LogicalOperator(){};
  virtual ~LogicalOperator(){};

  /*get the data flow which is optimal in the local view.*
   * TODO: leverage recursive search for the global optimal. */
  virtual Dataflow GetDataflow() = 0;

  /*
   * generate the iterator tree based on the computed dataflow. Hence,
   * this function can only be called after the calling of getDataflow()
   */
  virtual BlockStreamIteratorBase* GetIteratorTree(const unsigned&) = 0;

  /**
   * get the optimal Physical plan that meets the requirement.
   * @return true if find physical plan that meets the requirement and store the
   * physical plan and
   * its corresponding information in physical_plan_descriptor.
   */
  virtual bool GetOptimalPhysicalPlan(
      Requirement requirement, PhysicalPlanDescriptor& physical_plan_descriptor,
      const unsigned& block_size = 4096 * 1024){};

  virtual void Print(int level = 0) const = 0;

  inline operator_type GetOperatorType() { return operator_type_; }

 protected:
  Schema* GetSchema(const std::vector<Attribute>&) const;
  Schema* GetSchema(const std::vector<Attribute>&,
                    const std::vector<Attribute>&) const;
  std::vector<NodeID> GetInvolvedNodeID(
      const DataflowPartitioningDescriptor&) const;
  std::vector<NodeIP> ConvertNodeIDListToNodeIPList(
      const std::vector<NodeID>&) const;
  PhysicalPlanDescriptor GetBestPhysicalPlanDescriptor(
      const std::vector<PhysicalPlanDescriptor>) const;
  int GetIdInAttributeList(const std::vector<Attribute>& attributes,
                              const Attribute& attribute) const;
  void Align(int space) const;

  inline void set_operator_type(operator_type node_operator) {
    operator_type_ = node_operator;
  }

 private:
  operator_type operator_type_;
};

// class Operator{
//
//};
// class LogicalOperator :public Operator{
// public:
//	LogicalOperator();
//	virtual ~LogicalOperator();
//	virtual void getSchema()=0;
//	virtual LogicalOperator* getchild()=0;
//	virtual void setchild(Operator*)=0;
//};
// class ColoredLogicalOperator :public Operator{
// public:
//	ColoredLogicalOperator(){};
//	virtual void getSchema()=0;
//	virtual int getColor()=0;
////	LogicalOperator* getchind(){return getchild()};
//	virtual ColoredLogicalOperator* getchild()=0;
//	virtual void setchild(Operator*)=0;
//};
// class join:public ColoredLogicalOperator,public LogicalOperator{
// public:
//	join(){};
//	void getSchema(){
//		printf("join::getSchema()\n");
//	}
//	int getColor(){
//		printf("join::getColor\n");
//		if(child!=0){
//			printf("Child->");
//			((ColoredLogicalOperator*)child)->getColor();
//		}
//	}
//	join* getchild(){
//		printf("join::getchind\n");
//		return this;
//	}
//	void setchild(Operator* op){
//		child=op;
//	}
// public:
//	Operator* child;
//
//
//};
//
//
// class tryit{
// public:
//	void doit(){
//		LogicalOperator* o=new join();
//		o->getchild();
//		ColoredLogicalOperator*
// co=(join*)o;//(ColoredLogicalOperator*)o;
//
////		co->setchild(o);
//		co->getColor();
//	}
//};
#endif /* LOGICALOPERATOR_H_ */