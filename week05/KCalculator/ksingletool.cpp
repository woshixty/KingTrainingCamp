#include "ksingletool.h"
#include <memory>

KSingleTool::KSingleTool()
{

}

KSingleTool::~KSingleTool()
{

}

std::shared_ptr<KCalculateTool> KSingleTool::geInstance()
{
    // 双重判断，保证了多线程下安全
    if(m_instance_ptr == nullptr)
    {
        std::lock_guard<std::mutex> lk(m_mutex);
        if(m_instance_ptr == nullptr)
            m_instance_ptr = std::shared_ptr<KCalculateTool>(new KCalculateTool);
    }
    return m_instance_ptr;
}
