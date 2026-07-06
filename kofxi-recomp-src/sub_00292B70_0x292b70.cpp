#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00292B70
// Address: 0x292b70 - 0x292d20
void sub_00292B70_0x292b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292B70_0x292b70");
#endif

    switch (ctx->pc) {
        case 0x292c50u: goto label_292c50;
        case 0x292c60u: goto label_292c60;
        case 0x292c70u: goto label_292c70;
        default: break;
    }

    ctx->pc = 0x292b70u;

    // 0x292b70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x292b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x292b74: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x292b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x292b78: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x292b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x292b7c: 0x3c160f0f  lui         $s6, 0xF0F
    ctx->pc = 0x292b7cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)3855 << 16));
    // 0x292b80: 0x36d60f0f  ori         $s6, $s6, 0xF0F
    ctx->pc = 0x292b80u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)3855);
    // 0x292b84: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x292b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x292b88: 0x3c153333  lui         $s5, 0x3333
    ctx->pc = 0x292b88u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)13107 << 16));
    // 0x292b8c: 0x36b53333  ori         $s5, $s5, 0x3333
    ctx->pc = 0x292b8cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)13107);
    // 0x292b90: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x292b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x292b94: 0x3c1400ff  lui         $s4, 0xFF
    ctx->pc = 0x292b94u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)255 << 16));
    // 0x292b98: 0x369400ff  ori         $s4, $s4, 0xFF
    ctx->pc = 0x292b98u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)255);
    // 0x292b9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x292b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x292ba0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x292ba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ba4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x292ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x292ba8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x292ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x292bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x292bb0: 0x3c115555  lui         $s1, 0x5555
    ctx->pc = 0x292bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)21845 << 16));
    // 0x292bb4: 0x36315555  ori         $s1, $s1, 0x5555
    ctx->pc = 0x292bb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)21845);
    // 0x292bb8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x292bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x292bbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x292bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292bc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x292bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292bc4: 0xde090008  ld          $t1, 0x8($s0)
    ctx->pc = 0x292bc4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x292bc8: 0xde080000  ld          $t0, 0x0($s0)
    ctx->pc = 0x292bc8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x292bcc: 0x9113a  dsrl        $v0, $t1, 4
    ctx->pc = 0x292bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) >> 4);
    // 0x292bd0: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x292bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x292bd4: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x292bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x292bd8: 0x21938  dsll        $v1, $v0, 4
    ctx->pc = 0x292bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 4);
    // 0x292bdc: 0x1024026  xor         $t0, $t0, $v0
    ctx->pc = 0x292bdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
    // 0x292be0: 0x1234826  xor         $t1, $t1, $v1
    ctx->pc = 0x292be0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
    // 0x292be4: 0x8143a  dsrl        $v0, $t0, 16
    ctx->pc = 0x292be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 16);
    // 0x292be8: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x292be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x292bec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x292becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x292bf0: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x292bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x292bf4: 0x1224826  xor         $t1, $t1, $v0
    ctx->pc = 0x292bf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
    // 0x292bf8: 0x1034026  xor         $t0, $t0, $v1
    ctx->pc = 0x292bf8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x292bfc: 0x910ba  dsrl        $v0, $t1, 2
    ctx->pc = 0x292bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) >> 2);
    // 0x292c00: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x292c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x292c04: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x292c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x292c08: 0x218b8  dsll        $v1, $v0, 2
    ctx->pc = 0x292c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 2);
    // 0x292c0c: 0x1024026  xor         $t0, $t0, $v0
    ctx->pc = 0x292c0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
    // 0x292c10: 0x1234826  xor         $t1, $t1, $v1
    ctx->pc = 0x292c10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
    // 0x292c14: 0x8123a  dsrl        $v0, $t0, 8
    ctx->pc = 0x292c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 8);
    // 0x292c18: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x292c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x292c1c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x292c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x292c20: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x292c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x292c24: 0x1224826  xor         $t1, $t1, $v0
    ctx->pc = 0x292c24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
    // 0x292c28: 0x1034026  xor         $t0, $t0, $v1
    ctx->pc = 0x292c28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x292c2c: 0x9107a  dsrl        $v0, $t1, 1
    ctx->pc = 0x292c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) >> 1);
    // 0x292c30: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x292c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x292c34: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x292c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x292c38: 0x21878  dsll        $v1, $v0, 1
    ctx->pc = 0x292c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 1);
    // 0x292c3c: 0x1024026  xor         $t0, $t0, $v0
    ctx->pc = 0x292c3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
    // 0x292c40: 0x1234826  xor         $t1, $t1, $v1
    ctx->pc = 0x292c40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
    // 0x292c44: 0xfe080000  sd          $t0, 0x0($s0)
    ctx->pc = 0x292c44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 8));
    // 0x292c48: 0xc0a4864  jal         func_292190
    ctx->pc = 0x292C48u;
    SET_GPR_U32(ctx, 31, 0x292C50u);
    ctx->pc = 0x292C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C48u;
    // 0x292c4c: 0xfe090008  sd          $t1, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292190u, 0x292C48u, 0x292C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C50u;
label_292c50:
    // 0x292c50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x292c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c58: 0xc0a4864  jal         func_292190
    ctx->pc = 0x292C58u;
    SET_GPR_U32(ctx, 31, 0x292C60u);
    ctx->pc = 0x292C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C58u;
    // 0x292c5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292190u, 0x292C58u, 0x292C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C60u;
label_292c60:
    // 0x292c60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x292c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c68: 0xc0a4864  jal         func_292190
    ctx->pc = 0x292C68u;
    SET_GPR_U32(ctx, 31, 0x292C70u);
    ctx->pc = 0x292C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292C68u;
    // 0x292c6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292190u, 0x292C68u, 0x292C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C70u;
label_292c70:
    // 0x292c70: 0xde090008  ld          $t1, 0x8($s0)
    ctx->pc = 0x292c70u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x292c74: 0xde080000  ld          $t0, 0x0($s0)
    ctx->pc = 0x292c74u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x292c78: 0x9107a  dsrl        $v0, $t1, 1
    ctx->pc = 0x292c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) >> 1);
    // 0x292c7c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x292c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x292c80: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x292c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x292c84: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x292c84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292c88: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x292c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x292c8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x292c8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292c90: 0x21878  dsll        $v1, $v0, 1
    ctx->pc = 0x292c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 1);
    // 0x292c94: 0x1024026  xor         $t0, $t0, $v0
    ctx->pc = 0x292c94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
    // 0x292c98: 0x1234826  xor         $t1, $t1, $v1
    ctx->pc = 0x292c98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
    // 0x292c9c: 0x8123a  dsrl        $v0, $t0, 8
    ctx->pc = 0x292c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 8);
    // 0x292ca0: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x292ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x292ca4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x292ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292ca8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x292ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x292cac: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x292cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x292cb0: 0x1224826  xor         $t1, $t1, $v0
    ctx->pc = 0x292cb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
    // 0x292cb4: 0x1034026  xor         $t0, $t0, $v1
    ctx->pc = 0x292cb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x292cb8: 0x910ba  dsrl        $v0, $t1, 2
    ctx->pc = 0x292cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) >> 2);
    // 0x292cbc: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x292cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x292cc0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x292cc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292cc4: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x292cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x292cc8: 0x218b8  dsll        $v1, $v0, 2
    ctx->pc = 0x292cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 2);
    // 0x292ccc: 0x1024026  xor         $t0, $t0, $v0
    ctx->pc = 0x292cccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
    // 0x292cd0: 0x1234826  xor         $t1, $t1, $v1
    ctx->pc = 0x292cd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
    // 0x292cd4: 0x8143a  dsrl        $v0, $t0, 16
    ctx->pc = 0x292cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 16);
    // 0x292cd8: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x292cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x292cdc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x292cdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292ce0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x292ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x292ce4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x292ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x292ce8: 0x1224826  xor         $t1, $t1, $v0
    ctx->pc = 0x292ce8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
    // 0x292cec: 0x1034026  xor         $t0, $t0, $v1
    ctx->pc = 0x292cecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x292cf0: 0x9113a  dsrl        $v0, $t1, 4
    ctx->pc = 0x292cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) >> 4);
    // 0x292cf4: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x292cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x292cf8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x292cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x292cfc: 0x21938  dsll        $v1, $v0, 4
    ctx->pc = 0x292cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 4);
    // 0x292d00: 0x1024026  xor         $t0, $t0, $v0
    ctx->pc = 0x292d00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
    // 0x292d04: 0x1234826  xor         $t1, $t1, $v1
    ctx->pc = 0x292d04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
    // 0x292d08: 0xfe080000  sd          $t0, 0x0($s0)
    ctx->pc = 0x292d08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 8));
    // 0x292d0c: 0xfe090008  sd          $t1, 0x8($s0)
    ctx->pc = 0x292d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 9));
    // 0x292d10: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x292d10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x292d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x292d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292d18: 0x3e00008  jr          $ra
    ctx->pc = 0x292D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D18u;
        // 0x292d1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292D20u;
}
