//
// Created by Alon on 16/06/2025.
//

#ifndef EVENTQUEUE_H
#define EVENTQUEUE_H

#include <queue>
#include <unordered_map>
#include <typeindex>
#include <memory>

class EventQueue {
public:
    template<typename T>
    void emit(const T& event) {
        getQueue<T>().push(event);
    }

    template<typename T>
    std::queue<T>& getQueue() {
        const std::type_index typeId = typeid(T);
        if (m_eventMap.count(typeId) == 0) {
            m_eventMap[typeId] = std::make_shared<BaseQueue<T>>();
        }
        return static_cast<BaseQueue<T>*>(m_eventMap[typeId].get())->queue;
    }

private:
    struct IQueue {
        virtual ~IQueue() {}
    };

    template<typename T>
    struct BaseQueue : IQueue {
        std::queue<T> queue;
    };

    std::unordered_map<std::type_index, std::shared_ptr<IQueue>> m_eventMap;
};



#endif //EVENTQUEUE_H
