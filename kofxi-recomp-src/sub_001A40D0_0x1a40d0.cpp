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

// Function: sub_001A40D0
// Address: 0x1a40d0 - 0x1a4270
void sub_001A40D0_0x1a40d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A40D0_0x1a40d0");
#endif

    switch (ctx->pc) {
        case 0x1a4108u: goto label_1a4108;
        case 0x1a4128u: goto label_1a4128;
        case 0x1a4160u: goto label_1a4160;
        case 0x1a4180u: goto label_1a4180;
        case 0x1a418cu: goto label_1a418c;
        case 0x1a41b4u: goto label_1a41b4;
        case 0x1a41d4u: goto label_1a41d4;
        case 0x1a41f4u: goto label_1a41f4;
        case 0x1a41fcu: goto label_1a41fc;
        case 0x1a4210u: goto label_1a4210;
        case 0x1a4224u: goto label_1a4224;
        case 0x1a4234u: goto label_1a4234;
        case 0x1a423cu: goto label_1a423c;
        case 0x1a4250u: goto label_1a4250;
        default: break;
    }

    ctx->pc = 0x1a40d0u;

    // 0x1a40d0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1a40d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1a40d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a40d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a40d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a40d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a40dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a40dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a40e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a40e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a40e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a40e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a40e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a40e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a40ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a40ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a40f0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a40f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a40f4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a40f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a40f8: 0x24a56860  addiu       $a1, $a1, 0x6860
    ctx->pc = 0x1a40f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26720));
    // 0x1a40fc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1a40fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a4100: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1A4100u;
    SET_GPR_U32(ctx, 31, 0x1A4108u);
    ctx->pc = 0x1A4104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4100u;
    // 0x1a4104: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1A4100u, 0x1A4108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4108u;
label_1a4108:
    // 0x1a4108: 0x83a50060  lb          $a1, 0x60($sp)
    ctx->pc = 0x1a4108u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a410c: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x1a410cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1a4110: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a4110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a4114: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A4114u;
    {
        const bool branch_taken_0x1a4114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4114u;
        // 0x1a4118: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4114) {
            ctx->pc = 0x1A4150u;
            goto label_1a4150;
        }
    }
    ctx->pc = 0x1A411Cu;
    // 0x1a411c: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x1a411cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1a4120: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x1a4120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1a4124: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x1a4124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
label_1a4128:
    // 0x1a4128: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a4128u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a412c: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A412Cu;
    {
        const bool branch_taken_0x1a412c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a412c) {
            ctx->pc = 0x1A4138u;
            goto label_1a4138;
        }
    }
    ctx->pc = 0x1A4134u;
    // 0x1a4134: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1a4134u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a4138:
    // 0x1a4138: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a4138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a413c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1a413cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a4140: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x1a4140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1a4144: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a4144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a4148: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A4148u;
    {
        const bool branch_taken_0x1a4148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4148) {
            ctx->pc = 0x1A414Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4148u;
            // 0x1a414c: 0x5163c  dsll32      $v0, $a1, 24 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4128;
        }
    }
    ctx->pc = 0x1A4150u;
label_1a4150:
    // 0x1a4150: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a4150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a4154: 0x24846870  addiu       $a0, $a0, 0x6870
    ctx->pc = 0x1a4154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26736));
    // 0x1a4158: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x1A4158u;
    SET_GPR_U32(ctx, 31, 0x1A4160u);
    ctx->pc = 0x1A415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4158u;
    // 0x1a415c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x1A4158u, 0x1A4160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4160u;
label_1a4160:
    // 0x1a4160: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1a4160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1a4164: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x1a4164u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x1a4168: 0xa3a2016c  sb          $v0, 0x16C($sp)
    ctx->pc = 0x1a4168u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 364), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a416c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a416cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4174: 0xa3a0016e  sb          $zero, 0x16E($sp)
    ctx->pc = 0x1a4174u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 366), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4178: 0xa3a2016d  sb          $v0, 0x16D($sp)
    ctx->pc = 0x1a4178u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 365), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a417c: 0x26106de0  addiu       $s0, $s0, 0x6DE0
    ctx->pc = 0x1a417cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28128));
label_1a4180:
    // 0x1a4180: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a4180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a4184: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x1A4184u;
    SET_GPR_U32(ctx, 31, 0x1A418Cu);
    ctx->pc = 0x1A4188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4184u;
    // 0x1a4188: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x1A4184u, 0x1A418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A418Cu;
label_1a418c:
    // 0x1a418c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A418Cu;
    {
        const bool branch_taken_0x1a418c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a418c) {
            ctx->pc = 0x1A41C8u;
            goto label_1a41c8;
        }
    }
    ctx->pc = 0x1A4194u;
    // 0x1a4194: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a4194u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a4198: 0x2a620398  slti        $v0, $s3, 0x398
    ctx->pc = 0x1a4198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)920) ? 1 : 0);
    // 0x1a419c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A419Cu;
    {
        const bool branch_taken_0x1a419c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A41A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A419Cu;
        // 0x1a41a0: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a419c) {
            ctx->pc = 0x1A4180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4180;
        }
    }
    ctx->pc = 0x1A41A4u;
    // 0x1a41a4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a41a8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1a41a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a41ac: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x1A41ACu;
    SET_GPR_U32(ctx, 31, 0x1A41B4u);
    ctx->pc = 0x1A41B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A41ACu;
    // 0x1a41b0: 0x24846880  addiu       $a0, $a0, 0x6880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x1A41ACu, 0x1A41B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41B4u;
label_1a41b4:
    // 0x1a41b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a41b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a41b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a41bc: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x1a41bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a41c0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1A41C0u;
    {
        const bool branch_taken_0x1a41c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A41C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41C0u;
        // 0x1a41c4: 0xa8030004  swl         $v1, 0x4($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a41c0) {
            ctx->pc = 0x1A4250u;
            goto label_1a4250;
        }
    }
    ctx->pc = 0x1A41C8u;
label_1a41c8:
    // 0x1a41c8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a41c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a41cc: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x1A41CCu;
    SET_GPR_U32(ctx, 31, 0x1A41D4u);
    ctx->pc = 0x1A41D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A41CCu;
    // 0x1a41d0: 0x248468a0  addiu       $a0, $a0, 0x68A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x1A41CCu, 0x1A41D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41D4u;
label_1a41d4:
    // 0x1a41d4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1a41d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1a41d8: 0x138140  sll         $s0, $s3, 5
    ctx->pc = 0x1a41d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x1a41dc: 0x24636df8  addiu       $v1, $v1, 0x6DF8
    ctx->pc = 0x1a41dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28152));
    // 0x1a41e0: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1a41e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1a41e4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a41e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a41e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a41e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a41ec: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x1a41ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1a41f0: 0x438823  subu        $s1, $v0, $v1
    ctx->pc = 0x1a41f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a41f4:
    // 0x1a41f4: 0xc047062  jal         func_11C188
    ctx->pc = 0x1A41F4u;
    SET_GPR_U32(ctx, 31, 0x1A41FCu);
    ctx->pc = 0x1A41F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A41F4u;
    // 0x1a41f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C188u, 0x1A41F4u, 0x1A41FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41FCu;
label_1a41fc:
    // 0x1a41fc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1a41fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1a4200: 0x24426de0  addiu       $v0, $v0, 0x6DE0
    ctx->pc = 0x1a4200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28128));
    // 0x1a4204: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a4204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a4208: 0x24540018  addiu       $s4, $v0, 0x18
    ctx->pc = 0x1a4208u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1a420c: 0x24530008  addiu       $s3, $v0, 0x8
    ctx->pc = 0x1a420cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1a4210:
    // 0x1a4210: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1a4210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a4214: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1a4214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a4218: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a4218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a421c: 0xc0470ea  jal         func_11C3A8
    ctx->pc = 0x1A421Cu;
    SET_GPR_U32(ctx, 31, 0x1A4224u);
    ctx->pc = 0x1A4220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A421Cu;
    // 0x1a4220: 0x27a7016c  addiu       $a3, $sp, 0x16C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C3A8u, 0x1A421Cu, 0x1A4224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4224u;
label_1a4224:
    // 0x1a4224: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4224u;
    {
        const bool branch_taken_0x1a4224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4224) {
            ctx->pc = 0x1A4210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4210;
        }
    }
    ctx->pc = 0x1A422Cu;
    // 0x1a422c: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1A422Cu;
    SET_GPR_U32(ctx, 31, 0x1A4234u);
    ctx->pc = 0x1A4230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A422Cu;
    // 0x1a4230: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1A422Cu, 0x1A4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4234u;
label_1a4234:
    // 0x1a4234: 0xc047196  jal         func_11C658
    ctx->pc = 0x1A4234u;
    SET_GPR_U32(ctx, 31, 0x1A423Cu);
    ctx->pc = 0x11C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C658u, 0x1A4234u, 0x1A423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A423Cu;
label_1a423c:
    // 0x1a423c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1A423Cu;
    {
        const bool branch_taken_0x1a423c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a423c) {
            ctx->pc = 0x1A41F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a41f4;
        }
    }
    ctx->pc = 0x1A4244u;
    // 0x1a4244: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1a4244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1a4248: 0xc0690fc  jal         func_1A43F0
    ctx->pc = 0x1A4248u;
    SET_GPR_U32(ctx, 31, 0x1A4250u);
    ctx->pc = 0x1A424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4248u;
    // 0x1a424c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A43F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A43F0u, 0x1A4248u, 0x1A4250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4250u;
label_1a4250:
    // 0x1a4250: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a4250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a4254: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a4254u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4258: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a4258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a425c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a425cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4268: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4268u;
        // 0x1a426c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4270u;
}
