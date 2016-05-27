// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_PACKETSELECTCHARACTER_PACKETS_H_
#define FLATBUFFERS_GENERATED_PACKETSELECTCHARACTER_PACKETS_H_

#include "flatbuffers/flatbuffers.h"

namespace packets {

struct PacketSelectCharacter;

struct PacketSelectCharacter FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4,
    VT_CNAME = 6
  };
  uint32_t id() const { return GetField<uint32_t>(VT_ID, 0); }
  const flatbuffers::String *cname() const { return GetPointer<const flatbuffers::String *>(VT_CNAME); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_ID) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_CNAME) &&
           verifier.Verify(cname()) &&
           verifier.EndTable();
  }
};

struct PacketSelectCharacterBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(uint32_t id) { fbb_.AddElement<uint32_t>(PacketSelectCharacter::VT_ID, id, 0); }
  void add_cname(flatbuffers::Offset<flatbuffers::String> cname) { fbb_.AddOffset(PacketSelectCharacter::VT_CNAME, cname); }
  PacketSelectCharacterBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PacketSelectCharacterBuilder &operator=(const PacketSelectCharacterBuilder &);
  flatbuffers::Offset<PacketSelectCharacter> Finish() {
    auto o = flatbuffers::Offset<PacketSelectCharacter>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<PacketSelectCharacter> CreatePacketSelectCharacter(flatbuffers::FlatBufferBuilder &_fbb,
   uint32_t id = 0,
   flatbuffers::Offset<flatbuffers::String> cname = 0) {
  PacketSelectCharacterBuilder builder_(_fbb);
  builder_.add_cname(cname);
  builder_.add_id(id);
  return builder_.Finish();
}

inline const packets::PacketSelectCharacter *GetPacketSelectCharacter(const void *buf) { return flatbuffers::GetRoot<packets::PacketSelectCharacter>(buf); }

inline bool VerifyPacketSelectCharacterBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<packets::PacketSelectCharacter>(); }

inline void FinishPacketSelectCharacterBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<packets::PacketSelectCharacter> root) { fbb.Finish(root); }

}  // namespace packets

#endif  // FLATBUFFERS_GENERATED_PACKETSELECTCHARACTER_PACKETS_H_
