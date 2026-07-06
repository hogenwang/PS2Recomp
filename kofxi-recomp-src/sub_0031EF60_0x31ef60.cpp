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

// Function: sub_0031EF60
// Address: 0x31ef60 - 0x31f0a0
void sub_0031EF60_0x31ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EF60_0x31ef60");
#endif

    switch (ctx->pc) {
        case 0x31efccu: goto label_31efcc;
        case 0x31efe8u: goto label_31efe8;
        case 0x31f038u: goto label_31f038;
        default: break;
    }

    ctx->pc = 0x31ef60u;

    // 0x31ef60: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x31ef60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x31ef64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31ef68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31ef68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31ef6c: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x31ef6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x31ef70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31ef70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31ef74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31ef74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31ef78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31ef78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ef7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31ef7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31ef80: 0xffa70178  sd          $a3, 0x178($sp)
    ctx->pc = 0x31ef80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 7));
    // 0x31ef84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31ef84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ef88: 0xffa80180  sd          $t0, 0x180($sp)
    ctx->pc = 0x31ef88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 8));
    // 0x31ef8c: 0xffa90188  sd          $t1, 0x188($sp)
    ctx->pc = 0x31ef8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 9));
    // 0x31ef90: 0xffaa0190  sd          $t2, 0x190($sp)
    ctx->pc = 0x31ef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 10));
    // 0x31ef94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EF94u;
    {
        const bool branch_taken_0x31ef94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF94u;
        // 0x31ef98: 0xffab0198  sd          $t3, 0x198($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef94) {
            ctx->pc = 0x31EFA4u;
            goto label_31efa4;
        }
    }
    ctx->pc = 0x31EF9Cu;
    // 0x31ef9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31EF9Cu;
    {
        const bool branch_taken_0x31ef9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF9Cu;
        // 0x31efa0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ef9c) {
            ctx->pc = 0x31EFB0u;
            goto label_31efb0;
        }
    }
    ctx->pc = 0x31EFA4u;
label_31efa4:
    // 0x31efa4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x31efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31efa8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x31efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31efac: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x31efacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_31efb0:
    // 0x31efb0: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x31efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x31efb4: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x31efb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x31efb8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x31efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31efbc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31efbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31efc0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x31efc0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x31efc4: 0xc04b984  jal         func_12E610
    ctx->pc = 0x31EFC4u;
    SET_GPR_U32(ctx, 31, 0x31EFCCu);
    ctx->pc = 0x31EFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EFC4u;
    // 0x31efc8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E610u, 0x31EFC4u, 0x31EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EFCCu;
label_31efcc:
    // 0x31efcc: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x31efccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x31efd0: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x31efd0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31efd4: 0x83a30040  lb          $v1, 0x40($sp)
    ctx->pc = 0x31efd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31efd8: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x31EFD8u;
    {
        const bool branch_taken_0x31efd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFD8u;
        // 0x31efdc: 0x27b10040  addiu       $s1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31efd8) {
            ctx->pc = 0x31F080u;
            goto label_31f080;
        }
    }
    ctx->pc = 0x31EFE0u;
    // 0x31efe0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x31efe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x31efe4: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x31efe4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_31efe8:
    // 0x31efe8: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31efec: 0x8c422a10  lw          $v0, 0x2A10($v0)
    ctx->pc = 0x31efecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10768)));
    // 0x31eff0: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x31eff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x31eff4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EFF4u;
    {
        const bool branch_taken_0x31eff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31eff4) {
            ctx->pc = 0x31F008u;
            goto label_31f008;
        }
    }
    ctx->pc = 0x31EFFCu;
    // 0x31effc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31effcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f000: 0xb8020001  swr         $v0, 0x1($zero)
    ctx->pc = 0x31f000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31f004: 0xa8020004  swl         $v0, 0x4($zero)
    ctx->pc = 0x31f004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_31f008:
    // 0x31f008: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x31f008u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31f00c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x31f00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31f010: 0x28820061  slti        $v0, $a0, 0x61
    ctx->pc = 0x31f010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x31f014: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F014u;
    {
        const bool branch_taken_0x31f014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F014u;
        // 0x31f018: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f014) {
            ctx->pc = 0x31F030u;
            goto label_31f030;
        }
    }
    ctx->pc = 0x31F01Cu;
    // 0x31f01c: 0x2881007b  slti        $at, $a0, 0x7B
    ctx->pc = 0x31f01cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)123) ? 1 : 0);
    // 0x31f020: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F020u;
    {
        const bool branch_taken_0x31f020 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f020) {
            ctx->pc = 0x31F030u;
            goto label_31f030;
        }
    }
    ctx->pc = 0x31F028u;
    // 0x31f028: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x31f028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x31f02c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x31f02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_31f030:
    // 0x31f030: 0xc0c7a88  jal         func_31EA20
    ctx->pc = 0x31F030u;
    SET_GPR_U32(ctx, 31, 0x31F038u);
    ctx->pc = 0x31EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA20u, 0x31F030u, 0x31F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F038u;
label_31f038:
    // 0x31f038: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31f038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31f03c: 0x3c0701da  lui         $a3, 0x1DA
    ctx->pc = 0x31f03cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)474 << 16));
    // 0x31f040: 0x8c692a10  lw          $t1, 0x2A10($v1)
    ctx->pc = 0x31f040u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10768)));
    // 0x31f044: 0x24e742c0  addiu       $a3, $a3, 0x42C0
    ctx->pc = 0x31f044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17088));
    // 0x31f048: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x31f048u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31f04c: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x31f04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x31f050: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31f050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31f054: 0x25250001  addiu       $a1, $t1, 0x1
    ctx->pc = 0x31f054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x31f058: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x31f058u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x31f05c: 0xac652a10  sw          $a1, 0x2A10($v1)
    ctx->pc = 0x31f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10768), GPR_U32(ctx, 5));
    // 0x31f060: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x31f060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x31f064: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31f064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31f068: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x31f068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x31f06c: 0xa4720000  sh          $s2, 0x0($v1)
    ctx->pc = 0x31f06cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x31f070: 0xa4700002  sh          $s0, 0x2($v1)
    ctx->pc = 0x31f070u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x31f074: 0x30d2ffff  andi        $s2, $a2, 0xFFFF
    ctx->pc = 0x31f074u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x31f078: 0x1480ffdb  bnez        $a0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x31F078u;
    {
        const bool branch_taken_0x31f078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F078u;
        // 0x31f07c: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f078) {
            ctx->pc = 0x31EFE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31efe8;
        }
    }
    ctx->pc = 0x31F080u;
label_31f080:
    // 0x31f080: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31f080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31f084: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31f084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31f088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31f088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f08c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31f08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f090: 0x3e00008  jr          $ra
    ctx->pc = 0x31F090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F090u;
        // 0x31f094: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F098u;
    // 0x31f098: 0x0  nop
    ctx->pc = 0x31f098u;
    // NOP
    // 0x31f09c: 0x0  nop
    ctx->pc = 0x31f09cu;
    // NOP
}
