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

// Function: sub_00188930
// Address: 0x188930 - 0x188ce0
void sub_00188930_0x188930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188930_0x188930");
#endif

    switch (ctx->pc) {
        case 0x188a38u: goto label_188a38;
        case 0x188a5cu: goto label_188a5c;
        case 0x188a6cu: goto label_188a6c;
        case 0x188a90u: goto label_188a90;
        case 0x188b30u: goto label_188b30;
        case 0x188bf4u: goto label_188bf4;
        case 0x188c74u: goto label_188c74;
        case 0x188cb4u: goto label_188cb4;
        default: break;
    }

    ctx->pc = 0x188930u;

    // 0x188930: 0x8c820490  lw          $v0, 0x490($a0)
    ctx->pc = 0x188930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
    // 0x188934: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x188934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x188938: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188938u;
    {
        const bool branch_taken_0x188938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188938) {
            ctx->pc = 0x18893Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188938u;
            // 0x18893c: 0x8c830494  lw          $v1, 0x494($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188948u;
            goto label_188948;
        }
    }
    ctx->pc = 0x188940u;
    // 0x188940: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x188940u;
    {
        const bool branch_taken_0x188940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188940u;
        // 0x188944: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188940) {
            ctx->pc = 0x1889F4u;
            goto label_1889f4;
        }
    }
    ctx->pc = 0x188948u;
label_188948:
    // 0x188948: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x188948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18894c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x18894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x188950: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188954: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188954u;
    {
        const bool branch_taken_0x188954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188954) {
            ctx->pc = 0x188958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188954u;
            // 0x188958: 0x8c85048c  lw          $a1, 0x48C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188964u;
            goto label_188964;
        }
    }
    ctx->pc = 0x18895Cu;
    // 0x18895c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x18895Cu;
    {
        const bool branch_taken_0x18895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18895Cu;
        // 0x188960: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18895c) {
            ctx->pc = 0x1889F4u;
            goto label_1889f4;
        }
    }
    ctx->pc = 0x188964u;
label_188964:
    // 0x188964: 0x30a20840  andi        $v0, $a1, 0x840
    ctx->pc = 0x188964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2112);
    // 0x188968: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188968u;
    {
        const bool branch_taken_0x188968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188968) {
            ctx->pc = 0x188978u;
            goto label_188978;
        }
    }
    ctx->pc = 0x188970u;
    // 0x188970: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x188970u;
    {
        const bool branch_taken_0x188970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188970u;
        // 0x188974: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188970) {
            ctx->pc = 0x1889F4u;
            goto label_1889f4;
        }
    }
    ctx->pc = 0x188978u;
label_188978:
    // 0x188978: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x188978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18897c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x18897cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x188980: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x188980u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x188984: 0x54430016  bnel        $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x188984u;
    {
        const bool branch_taken_0x188984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x188984) {
            ctx->pc = 0x188988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188984u;
            // 0x188988: 0x30a20020  andi        $v0, $a1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1889E0u;
            goto label_1889e0;
        }
    }
    ctx->pc = 0x18898Cu;
    // 0x18898c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x18898cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x188990: 0x9042bedb  lbu         $v0, -0x4125($v0)
    ctx->pc = 0x188990u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950619)));
    // 0x188994: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188994u;
    {
        const bool branch_taken_0x188994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188994) {
            ctx->pc = 0x188998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188994u;
            // 0x188998: 0x8c8300dc  lw          $v1, 0xDC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1889A4u;
            goto label_1889a4;
        }
    }
    ctx->pc = 0x18899Cu;
    // 0x18899c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x18899Cu;
    {
        const bool branch_taken_0x18899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1889A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18899Cu;
        // 0x1889a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18899c) {
            ctx->pc = 0x1889F4u;
            goto label_1889f4;
        }
    }
    ctx->pc = 0x1889A4u;
label_1889a4:
    // 0x1889a4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1889a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1889a8: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x1889a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x1889ac: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x1889acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x1889b0: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x1889b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1889b4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1889B4u;
    {
        const bool branch_taken_0x1889b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1889b4) {
            ctx->pc = 0x1889DCu;
            goto label_1889dc;
        }
    }
    ctx->pc = 0x1889BCu;
    // 0x1889bc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x1889bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x1889c0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1889c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1889c4: 0x8c42bee4  lw          $v0, -0x411C($v0)
    ctx->pc = 0x1889c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x1889c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1889c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1889cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1889CCu;
    {
        const bool branch_taken_0x1889cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889cc) {
            ctx->pc = 0x1889DCu;
            goto label_1889dc;
        }
    }
    ctx->pc = 0x1889D4u;
    // 0x1889d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1889D4u;
    {
        const bool branch_taken_0x1889d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1889D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889D4u;
        // 0x1889d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889d4) {
            ctx->pc = 0x1889F4u;
            goto label_1889f4;
        }
    }
    ctx->pc = 0x1889DCu;
label_1889dc:
    // 0x1889dc: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x1889dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_1889e0:
    // 0x1889e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1889e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1889e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1889e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1889e8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1889e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1889ec: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1889ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1889f0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1889f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1889f4:
    // 0x1889f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1889F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1889F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1889FCu;
    // 0x1889fc: 0x0  nop
    ctx->pc = 0x1889fcu;
    // NOP
    // 0x188a00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x188a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x188a04: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x188a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x188a08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x188a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x188a0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x188a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x188a10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x188a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x188a14: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x188a14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x188a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x188a1c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x188a1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188a20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188a24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188a28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188a2c: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x188a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x188a30: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x188A30u;
    SET_GPR_U32(ctx, 31, 0x188A38u);
    ctx->pc = 0x188A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A30u;
    // 0x188a34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x188A30u, 0x188A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A38u;
label_188a38:
    // 0x188a38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x188a38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a3c: 0x8ea3049c  lw          $v1, 0x49C($s5)
    ctx->pc = 0x188a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1180)));
    // 0x188a40: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x188a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x188a44: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x188a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x188a48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188a4c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x188A4Cu;
    {
        const bool branch_taken_0x188a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188a4c) {
            ctx->pc = 0x188A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188A4Cu;
            // 0x188a50: 0x8ea20494  lw          $v0, 0x494($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188A74u;
            goto label_188a74;
        }
    }
    ctx->pc = 0x188A54u;
    // 0x188a54: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x188A54u;
    SET_GPR_U32(ctx, 31, 0x188A5Cu);
    ctx->pc = 0x188A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A54u;
    // 0x188a58: 0x8ea400dc  lw          $a0, 0xDC($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x188A54u, 0x188A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A5Cu;
label_188a5c:
    // 0x188a5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x188a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x188a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188a64: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x188A64u;
    SET_GPR_U32(ctx, 31, 0x188A6Cu);
    ctx->pc = 0x188A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A64u;
    // 0x188a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x188A64u, 0x188A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A6Cu;
label_188a6c:
    // 0x188a6c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x188a6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x188a70: 0x8ea20494  lw          $v0, 0x494($s5)
    ctx->pc = 0x188a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1172)));
label_188a74:
    // 0x188a74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x188a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x188a78: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188A78u;
    {
        const bool branch_taken_0x188a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188a78) {
            ctx->pc = 0x188A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188A78u;
            // 0x188a7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188A88u;
            goto label_188a88;
        }
    }
    ctx->pc = 0x188A80u;
    // 0x188a80: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x188A80u;
    {
        const bool branch_taken_0x188a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A80u;
        // 0x188a84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a80) {
            ctx->pc = 0x188CB8u;
            goto label_188cb8;
        }
    }
    ctx->pc = 0x188A88u;
label_188a88:
    // 0x188a88: 0xc062338  jal         func_188CE0
    ctx->pc = 0x188A88u;
    SET_GPR_U32(ctx, 31, 0x188A90u);
    ctx->pc = 0x188CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188CE0u, 0x188A88u, 0x188A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A90u;
label_188a90:
    // 0x188a90: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x188a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x188a94: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x188a94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x188a98: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188A98u;
    {
        const bool branch_taken_0x188a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188a98) {
            ctx->pc = 0x188A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188A98u;
            // 0x188a9c: 0x3210ffff  andi        $s0, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x188AA8u;
            goto label_188aa8;
        }
    }
    ctx->pc = 0x188AA0u;
    // 0x188aa0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x188AA0u;
    {
        const bool branch_taken_0x188aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AA0u;
        // 0x188aa4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188aa0) {
            ctx->pc = 0x188CB8u;
            goto label_188cb8;
        }
    }
    ctx->pc = 0x188AA8u;
label_188aa8:
    // 0x188aa8: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x188AA8u;
    {
        const bool branch_taken_0x188aa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x188aa8) {
            ctx->pc = 0x188AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188AA8u;
            // 0x188aac: 0x8ea3049c  lw          $v1, 0x49C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188AC8u;
            goto label_188ac8;
        }
    }
    ctx->pc = 0x188AB0u;
    // 0x188ab0: 0x8ea3049c  lw          $v1, 0x49C($s5)
    ctx->pc = 0x188ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1180)));
    // 0x188ab4: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x188ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x188ab8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x188ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x188abc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188ac0: 0xaea2049c  sw          $v0, 0x49C($s5)
    ctx->pc = 0x188ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1180), GPR_U32(ctx, 2));
    // 0x188ac4: 0x8ea3049c  lw          $v1, 0x49C($s5)
    ctx->pc = 0x188ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1180)));
label_188ac8:
    // 0x188ac8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x188ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x188acc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188ad0: 0x54400079  bnel        $v0, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x188AD0u;
    {
        const bool branch_taken_0x188ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188ad0) {
            ctx->pc = 0x188AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188AD0u;
            // 0x188ad4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188CB8u;
            goto label_188cb8;
        }
    }
    ctx->pc = 0x188AD8u;
    // 0x188ad8: 0x92a20264  lbu         $v0, 0x264($s5)
    ctx->pc = 0x188ad8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 612)));
    // 0x188adc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x188adcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x188ae0: 0x10200074  beqz        $at, . + 4 + (0x74 << 2)
    ctx->pc = 0x188AE0u;
    {
        const bool branch_taken_0x188ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188ae0) {
            ctx->pc = 0x188CB4u;
            goto label_188cb4;
        }
    }
    ctx->pc = 0x188AE8u;
    // 0x188ae8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x188ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x188aec: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x188AECu;
    {
        const bool branch_taken_0x188aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188aec) {
            ctx->pc = 0x188CB4u;
            goto label_188cb4;
        }
    }
    ctx->pc = 0x188AF4u;
    // 0x188af4: 0x8ea3048c  lw          $v1, 0x48C($s5)
    ctx->pc = 0x188af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1164)));
    // 0x188af8: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x188af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x188afc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x188afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x188b00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x188b00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b04: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x188b04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188b0c: 0xaea2048c  sw          $v0, 0x48C($s5)
    ctx->pc = 0x188b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1164), GPR_U32(ctx, 2));
    // 0x188b10: 0x92a2008c  lbu         $v0, 0x8C($s5)
    ctx->pc = 0x188b10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x188b14: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x188b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x188b18: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x188B18u;
    {
        const bool branch_taken_0x188b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B18u;
        // 0x188b1c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b18) {
            ctx->pc = 0x188B24u;
            goto label_188b24;
        }
    }
    ctx->pc = 0x188B20u;
    // 0x188b20: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x188b20u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_188b24:
    // 0x188b24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x188b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b28: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x188B28u;
    SET_GPR_U32(ctx, 31, 0x188B30u);
    ctx->pc = 0x188B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B28u;
    // 0x188b2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x188B28u, 0x188B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B30u;
label_188b30:
    // 0x188b30: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188B30u;
    {
        const bool branch_taken_0x188b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b30) {
            ctx->pc = 0x188B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188B30u;
            // 0x188b34: 0x32c300ff  andi        $v1, $s6, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x188B40u;
            goto label_188b40;
        }
    }
    ctx->pc = 0x188B38u;
    // 0x188b38: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x188b38u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x188b3c: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x188b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_188b40:
    // 0x188b40: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x188b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x188b44: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x188b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x188b48: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x188B48u;
    {
        const bool branch_taken_0x188b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b48) {
            ctx->pc = 0x188B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188B48u;
            // 0x188b4c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188B94u;
            goto label_188b94;
        }
    }
    ctx->pc = 0x188B50u;
    // 0x188b50: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x188b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x188b54: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x188B54u;
    {
        const bool branch_taken_0x188b54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x188b54) {
            ctx->pc = 0x188B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188B54u;
            // 0x188b58: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188B74u;
            goto label_188b74;
        }
    }
    ctx->pc = 0x188B5Cu;
    // 0x188b5c: 0x8ea3048c  lw          $v1, 0x48C($s5)
    ctx->pc = 0x188b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1164)));
    // 0x188b60: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x188b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x188b64: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x188b64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188b68: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x188b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x188b6c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x188B6Cu;
    {
        const bool branch_taken_0x188b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B6Cu;
        // 0x188b70: 0xaea2048c  sw          $v0, 0x48C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b6c) {
            ctx->pc = 0x188BD0u;
            goto label_188bd0;
        }
    }
    ctx->pc = 0x188B74u;
label_188b74:
    // 0x188b74: 0x56020017  bnel        $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x188B74u;
    {
        const bool branch_taken_0x188b74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x188b74) {
            ctx->pc = 0x188B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188B74u;
            // 0x188b78: 0x92a30264  lbu         $v1, 0x264($s5) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188BD4u;
            goto label_188bd4;
        }
    }
    ctx->pc = 0x188B7Cu;
    // 0x188b7c: 0x8ea3048c  lw          $v1, 0x48C($s5)
    ctx->pc = 0x188b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1164)));
    // 0x188b80: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x188b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x188b84: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x188b84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188b88: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x188b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x188b8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x188B8Cu;
    {
        const bool branch_taken_0x188b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B8Cu;
        // 0x188b90: 0xaea2048c  sw          $v0, 0x48C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b8c) {
            ctx->pc = 0x188BD0u;
            goto label_188bd0;
        }
    }
    ctx->pc = 0x188B94u;
label_188b94:
    // 0x188b94: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x188B94u;
    {
        const bool branch_taken_0x188b94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x188b94) {
            ctx->pc = 0x188B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188B94u;
            // 0x188b98: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188BB4u;
            goto label_188bb4;
        }
    }
    ctx->pc = 0x188B9Cu;
    // 0x188b9c: 0x8ea3048c  lw          $v1, 0x48C($s5)
    ctx->pc = 0x188b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1164)));
    // 0x188ba0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x188ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x188ba4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x188ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188ba8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x188ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x188bac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x188BACu;
    {
        const bool branch_taken_0x188bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BACu;
        // 0x188bb0: 0xaea2048c  sw          $v0, 0x48C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bac) {
            ctx->pc = 0x188BD0u;
            goto label_188bd0;
        }
    }
    ctx->pc = 0x188BB4u;
label_188bb4:
    // 0x188bb4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188BB4u;
    {
        const bool branch_taken_0x188bb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x188bb4) {
            ctx->pc = 0x188BD0u;
            goto label_188bd0;
        }
    }
    ctx->pc = 0x188BBCu;
    // 0x188bbc: 0x8ea3048c  lw          $v1, 0x48C($s5)
    ctx->pc = 0x188bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1164)));
    // 0x188bc0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x188bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x188bc4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x188bc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188bc8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x188bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x188bcc: 0xaea2048c  sw          $v0, 0x48C($s5)
    ctx->pc = 0x188bccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1164), GPR_U32(ctx, 2));
label_188bd0:
    // 0x188bd0: 0x92a30264  lbu         $v1, 0x264($s5)
    ctx->pc = 0x188bd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 612)));
label_188bd4:
    // 0x188bd4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x188bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x188bd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x188bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188bdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x188bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x188be0: 0xa2a30264  sb          $v1, 0x264($s5)
    ctx->pc = 0x188be0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 612), (uint8_t)GPR_U32(ctx, 3));
    // 0x188be4: 0x8ea3049c  lw          $v1, 0x49C($s5)
    ctx->pc = 0x188be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1180)));
    // 0x188be8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x188be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x188bec: 0xc05a800  jal         func_16A000
    ctx->pc = 0x188BECu;
    SET_GPR_U32(ctx, 31, 0x188BF4u);
    ctx->pc = 0x188BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188BECu;
    // 0x188bf0: 0xaea2049c  sw          $v0, 0x49C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A000u, 0x188BECu, 0x188BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188BF4u;
label_188bf4:
    // 0x188bf4: 0x8ea3048c  lw          $v1, 0x48C($s5)
    ctx->pc = 0x188bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1164)));
    // 0x188bf8: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x188bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x188bfc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x188BFCu;
    {
        const bool branch_taken_0x188bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188bfc) {
            ctx->pc = 0x188C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188BFCu;
            // 0x188c00: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x188C1Cu;
            goto label_188c1c;
        }
    }
    ctx->pc = 0x188C04u;
    // 0x188c04: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x188c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x188c08: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x188c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x188c0c: 0x24423ec0  addiu       $v0, $v0, 0x3EC0
    ctx->pc = 0x188c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16064));
    // 0x188c10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188c14: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x188C14u;
    {
        const bool branch_taken_0x188c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C14u;
        // 0x188c18: 0x84540000  lh          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c14) {
            ctx->pc = 0x188CB4u;
            goto label_188cb4;
        }
    }
    ctx->pc = 0x188C1Cu;
label_188c1c:
    // 0x188c1c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x188C1Cu;
    {
        const bool branch_taken_0x188c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188c1c) {
            ctx->pc = 0x188C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188C1Cu;
            // 0x188c20: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x188C3Cu;
            goto label_188c3c;
        }
    }
    ctx->pc = 0x188C24u;
    // 0x188c24: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x188c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x188c28: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x188c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x188c2c: 0x24423ec8  addiu       $v0, $v0, 0x3EC8
    ctx->pc = 0x188c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16072));
    // 0x188c30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188c34: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x188C34u;
    {
        const bool branch_taken_0x188c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C34u;
        // 0x188c38: 0x84540000  lh          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c34) {
            ctx->pc = 0x188CB4u;
            goto label_188cb4;
        }
    }
    ctx->pc = 0x188C3Cu;
label_188c3c:
    // 0x188c3c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x188C3Cu;
    {
        const bool branch_taken_0x188c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188c3c) {
            ctx->pc = 0x188C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188C3Cu;
            // 0x188c40: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x188C7Cu;
            goto label_188c7c;
        }
    }
    ctx->pc = 0x188C44u;
    // 0x188c44: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x188c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x188c48: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x188c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x188c4c: 0x24423ed0  addiu       $v0, $v0, 0x3ED0
    ctx->pc = 0x188c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16080));
    // 0x188c50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x188c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188c58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c5c: 0x84540000  lh          $s4, 0x0($v0)
    ctx->pc = 0x188c5cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188c60: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x188c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188c64: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x188c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x188c68: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x188c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x188c6c: 0xc062770  jal         func_189DC0
    ctx->pc = 0x188C6Cu;
    SET_GPR_U32(ctx, 31, 0x188C74u);
    ctx->pc = 0x188C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188C6Cu;
    // 0x188c70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189DC0u, 0x188C6Cu, 0x188C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C74u;
label_188c74:
    // 0x188c74: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x188C74u;
    {
        const bool branch_taken_0x188c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188c74) {
            ctx->pc = 0x188CB4u;
            goto label_188cb4;
        }
    }
    ctx->pc = 0x188C7Cu;
label_188c7c:
    // 0x188c7c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x188C7Cu;
    {
        const bool branch_taken_0x188c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188c7c) {
            ctx->pc = 0x188CB4u;
            goto label_188cb4;
        }
    }
    ctx->pc = 0x188C84u;
    // 0x188c84: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x188c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x188c88: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x188c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x188c8c: 0x24423ed8  addiu       $v0, $v0, 0x3ED8
    ctx->pc = 0x188c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16088));
    // 0x188c90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x188c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188c98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c9c: 0x84540000  lh          $s4, 0x0($v0)
    ctx->pc = 0x188c9cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188ca0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x188ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188ca4: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x188ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x188ca8: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x188ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x188cac: 0xc062770  jal         func_189DC0
    ctx->pc = 0x188CACu;
    SET_GPR_U32(ctx, 31, 0x188CB4u);
    ctx->pc = 0x188CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188CACu;
    // 0x188cb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189DC0u, 0x188CACu, 0x188CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188CB4u;
label_188cb4:
    // 0x188cb4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x188cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_188cb8:
    // 0x188cb8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x188cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x188cbc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x188cbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188cc0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x188cc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188cc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x188cc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188cc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x188cc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188ccc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188cccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188cd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188cd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x188CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CD8u;
        // 0x188cdc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188CE0u;
}
