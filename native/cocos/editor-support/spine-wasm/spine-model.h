#ifndef __SPINE_MODEL_H__
#define __SPINE_MODEL_H__
#include <spine/spine.h>
#include <vector>
#include <string>
#include "mesh-type-define.h"

using namespace spine;
class SlotMesh {
public:
    SlotMesh() {}
    SlotMesh(uint8_t* vb, uint16_t* ib, uint32_t vc, uint32_t ic)
    : vBuf(vb), iBuf(ib), vCount(vc), iCount(ic) {}
    ~SlotMesh() {}
    void set(uint8_t* vb, uint16_t* ib, uint32_t vc, uint32_t ic)
    {
        this->vBuf = vb;
        this->iBuf = ib;
        this->vCount = vc;
        this->iCount = ic;
    }
    uint8_t* vBuf;
    uint16_t* iBuf;
    uint32_t vCount;
    uint32_t iCount;
    uint32_t blendMode;
    uint32_t textureID;
};

class SpineModel {
public:
    SpineModel();
    ~SpineModel();
    void addSlotMesh(SlotMesh& mesh, bool needMerge = true);
    void addAttachedSlotName(const char* name);
    void clearMeshes();
    void setBufferPtr(uint8_t* vp, uint16_t* ip);
    std::vector<uint32_t>* data{nullptr};
    inline std::vector<uint32_t>* getData() {return data;}
    inline std::vector<std::string>* getAttachedSlotName() {return attachedSlotNameArray;}

public:
    uint32_t vCount{0};
    uint32_t iCount{0};
    uint32_t vPtr{0};
    uint32_t iPtr{0};
    uint32_t byteStride{0};

private:
    std::vector<std::string>* attachedSlotNameArray{nullptr};
};

#endif