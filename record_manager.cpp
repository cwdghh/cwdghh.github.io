#include "record_manager.h"

//输入：表名
//输出：void
//功能：建立表文件
//异常：无异常处理（由catalog manager处理）
void RecordManager::createTableFile(std::string table_name)
{
    table_name = ".\\database\\data\\" + table_name;
    FILE *fp = fopen(table_name.c_str(), "w");
    fclose(fp);
}

//输入：表名
//输出：void
//功能：删除表文件
//异常：无异常处理（由catalog manager处理）
void RecordManager::dropTableFile(std::string table_name)
{

}

//输入：表名，一个元组
//输出：void
//功能：向对应表中插入一条记录
//异常：如果元组类型不匹配，抛出tuple_type_conflict异常。如果
//主键冲突，抛出primary_key_conflict异常。如果unique属性冲突，
//抛出unique_conflict异常。如果表不存在，抛出table_not_exist异常。
void RecordManager::insertRecord(std::string table_name, Tuple &tuple)
{

}

//输入：表名
//输出：int(删除的记录数)
//功能：删除对应表中所有记录（不删除表文件）
//异常：如果表不存在，抛出table_not_exist异常
int RecordManager::deleteRecord(std::string table_name)
{

}

//输入：表名，目标属性，一个Where类型的对象
//输出：int(删除的记录数)
//功能：删除对应表中所有目标属性值满足Where条件的记录
//异常：如果表不存在，抛出table_not_exist异常。如果属性不存在，抛出attribute_not_exist异常。
//如果Where条件中的两个数据类型不匹配，抛出data_type_conflict异常。
int RecordManager::deleteRecord(std::string table_name, std::string target_attr, Where where)
{

}

//输入：表名
//输出：Table类型对象
//功能：返回整张表
//异常：如果表不存在，抛出table_not_exist异常
Table RecordManager::selectRecord(std::string table_name, std::string result_table_name)
{

}

//输入：表名，目标属性，一个Where类型的对象
//输出：Table类型对象
//功能：返回包含所有目标属性满足Where条件的记录的表
//异常：如果表不存在，抛出table_not_exist异常。如果属性不存在，抛出attribute_not_exist异常。
//如果Where条件中的两个数据类型不匹配，抛出data_type_conflict异常。
Table RecordManager::selectRecord(std::string table_name, std::string target_attr, Where where, std::string result_table_name)
{

}

//输入：表名，目标属性名
//输出：void
//功能：对表中已经存在的记录建立索引
//异常：如果表不存在，抛出table_not_exist异常。如果属性不存在，抛出attribute_not_exist异常。
void RecordManager::createIndex(IndexManager &index_manager, std::string table_name, std::string target_attr)
{

}

//获取文件大小
int RecordManager::getBlockNum(std::string table_name)
{

}

//insertRecord的辅助函数
void RecordManager::insertRecord1(char *p, int offset, int len, const std::vector<Data> &v)
{

}

//deleteRecord的辅助函数
char *RecordManager::deleteRecord1(char *p)
{

}

//从内存中读取一个tuple
Tuple RecordManager::readTuple(const char *p, Attribute attr)
{

}

//获取一个tuple的长度
int RecordManager::getTupleLength(char *p)
{

}

//判断插入的记录是否和其他记录冲突
bool RecordManager::isConflict(std::vector<Tuple> &tuples, std::vector<Data> &v, int index)
{

}

//带索引查找
void RecordManager::searchWithIndex(std::string table_name, std::string target_attr, Where where, std::vector<int> &block_ids)
{

}

//在块中进行条件删除
int RecordManager::conditionDeleteInBlock(std::string table_name, int block_id, Attribute attr, int index, Where where)
{

}

//在块中进行条件查询
void RecordManager::conditionSelectInBlock(std::string table_name, int block_id, Attribute attr, int index, Where where, std::vector<Tuple> &v)
{

}

#ifdef __TEST_RM__

#include <iostream>
using namespace std;

int main()
{
    RecordManager rm;
    rm.createTableFile("student.txt");

    return 0;
}

#endif