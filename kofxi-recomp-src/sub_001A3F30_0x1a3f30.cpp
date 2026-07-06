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

// Function: sub_001A3F30
// Address: 0x1a3f30 - 0x1a40d0
void sub_001A3F30_0x1a3f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3F30_0x1a3f30");
#endif

    switch (ctx->pc) {
        case 0x1a3f68u: goto label_1a3f68;
        case 0x1a3f88u: goto label_1a3f88;
        case 0x1a3fc0u: goto label_1a3fc0;
        case 0x1a3fe0u: goto label_1a3fe0;
        case 0x1a3fecu: goto label_1a3fec;
        case 0x1a4014u: goto label_1a4014;
        case 0x1a4034u: goto label_1a4034;
        case 0x1a4054u: goto label_1a4054;
        case 0x1a405cu: goto label_1a405c;
        case 0x1a4070u: goto label_1a4070;
        case 0x1a4084u: goto label_1a4084;
        case 0x1a4094u: goto label_1a4094;
        case 0x1a409cu: goto label_1a409c;
        case 0x1a40b0u: goto label_1a40b0;
        default: break;
    }

    ctx->pc = 0x1a3f30u;

    // 0x1a3f30: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1a3f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1a3f34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a3f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a3f38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a3f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a3f3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a3f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a3f40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a3f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a3f44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a3f48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a3f48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a3f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f50: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a3f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a3f54: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a3f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f58: 0x24a56860  addiu       $a1, $a1, 0x6860
    ctx->pc = 0x1a3f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26720));
    // 0x1a3f5c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1a3f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a3f60: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1A3F60u;
    SET_GPR_U32(ctx, 31, 0x1A3F68u);
    ctx->pc = 0x1A3F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F60u;
    // 0x1a3f64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1A3F60u, 0x1A3F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F68u;
label_1a3f68:
    // 0x1a3f68: 0x83a50060  lb          $a1, 0x60($sp)
    ctx->pc = 0x1a3f68u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a3f6c: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x1a3f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1a3f70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a3f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a3f74: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A3F74u;
    {
        const bool branch_taken_0x1a3f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F74u;
        // 0x1a3f78: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f74) {
            ctx->pc = 0x1A3FB0u;
            goto label_1a3fb0;
        }
    }
    ctx->pc = 0x1A3F7Cu;
    // 0x1a3f7c: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x1a3f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1a3f80: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x1a3f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1a3f84: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x1a3f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
label_1a3f88:
    // 0x1a3f88: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a3f88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a3f8c: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3F8Cu;
    {
        const bool branch_taken_0x1a3f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a3f8c) {
            ctx->pc = 0x1A3F98u;
            goto label_1a3f98;
        }
    }
    ctx->pc = 0x1A3F94u;
    // 0x1a3f94: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1a3f94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a3f98:
    // 0x1a3f98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a3f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a3f9c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1a3f9cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a3fa0: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x1a3fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1a3fa4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a3fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a3fa8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A3FA8u;
    {
        const bool branch_taken_0x1a3fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3fa8) {
            ctx->pc = 0x1A3FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3FA8u;
            // 0x1a3fac: 0x5163c  dsll32      $v0, $a1, 24 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3F88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3f88;
        }
    }
    ctx->pc = 0x1A3FB0u;
label_1a3fb0:
    // 0x1a3fb0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a3fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a3fb4: 0x24846870  addiu       $a0, $a0, 0x6870
    ctx->pc = 0x1a3fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26736));
    // 0x1a3fb8: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x1A3FB8u;
    SET_GPR_U32(ctx, 31, 0x1A3FC0u);
    ctx->pc = 0x1A3FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3FB8u;
    // 0x1a3fbc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x1A3FB8u, 0x1A3FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3FC0u;
label_1a3fc0:
    // 0x1a3fc0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1a3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1a3fc4: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x1a3fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x1a3fc8: 0xa3a2016c  sb          $v0, 0x16C($sp)
    ctx->pc = 0x1a3fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 364), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a3fcc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a3fccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3fd4: 0xa3a0016e  sb          $zero, 0x16E($sp)
    ctx->pc = 0x1a3fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 366), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a3fd8: 0xa3a2016d  sb          $v0, 0x16D($sp)
    ctx->pc = 0x1a3fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 365), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a3fdc: 0x26106de0  addiu       $s0, $s0, 0x6DE0
    ctx->pc = 0x1a3fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28128));
label_1a3fe0:
    // 0x1a3fe0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a3fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3fe4: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x1A3FE4u;
    SET_GPR_U32(ctx, 31, 0x1A3FECu);
    ctx->pc = 0x1A3FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3FE4u;
    // 0x1a3fe8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x1A3FE4u, 0x1A3FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3FECu;
label_1a3fec:
    // 0x1a3fec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A3FECu;
    {
        const bool branch_taken_0x1a3fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3fec) {
            ctx->pc = 0x1A4028u;
            goto label_1a4028;
        }
    }
    ctx->pc = 0x1A3FF4u;
    // 0x1a3ff4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a3ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a3ff8: 0x2a620398  slti        $v0, $s3, 0x398
    ctx->pc = 0x1a3ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)920) ? 1 : 0);
    // 0x1a3ffc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A3FFCu;
    {
        const bool branch_taken_0x1a3ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FFCu;
        // 0x1a4000: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3ffc) {
            ctx->pc = 0x1A3FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3fe0;
        }
    }
    ctx->pc = 0x1A4004u;
    // 0x1a4004: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a4004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a4008: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1a4008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a400c: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x1A400Cu;
    SET_GPR_U32(ctx, 31, 0x1A4014u);
    ctx->pc = 0x1A4010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A400Cu;
    // 0x1a4010: 0x24846880  addiu       $a0, $a0, 0x6880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x1A400Cu, 0x1A4014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4014u;
label_1a4014:
    // 0x1a4014: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4018: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a401c: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x1a401cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a4020: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1A4020u;
    {
        const bool branch_taken_0x1a4020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4020u;
        // 0x1a4024: 0xa8030004  swl         $v1, 0x4($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4020) {
            ctx->pc = 0x1A40B0u;
            goto label_1a40b0;
        }
    }
    ctx->pc = 0x1A4028u;
label_1a4028:
    // 0x1a4028: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a4028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a402c: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x1A402Cu;
    SET_GPR_U32(ctx, 31, 0x1A4034u);
    ctx->pc = 0x1A4030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A402Cu;
    // 0x1a4030: 0x248468a0  addiu       $a0, $a0, 0x68A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x1A402Cu, 0x1A4034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4034u;
label_1a4034:
    // 0x1a4034: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1a4034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1a4038: 0x138140  sll         $s0, $s3, 5
    ctx->pc = 0x1a4038u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x1a403c: 0x24636df8  addiu       $v1, $v1, 0x6DF8
    ctx->pc = 0x1a403cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28152));
    // 0x1a4040: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1a4040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1a4044: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a4044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a4048: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a4048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a404c: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x1a404cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1a4050: 0x438823  subu        $s1, $v0, $v1
    ctx->pc = 0x1a4050u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a4054:
    // 0x1a4054: 0xc047062  jal         func_11C188
    ctx->pc = 0x1A4054u;
    SET_GPR_U32(ctx, 31, 0x1A405Cu);
    ctx->pc = 0x1A4058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4054u;
    // 0x1a4058: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C188u, 0x1A4054u, 0x1A405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A405Cu;
label_1a405c:
    // 0x1a405c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1a405cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1a4060: 0x24426de0  addiu       $v0, $v0, 0x6DE0
    ctx->pc = 0x1a4060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28128));
    // 0x1a4064: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a4064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a4068: 0x24540018  addiu       $s4, $v0, 0x18
    ctx->pc = 0x1a4068u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1a406c: 0x24530008  addiu       $s3, $v0, 0x8
    ctx->pc = 0x1a406cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1a4070:
    // 0x1a4070: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1a4070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a4074: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1a4074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a4078: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a4078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a407c: 0xc0470ea  jal         func_11C3A8
    ctx->pc = 0x1A407Cu;
    SET_GPR_U32(ctx, 31, 0x1A4084u);
    ctx->pc = 0x1A4080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A407Cu;
    // 0x1a4080: 0x27a7016c  addiu       $a3, $sp, 0x16C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C3A8u, 0x1A407Cu, 0x1A4084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4084u;
label_1a4084:
    // 0x1a4084: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4084u;
    {
        const bool branch_taken_0x1a4084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4084) {
            ctx->pc = 0x1A4070u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4070;
        }
    }
    ctx->pc = 0x1A408Cu;
    // 0x1a408c: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1A408Cu;
    SET_GPR_U32(ctx, 31, 0x1A4094u);
    ctx->pc = 0x1A4090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A408Cu;
    // 0x1a4090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1A408Cu, 0x1A4094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4094u;
label_1a4094:
    // 0x1a4094: 0xc047196  jal         func_11C658
    ctx->pc = 0x1A4094u;
    SET_GPR_U32(ctx, 31, 0x1A409Cu);
    ctx->pc = 0x11C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C658u, 0x1A4094u, 0x1A409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A409Cu;
label_1a409c:
    // 0x1a409c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1A409Cu;
    {
        const bool branch_taken_0x1a409c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a409c) {
            ctx->pc = 0x1A4054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4054;
        }
    }
    ctx->pc = 0x1A40A4u;
    // 0x1a40a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a40a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a40a8: 0xc0690fc  jal         func_1A43F0
    ctx->pc = 0x1A40A8u;
    SET_GPR_U32(ctx, 31, 0x1A40B0u);
    ctx->pc = 0x1A40ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40A8u;
    // 0x1a40ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A43F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A43F0u, 0x1A40A8u, 0x1A40B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A40B0u;
label_1a40b0:
    // 0x1a40b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a40b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a40b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a40b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a40b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a40b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a40bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a40bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a40c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a40c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a40c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a40c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a40c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A40C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40C8u;
        // 0x1a40cc: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A40C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A40D0u;
}
