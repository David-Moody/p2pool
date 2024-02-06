/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: types.proto */

#ifndef PROTOBUF_C_types_2eproto__INCLUDED
#define PROTOBUF_C_types_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Tari__Rpc__Range Tari__Rpc__Range;
typedef struct _Tari__Rpc__Empty Tari__Rpc__Empty;
typedef struct _Tari__Rpc__BlockHeight Tari__Rpc__BlockHeight;
typedef struct _Tari__Rpc__Signature Tari__Rpc__Signature;
typedef struct _Tari__Rpc__ComAndPubSignature Tari__Rpc__ComAndPubSignature;
typedef struct _Tari__Rpc__CommitmentSignature Tari__Rpc__CommitmentSignature;
typedef struct _Tari__Rpc__PowAlgorithmConstants Tari__Rpc__PowAlgorithmConstants;
typedef struct _Tari__Rpc__WeightParams Tari__Rpc__WeightParams;
typedef struct _Tari__Rpc__OutputsVersion Tari__Rpc__OutputsVersion;
typedef struct _Tari__Rpc__PermittedRangeProofs Tari__Rpc__PermittedRangeProofs;
typedef struct _Tari__Rpc__RangeProof Tari__Rpc__RangeProof;
typedef struct _Tari__Rpc__ConsensusConstants Tari__Rpc__ConsensusConstants;
typedef struct _Tari__Rpc__ConsensusConstants__ProofOfWorkEntry Tari__Rpc__ConsensusConstants__ProofOfWorkEntry;


/* --- enums --- */

/*
 * / Output types
 */
typedef enum _Tari__Rpc__OutputType {
  TARI__RPC__OUTPUT_TYPE__STANDARD = 0,
  TARI__RPC__OUTPUT_TYPE__COINBASE = 1,
  TARI__RPC__OUTPUT_TYPE__BURN = 2,
  TARI__RPC__OUTPUT_TYPE__VALIDATOR_NODE_REGISTRATION = 3,
  TARI__RPC__OUTPUT_TYPE__CODE_TEMPLATE_REGISTRATION = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(TARI__RPC__OUTPUT_TYPE)
} Tari__Rpc__OutputType;
/*
 * / Range proof types
 */
typedef enum _Tari__Rpc__RangeProofType {
  TARI__RPC__RANGE_PROOF_TYPE__BULLETPROOF_PLUS = 0,
  TARI__RPC__RANGE_PROOF_TYPE__REVEALED_VALUE = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(TARI__RPC__RANGE_PROOF_TYPE)
} Tari__Rpc__RangeProofType;

/* --- messages --- */

/*
 * / An unsigned range interface to more accurately represent Rust native Range's
 */
struct  _Tari__Rpc__Range
{
  ProtobufCMessage base;
  uint64_t min;
  uint64_t max;
};
#define TARI__RPC__RANGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tari__rpc__range__descriptor) \
    , 0, 0 }


/*
 * / An Empty placeholder for endpoints without request parameters
 */
struct  _Tari__Rpc__Empty
{
  ProtobufCMessage base;
};
#define TARI__RPC__EMPTY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tari__rpc__empty__descriptor) \
     }


/*
 * / Define an interface for block height
 */
struct  _Tari__Rpc__BlockHeight
{
  ProtobufCMessage base;
  uint64_t block_height;
};
#define TARI__RPC__BLOCK_HEIGHT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tari__rpc__block_height__descriptor) \
    , 0 }


/*
 * Define the explicit Signature implementation for the Minotari base layer. A different signature scheme can be
 * employed by redefining this type.
 */
struct  _Tari__Rpc__Signature
{
  ProtobufCMessage base;
  ProtobufCBinaryData public_nonce;
  ProtobufCBinaryData signature;
};
#define TARI__RPC__SIGNATURE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tari__rpc__signature__descriptor) \
    , {0,NULL}, {0,NULL} }


/*
 * Define the explicit ComAndPubSignature implementation for the Minotari base layer. A different signature scheme can be
 * employed by redefining this type.
 */
struct  _Tari__Rpc__ComAndPubSignature
{
  ProtobufCMessage base;
  ProtobufCBinaryData ephemeral_commitment;
  ProtobufCBinaryData ephemeral_pubkey;
  ProtobufCBinaryData u_a;
  ProtobufCBinaryData u_x;
  ProtobufCBinaryData u_y;
};
#define TARI__RPC__COM_AND_PUB_SIGNATURE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tari__rpc__com_and_pub_signature__descriptor) \
    , {0,NULL}, {0,NULL}, {0,NULL}, {0,NULL}, {0,NULL} }


/*
 * Define the explicit CommitmentSignature implementation for the Minotari base layer. A different signature scheme can be
 * employed by redefining this type
 */
struct  _Tari__Rpc__CommitmentSignature
{
  ProtobufCMessage base;
  ProtobufCBinaryData public_nonce;
  ProtobufCBinaryData u;
  ProtobufCBinaryData v;
};
#define TARI__RPC__COMMITMENT_SIGNATURE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tari__rpc__commitment_signature__descriptor) \
    , {0,NULL}, {0,NULL}, {0,NULL} }


/*
 * / PoW Algorithm constants
 */
struct  _Tari__Rpc__PowAlgorithmConstants
{
  ProtobufCMessage base;
  uint64_t min_difficulty;
  uint64_t max_difficulty;
  uint64_t target_time;
};
#define TARI__RPC__POW_ALGORITHM_CONSTANTS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tari__rpc__pow_algorithm_constants__descriptor) \
    , 0, 0, 0 }


/*
 * / Weight params
 */
struct  _Tari__Rpc__WeightParams
{
  ProtobufCMessage base;
  uint64_t kernel_weight;
  uint64_t input_weight;
  uint64_t output_weight;
  uint64_t features_and_scripts_bytes_per_gram;
};
#define TARI__RPC__WEIGHT_PARAMS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tari__rpc__weight_params__descriptor) \
    , 0, 0, 0, 0 }


/*
 * / Output version
 */
struct  _Tari__Rpc__OutputsVersion
{
  ProtobufCMessage base;
  Tari__Rpc__Range *outputs;
  Tari__Rpc__Range *features;
};
#define TARI__RPC__OUTPUTS_VERSION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tari__rpc__outputs_version__descriptor) \
    , NULL, NULL }


struct  _Tari__Rpc__PermittedRangeProofs
{
  ProtobufCMessage base;
  Tari__Rpc__OutputType output_type;
  size_t n_range_proof_types;
  Tari__Rpc__RangeProofType *range_proof_types;
};
#define TARI__RPC__PERMITTED_RANGE_PROOFS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tari__rpc__permitted_range_proofs__descriptor) \
    , TARI__RPC__OUTPUT_TYPE__STANDARD, 0,NULL }


/*
 * / Range proof
 */
struct  _Tari__Rpc__RangeProof
{
  ProtobufCMessage base;
  ProtobufCBinaryData proof_bytes;
};
#define TARI__RPC__RANGE_PROOF__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tari__rpc__range_proof__descriptor) \
    , {0,NULL} }


struct  _Tari__Rpc__ConsensusConstants__ProofOfWorkEntry
{
  ProtobufCMessage base;
  uint32_t key;
  Tari__Rpc__PowAlgorithmConstants *value;
};
#define TARI__RPC__CONSENSUS_CONSTANTS__PROOF_OF_WORK_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tari__rpc__consensus_constants__proof_of_work_entry__descriptor) \
    , 0, NULL }


/*
 * / Consensus Constants response
 */
struct  _Tari__Rpc__ConsensusConstants
{
  ProtobufCMessage base;
  uint64_t coinbase_min_maturity;
  uint32_t blockchain_version;
  uint64_t future_time_limit;
  uint64_t difficulty_block_window;
  uint64_t max_block_transaction_weight;
  uint64_t pow_algo_count;
  uint64_t median_timestamp_count;
  uint64_t emission_initial;
  size_t n_emission_decay;
  uint64_t *emission_decay;
  uint64_t emission_tail;
  uint64_t min_sha3x_pow_difficulty;
  uint64_t block_weight_inputs;
  uint64_t block_weight_outputs;
  uint64_t block_weight_kernels;
  uint64_t faucet_value;
  uint64_t max_script_byte_size;
  uint64_t validator_node_validity_period;
  uint64_t effective_from_height;
  Tari__Rpc__Range *valid_blockchain_version_range;
  uint64_t max_randomx_seed_height;
  size_t n_proof_of_work;
  Tari__Rpc__ConsensusConstants__ProofOfWorkEntry **proof_of_work;
  Tari__Rpc__WeightParams *transaction_weight;
  Tari__Rpc__Range *input_version_range;
  Tari__Rpc__OutputsVersion *output_version_range;
  Tari__Rpc__Range *kernel_version_range;
  size_t n_permitted_output_types;
  Tari__Rpc__OutputType *permitted_output_types;
  uint64_t epoch_length;
  uint64_t validator_node_registration_min_deposit_amount;
  uint64_t validator_node_registration_min_lock_height;
  uint64_t validator_node_registration_shuffle_interval_epoch;
  size_t n_permitted_range_proof_types;
  Tari__Rpc__PermittedRangeProofs **permitted_range_proof_types;
};
#define TARI__RPC__CONSENSUS_CONSTANTS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&tari__rpc__consensus_constants__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0,NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, NULL, 0, 0,NULL, NULL, NULL, NULL, NULL, 0,NULL, 0, 0, 0, 0, 0,NULL }


/* Tari__Rpc__Range methods */
void   tari__rpc__range__init
                     (Tari__Rpc__Range         *message);
size_t tari__rpc__range__get_packed_size
                     (const Tari__Rpc__Range   *message);
size_t tari__rpc__range__pack
                     (const Tari__Rpc__Range   *message,
                      uint8_t             *out);
size_t tari__rpc__range__pack_to_buffer
                     (const Tari__Rpc__Range   *message,
                      ProtobufCBuffer     *buffer);
Tari__Rpc__Range *
       tari__rpc__range__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tari__rpc__range__free_unpacked
                     (Tari__Rpc__Range *message,
                      ProtobufCAllocator *allocator);
/* Tari__Rpc__Empty methods */
void   tari__rpc__empty__init
                     (Tari__Rpc__Empty         *message);
size_t tari__rpc__empty__get_packed_size
                     (const Tari__Rpc__Empty   *message);
size_t tari__rpc__empty__pack
                     (const Tari__Rpc__Empty   *message,
                      uint8_t             *out);
size_t tari__rpc__empty__pack_to_buffer
                     (const Tari__Rpc__Empty   *message,
                      ProtobufCBuffer     *buffer);
Tari__Rpc__Empty *
       tari__rpc__empty__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tari__rpc__empty__free_unpacked
                     (Tari__Rpc__Empty *message,
                      ProtobufCAllocator *allocator);
/* Tari__Rpc__BlockHeight methods */
void   tari__rpc__block_height__init
                     (Tari__Rpc__BlockHeight         *message);
size_t tari__rpc__block_height__get_packed_size
                     (const Tari__Rpc__BlockHeight   *message);
size_t tari__rpc__block_height__pack
                     (const Tari__Rpc__BlockHeight   *message,
                      uint8_t             *out);
size_t tari__rpc__block_height__pack_to_buffer
                     (const Tari__Rpc__BlockHeight   *message,
                      ProtobufCBuffer     *buffer);
Tari__Rpc__BlockHeight *
       tari__rpc__block_height__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tari__rpc__block_height__free_unpacked
                     (Tari__Rpc__BlockHeight *message,
                      ProtobufCAllocator *allocator);
/* Tari__Rpc__Signature methods */
void   tari__rpc__signature__init
                     (Tari__Rpc__Signature         *message);
size_t tari__rpc__signature__get_packed_size
                     (const Tari__Rpc__Signature   *message);
size_t tari__rpc__signature__pack
                     (const Tari__Rpc__Signature   *message,
                      uint8_t             *out);
size_t tari__rpc__signature__pack_to_buffer
                     (const Tari__Rpc__Signature   *message,
                      ProtobufCBuffer     *buffer);
Tari__Rpc__Signature *
       tari__rpc__signature__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tari__rpc__signature__free_unpacked
                     (Tari__Rpc__Signature *message,
                      ProtobufCAllocator *allocator);
/* Tari__Rpc__ComAndPubSignature methods */
void   tari__rpc__com_and_pub_signature__init
                     (Tari__Rpc__ComAndPubSignature         *message);
size_t tari__rpc__com_and_pub_signature__get_packed_size
                     (const Tari__Rpc__ComAndPubSignature   *message);
size_t tari__rpc__com_and_pub_signature__pack
                     (const Tari__Rpc__ComAndPubSignature   *message,
                      uint8_t             *out);
size_t tari__rpc__com_and_pub_signature__pack_to_buffer
                     (const Tari__Rpc__ComAndPubSignature   *message,
                      ProtobufCBuffer     *buffer);
Tari__Rpc__ComAndPubSignature *
       tari__rpc__com_and_pub_signature__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tari__rpc__com_and_pub_signature__free_unpacked
                     (Tari__Rpc__ComAndPubSignature *message,
                      ProtobufCAllocator *allocator);
/* Tari__Rpc__CommitmentSignature methods */
void   tari__rpc__commitment_signature__init
                     (Tari__Rpc__CommitmentSignature         *message);
size_t tari__rpc__commitment_signature__get_packed_size
                     (const Tari__Rpc__CommitmentSignature   *message);
size_t tari__rpc__commitment_signature__pack
                     (const Tari__Rpc__CommitmentSignature   *message,
                      uint8_t             *out);
size_t tari__rpc__commitment_signature__pack_to_buffer
                     (const Tari__Rpc__CommitmentSignature   *message,
                      ProtobufCBuffer     *buffer);
Tari__Rpc__CommitmentSignature *
       tari__rpc__commitment_signature__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tari__rpc__commitment_signature__free_unpacked
                     (Tari__Rpc__CommitmentSignature *message,
                      ProtobufCAllocator *allocator);
/* Tari__Rpc__PowAlgorithmConstants methods */
void   tari__rpc__pow_algorithm_constants__init
                     (Tari__Rpc__PowAlgorithmConstants         *message);
size_t tari__rpc__pow_algorithm_constants__get_packed_size
                     (const Tari__Rpc__PowAlgorithmConstants   *message);
size_t tari__rpc__pow_algorithm_constants__pack
                     (const Tari__Rpc__PowAlgorithmConstants   *message,
                      uint8_t             *out);
size_t tari__rpc__pow_algorithm_constants__pack_to_buffer
                     (const Tari__Rpc__PowAlgorithmConstants   *message,
                      ProtobufCBuffer     *buffer);
Tari__Rpc__PowAlgorithmConstants *
       tari__rpc__pow_algorithm_constants__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tari__rpc__pow_algorithm_constants__free_unpacked
                     (Tari__Rpc__PowAlgorithmConstants *message,
                      ProtobufCAllocator *allocator);
/* Tari__Rpc__WeightParams methods */
void   tari__rpc__weight_params__init
                     (Tari__Rpc__WeightParams         *message);
size_t tari__rpc__weight_params__get_packed_size
                     (const Tari__Rpc__WeightParams   *message);
size_t tari__rpc__weight_params__pack
                     (const Tari__Rpc__WeightParams   *message,
                      uint8_t             *out);
size_t tari__rpc__weight_params__pack_to_buffer
                     (const Tari__Rpc__WeightParams   *message,
                      ProtobufCBuffer     *buffer);
Tari__Rpc__WeightParams *
       tari__rpc__weight_params__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tari__rpc__weight_params__free_unpacked
                     (Tari__Rpc__WeightParams *message,
                      ProtobufCAllocator *allocator);
/* Tari__Rpc__OutputsVersion methods */
void   tari__rpc__outputs_version__init
                     (Tari__Rpc__OutputsVersion         *message);
size_t tari__rpc__outputs_version__get_packed_size
                     (const Tari__Rpc__OutputsVersion   *message);
size_t tari__rpc__outputs_version__pack
                     (const Tari__Rpc__OutputsVersion   *message,
                      uint8_t             *out);
size_t tari__rpc__outputs_version__pack_to_buffer
                     (const Tari__Rpc__OutputsVersion   *message,
                      ProtobufCBuffer     *buffer);
Tari__Rpc__OutputsVersion *
       tari__rpc__outputs_version__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tari__rpc__outputs_version__free_unpacked
                     (Tari__Rpc__OutputsVersion *message,
                      ProtobufCAllocator *allocator);
/* Tari__Rpc__PermittedRangeProofs methods */
void   tari__rpc__permitted_range_proofs__init
                     (Tari__Rpc__PermittedRangeProofs         *message);
size_t tari__rpc__permitted_range_proofs__get_packed_size
                     (const Tari__Rpc__PermittedRangeProofs   *message);
size_t tari__rpc__permitted_range_proofs__pack
                     (const Tari__Rpc__PermittedRangeProofs   *message,
                      uint8_t             *out);
size_t tari__rpc__permitted_range_proofs__pack_to_buffer
                     (const Tari__Rpc__PermittedRangeProofs   *message,
                      ProtobufCBuffer     *buffer);
Tari__Rpc__PermittedRangeProofs *
       tari__rpc__permitted_range_proofs__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tari__rpc__permitted_range_proofs__free_unpacked
                     (Tari__Rpc__PermittedRangeProofs *message,
                      ProtobufCAllocator *allocator);
/* Tari__Rpc__RangeProof methods */
void   tari__rpc__range_proof__init
                     (Tari__Rpc__RangeProof         *message);
size_t tari__rpc__range_proof__get_packed_size
                     (const Tari__Rpc__RangeProof   *message);
size_t tari__rpc__range_proof__pack
                     (const Tari__Rpc__RangeProof   *message,
                      uint8_t             *out);
size_t tari__rpc__range_proof__pack_to_buffer
                     (const Tari__Rpc__RangeProof   *message,
                      ProtobufCBuffer     *buffer);
Tari__Rpc__RangeProof *
       tari__rpc__range_proof__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tari__rpc__range_proof__free_unpacked
                     (Tari__Rpc__RangeProof *message,
                      ProtobufCAllocator *allocator);
/* Tari__Rpc__ConsensusConstants__ProofOfWorkEntry methods */
void   tari__rpc__consensus_constants__proof_of_work_entry__init
                     (Tari__Rpc__ConsensusConstants__ProofOfWorkEntry         *message);
/* Tari__Rpc__ConsensusConstants methods */
void   tari__rpc__consensus_constants__init
                     (Tari__Rpc__ConsensusConstants         *message);
size_t tari__rpc__consensus_constants__get_packed_size
                     (const Tari__Rpc__ConsensusConstants   *message);
size_t tari__rpc__consensus_constants__pack
                     (const Tari__Rpc__ConsensusConstants   *message,
                      uint8_t             *out);
size_t tari__rpc__consensus_constants__pack_to_buffer
                     (const Tari__Rpc__ConsensusConstants   *message,
                      ProtobufCBuffer     *buffer);
Tari__Rpc__ConsensusConstants *
       tari__rpc__consensus_constants__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   tari__rpc__consensus_constants__free_unpacked
                     (Tari__Rpc__ConsensusConstants *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Tari__Rpc__Range_Closure)
                 (const Tari__Rpc__Range *message,
                  void *closure_data);
typedef void (*Tari__Rpc__Empty_Closure)
                 (const Tari__Rpc__Empty *message,
                  void *closure_data);
typedef void (*Tari__Rpc__BlockHeight_Closure)
                 (const Tari__Rpc__BlockHeight *message,
                  void *closure_data);
typedef void (*Tari__Rpc__Signature_Closure)
                 (const Tari__Rpc__Signature *message,
                  void *closure_data);
typedef void (*Tari__Rpc__ComAndPubSignature_Closure)
                 (const Tari__Rpc__ComAndPubSignature *message,
                  void *closure_data);
typedef void (*Tari__Rpc__CommitmentSignature_Closure)
                 (const Tari__Rpc__CommitmentSignature *message,
                  void *closure_data);
typedef void (*Tari__Rpc__PowAlgorithmConstants_Closure)
                 (const Tari__Rpc__PowAlgorithmConstants *message,
                  void *closure_data);
typedef void (*Tari__Rpc__WeightParams_Closure)
                 (const Tari__Rpc__WeightParams *message,
                  void *closure_data);
typedef void (*Tari__Rpc__OutputsVersion_Closure)
                 (const Tari__Rpc__OutputsVersion *message,
                  void *closure_data);
typedef void (*Tari__Rpc__PermittedRangeProofs_Closure)
                 (const Tari__Rpc__PermittedRangeProofs *message,
                  void *closure_data);
typedef void (*Tari__Rpc__RangeProof_Closure)
                 (const Tari__Rpc__RangeProof *message,
                  void *closure_data);
typedef void (*Tari__Rpc__ConsensusConstants__ProofOfWorkEntry_Closure)
                 (const Tari__Rpc__ConsensusConstants__ProofOfWorkEntry *message,
                  void *closure_data);
typedef void (*Tari__Rpc__ConsensusConstants_Closure)
                 (const Tari__Rpc__ConsensusConstants *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    tari__rpc__output_type__descriptor;
extern const ProtobufCEnumDescriptor    tari__rpc__range_proof_type__descriptor;
extern const ProtobufCMessageDescriptor tari__rpc__range__descriptor;
extern const ProtobufCMessageDescriptor tari__rpc__empty__descriptor;
extern const ProtobufCMessageDescriptor tari__rpc__block_height__descriptor;
extern const ProtobufCMessageDescriptor tari__rpc__signature__descriptor;
extern const ProtobufCMessageDescriptor tari__rpc__com_and_pub_signature__descriptor;
extern const ProtobufCMessageDescriptor tari__rpc__commitment_signature__descriptor;
extern const ProtobufCMessageDescriptor tari__rpc__pow_algorithm_constants__descriptor;
extern const ProtobufCMessageDescriptor tari__rpc__weight_params__descriptor;
extern const ProtobufCMessageDescriptor tari__rpc__outputs_version__descriptor;
extern const ProtobufCMessageDescriptor tari__rpc__permitted_range_proofs__descriptor;
extern const ProtobufCMessageDescriptor tari__rpc__range_proof__descriptor;
extern const ProtobufCMessageDescriptor tari__rpc__consensus_constants__descriptor;
extern const ProtobufCMessageDescriptor tari__rpc__consensus_constants__proof_of_work_entry__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_types_2eproto__INCLUDED */