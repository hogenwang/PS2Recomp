#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032C8E0
// Address: 0x32c8e0 - 0x32cf10
void sub_0032C8E0_0x32c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C8E0_0x32c8e0");
#endif

    switch (ctx->pc) {
        case 0x32c910u: goto label_32c910;
        case 0x32c930u: goto label_32c930;
        case 0x32c95cu: goto label_32c95c;
        case 0x32c96cu: goto label_32c96c;
        case 0x32c984u: goto label_32c984;
        case 0x32c998u: goto label_32c998;
        case 0x32c9b0u: goto label_32c9b0;
        case 0x32c9c4u: goto label_32c9c4;
        case 0x32c9f0u: goto label_32c9f0;
        case 0x32ca20u: goto label_32ca20;
        case 0x32ca40u: goto label_32ca40;
        case 0x32ca70u: goto label_32ca70;
        case 0x32ca94u: goto label_32ca94;
        case 0x32caecu: goto label_32caec;
        case 0x32cb00u: goto label_32cb00;
        case 0x32cb50u: goto label_32cb50;
        case 0x32cb64u: goto label_32cb64;
        case 0x32cb7cu: goto label_32cb7c;
        case 0x32cba0u: goto label_32cba0;
        case 0x32cbd8u: goto label_32cbd8;
        case 0x32cc28u: goto label_32cc28;
        case 0x32cc30u: goto label_32cc30;
        case 0x32cc38u: goto label_32cc38;
        case 0x32cc50u: goto label_32cc50;
        case 0x32cc80u: goto label_32cc80;
        case 0x32cc90u: goto label_32cc90;
        case 0x32ccacu: goto label_32ccac;
        case 0x32ccc0u: goto label_32ccc0;
        case 0x32ccd4u: goto label_32ccd4;
        case 0x32cd14u: goto label_32cd14;
        case 0x32cd5cu: goto label_32cd5c;
        case 0x32cd7cu: goto label_32cd7c;
        case 0x32cdb8u: goto label_32cdb8;
        case 0x32cdd0u: goto label_32cdd0;
        case 0x32cdf8u: goto label_32cdf8;
        case 0x32ce1cu: goto label_32ce1c;
        case 0x32ce70u: goto label_32ce70;
        case 0x32ce84u: goto label_32ce84;
        case 0x32ce9cu: goto label_32ce9c;
        case 0x32ced0u: goto label_32ced0;
        case 0x32cee4u: goto label_32cee4;
        case 0x32cefcu: goto label_32cefc;
        default: break;
    }

    ctx->pc = 0x32c8e0u;

    // 0x32c8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32c8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32c8e4: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32c8e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32c8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32c8ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x32c8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32c8f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32c8f4: 0x2463f380  addiu       $v1, $v1, -0xC80
    ctx->pc = 0x32c8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964096));
    // 0x32c8f8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x32c8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32c8fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32c900: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32C900u;
    {
        const bool branch_taken_0x32c900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c900) {
            ctx->pc = 0x32C904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32C900u;
            // 0x32c904: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32C914u;
            goto label_32c914;
        }
    }
    ctx->pc = 0x32C908u;
    // 0x32c908: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x32C908u;
    SET_GPR_U32(ctx, 31, 0x32C910u);
    ctx->pc = 0x1A4DB0u;
    if (runtime->hasFunction(0x1A4DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A4DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C910u; }
        if (ctx->pc != 0x32C910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4DB0_0x1a4db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C910u; }
        if (ctx->pc != 0x32C910u) { return; }
    }
    ctx->pc = 0x32C910u;
label_32c910:
    // 0x32c910: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32c910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_32c914:
    // 0x32c914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32c914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c91c: 0x3e00008  jr          $ra
    ctx->pc = 0x32C91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32C91Cu;
            // 0x32c920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32C924u;
    // 0x32c924: 0x0  nop
    ctx->pc = 0x32c924u;
    // NOP
    // 0x32c928: 0x0  nop
    ctx->pc = 0x32c928u;
    // NOP
    // 0x32c92c: 0x0  nop
    ctx->pc = 0x32c92cu;
    // NOP
label_32c930:
    // 0x32c930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32c930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32c934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32c934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32c938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32c938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32c93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32c940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32c940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c944: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x32c944u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x32c948: 0x96020038  lhu         $v0, 0x38($s0)
    ctx->pc = 0x32c948u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x32c94c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32c94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c950: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32c950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32c954: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x32C954u;
    SET_GPR_U32(ctx, 31, 0x32C95Cu);
    ctx->pc = 0x32C958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C954u;
            // 0x32c958: 0xa6020038  sh          $v0, 0x38($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (runtime->hasFunction(0x11B970u)) {
        auto targetFn = runtime->lookupFunction(0x11B970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C95Cu; }
        if (ctx->pc != 0x32C95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B970_0x11b970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C95Cu; }
        if (ctx->pc != 0x32C95Cu) { return; }
    }
    ctx->pc = 0x32C95Cu;
label_32c95c:
    // 0x32c95c: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x32C95Cu;
    {
        const bool branch_taken_0x32c95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c95c) {
            ctx->pc = 0x32C960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32C95Cu;
            // 0x32c960: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CA24u;
            goto label_32ca24;
        }
    }
    ctx->pc = 0x32C964u;
    // 0x32c964: 0xc047196  jal         func_11C658
    ctx->pc = 0x32C964u;
    SET_GPR_U32(ctx, 31, 0x32C96Cu);
    ctx->pc = 0x11C658u;
    if (runtime->hasFunction(0x11C658u)) {
        auto targetFn = runtime->lookupFunction(0x11C658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C96Cu; }
        if (ctx->pc != 0x32C96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C658_0x11c658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C96Cu; }
        if (ctx->pc != 0x32C96Cu) { return; }
    }
    ctx->pc = 0x32C96Cu;
label_32c96c:
    // 0x32c96c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x32C96Cu;
    {
        const bool branch_taken_0x32c96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c96c) {
            ctx->pc = 0x32C970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32C96Cu;
            // 0x32c970: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32C9D4u;
            goto label_32c9d4;
        }
    }
    ctx->pc = 0x32C974u;
    // 0x32c974: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32c974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32c978: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x32c978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x32c97c: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x32C97Cu;
    SET_GPR_U32(ctx, 31, 0x32C984u);
    ctx->pc = 0x32C980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C97Cu;
            // 0x32c980: 0x24844590  addiu       $a0, $a0, 0x4590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C984u; }
        if (ctx->pc != 0x32C984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C984u; }
        if (ctx->pc != 0x32C984u) { return; }
    }
    ctx->pc = 0x32C984u;
label_32c984:
    // 0x32c984: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x32c984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x32c988: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x32c988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x32c98c: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x32c98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x32c990: 0xc06909c  jal         func_1A4270
    ctx->pc = 0x32C990u;
    SET_GPR_U32(ctx, 31, 0x32C998u);
    ctx->pc = 0x32C994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C990u;
            // 0x32c994: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4270u;
    if (runtime->hasFunction(0x1A4270u)) {
        auto targetFn = runtime->lookupFunction(0x1A4270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C998u; }
        if (ctx->pc != 0x32C998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4270_0x1a4270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C998u; }
        if (ctx->pc != 0x32C998u) { return; }
    }
    ctx->pc = 0x32C998u;
label_32c998:
    // 0x32c998: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x32c998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x32c99c: 0xa3a00032  sb          $zero, 0x32($sp)
    ctx->pc = 0x32c99cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x32c9a0: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x32c9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x32c9a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c9a8: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x32c9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x32c9ac: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x32c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_32c9b0:
    // 0x32c9b0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x32c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x32c9b4: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x32c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x32c9b8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x32c9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32c9bc: 0xc0470ea  jal         func_11C3A8
    ctx->pc = 0x32C9BCu;
    SET_GPR_U32(ctx, 31, 0x32C9C4u);
    ctx->pc = 0x32C9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32C9BCu;
            // 0x32c9c0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C3A8u;
    if (runtime->hasFunction(0x11C3A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C9C4u; }
        if (ctx->pc != 0x32C9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C3A8_0x11c3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C9C4u; }
        if (ctx->pc != 0x32C9C4u) { return; }
    }
    ctx->pc = 0x32C9C4u;
label_32c9c4:
    // 0x32c9c4: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32C9C4u;
    {
        const bool branch_taken_0x32c9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c9c4) {
            ctx->pc = 0x32C9C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32C9C4u;
            // 0x32c9c8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32C9B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32c9b0;
        }
    }
    ctx->pc = 0x32C9CCu;
    // 0x32c9cc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x32C9CCu;
    {
        const bool branch_taken_0x32c9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c9cc) {
            ctx->pc = 0x32CA20u;
            goto label_32ca20;
        }
    }
    ctx->pc = 0x32C9D4u;
label_32c9d4:
    // 0x32c9d4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32C9D4u;
    {
        const bool branch_taken_0x32c9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c9d4) {
            ctx->pc = 0x32C9D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32C9D4u;
            // 0x32c9d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32C9E8u;
            goto label_32c9e8;
        }
    }
    ctx->pc = 0x32C9DCu;
    // 0x32c9dc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x32c9e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32c9e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c9e8:
    // 0x32c9e8: 0xc055728  jal         func_155CA0
    ctx->pc = 0x32C9E8u;
    SET_GPR_U32(ctx, 31, 0x32C9F0u);
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C9F0u; }
        if (ctx->pc != 0x32C9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32C9F0u; }
        if (ctx->pc != 0x32C9F0u) { return; }
    }
    ctx->pc = 0x32C9F0u;
label_32c9f0:
    // 0x32c9f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32c9f4: 0x8c42d3a0  lw          $v0, -0x2C60($v0)
    ctx->pc = 0x32c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955936)));
    // 0x32c9f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32C9F8u;
    {
        const bool branch_taken_0x32c9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c9f8) {
            ctx->pc = 0x32C9FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32C9F8u;
            // 0x32c9fc: 0x96060038  lhu         $a2, 0x38($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CA10u;
            goto label_32ca10;
        }
    }
    ctx->pc = 0x32CA00u;
    // 0x32ca00: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x32ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32ca04: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32ca08: 0xac43d3a0  sw          $v1, -0x2C60($v0)
    ctx->pc = 0x32ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955936), GPR_U32(ctx, 3));
    // 0x32ca0c: 0x96060038  lhu         $a2, 0x38($s0)
    ctx->pc = 0x32ca0cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_32ca10:
    // 0x32ca10: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32ca14: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x32ca14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x32ca18: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x32CA18u;
    SET_GPR_U32(ctx, 31, 0x32CA20u);
    ctx->pc = 0x32CA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CA18u;
            // 0x32ca1c: 0x248445b0  addiu       $a0, $a0, 0x45B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CA20u; }
        if (ctx->pc != 0x32CA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CA20u; }
        if (ctx->pc != 0x32CA20u) { return; }
    }
    ctx->pc = 0x32CA20u;
label_32ca20:
    // 0x32ca20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32ca20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32ca24:
    // 0x32ca24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32ca24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ca28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32ca28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ca2c: 0x3e00008  jr          $ra
    ctx->pc = 0x32CA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CA2Cu;
            // 0x32ca30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32CA34u;
    // 0x32ca34: 0x0  nop
    ctx->pc = 0x32ca34u;
    // NOP
    // 0x32ca38: 0x0  nop
    ctx->pc = 0x32ca38u;
    // NOP
    // 0x32ca3c: 0x0  nop
    ctx->pc = 0x32ca3cu;
    // NOP
label_32ca40:
    // 0x32ca40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32ca40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32ca44: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32ca48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32ca48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32ca4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32ca4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32ca50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32ca50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32ca54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32ca54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32ca58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ca58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32ca5c: 0x8c63d3a0  lw          $v1, -0x2C60($v1)
    ctx->pc = 0x32ca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955936)));
    // 0x32ca60: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x32CA60u;
    {
        const bool branch_taken_0x32ca60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CA60u;
            // 0x32ca64: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ca60) {
            ctx->pc = 0x32CB7Cu;
            goto label_32cb7c;
        }
    }
    ctx->pc = 0x32CA68u;
    // 0x32ca68: 0xc047062  jal         func_11C188
    ctx->pc = 0x32CA68u;
    SET_GPR_U32(ctx, 31, 0x32CA70u);
    ctx->pc = 0x32CA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CA68u;
            // 0x32ca6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C188u;
    if (runtime->hasFunction(0x11C188u)) {
        auto targetFn = runtime->lookupFunction(0x11C188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CA70u; }
        if (ctx->pc != 0x32CA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C188_0x11c188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CA70u; }
        if (ctx->pc != 0x32CA70u) { return; }
    }
    ctx->pc = 0x32CA70u;
label_32ca70:
    // 0x32ca70: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x32ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32ca74: 0x50430042  beql        $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x32CA74u;
    {
        const bool branch_taken_0x32ca74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x32ca74) {
            ctx->pc = 0x32CA78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CA74u;
            // 0x32ca78: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CB80u;
            goto label_32cb80;
        }
    }
    ctx->pc = 0x32CA7Cu;
    // 0x32ca7c: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x32ca7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x32ca80: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x32ca80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x32ca84: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x32ca84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x32ca88: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x32ca88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x32ca8c: 0xc06909c  jal         func_1A4270
    ctx->pc = 0x32CA8Cu;
    SET_GPR_U32(ctx, 31, 0x32CA94u);
    ctx->pc = 0x32CA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CA8Cu;
            // 0x32ca90: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4270u;
    if (runtime->hasFunction(0x1A4270u)) {
        auto targetFn = runtime->lookupFunction(0x1A4270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CA94u; }
        if (ctx->pc != 0x32CA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4270_0x1a4270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CA94u; }
        if (ctx->pc != 0x32CA94u) { return; }
    }
    ctx->pc = 0x32CA94u;
label_32ca94:
    // 0x32ca94: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32CA94u;
    {
        const bool branch_taken_0x32ca94 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x32ca94) {
            ctx->pc = 0x32CA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CA94u;
            // 0x32ca98: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CAACu;
            goto label_32caac;
        }
    }
    ctx->pc = 0x32CA9Cu;
    // 0x32ca9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32caa0: 0xb8020001  swr         $v0, 0x1($zero)
    ctx->pc = 0x32caa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x32caa4: 0xa8020004  swl         $v0, 0x4($zero)
    ctx->pc = 0x32caa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x32caa8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x32caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_32caac:
    // 0x32caac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32caacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cab0: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x32cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x32cab4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x32cab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x32cab8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32cab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x32cabc: 0x9203002c  lbu         $v1, 0x2C($s0)
    ctx->pc = 0x32cabcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x32cac0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x32CAC0u;
    {
        const bool branch_taken_0x32cac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32CAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CAC0u;
            // 0x32cac4: 0x492c0  sll         $s2, $a0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cac0) {
            ctx->pc = 0x32CB14u;
            goto label_32cb14;
        }
    }
    ctx->pc = 0x32CAC8u;
    // 0x32cac8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x32CAC8u;
    {
        const bool branch_taken_0x32cac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cac8) {
            ctx->pc = 0x32CACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CAC8u;
            // 0x32cacc: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CAD8u;
            goto label_32cad8;
        }
    }
    ctx->pc = 0x32CAD0u;
    // 0x32cad0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32CAD0u;
    {
        const bool branch_taken_0x32cad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cad0) {
            ctx->pc = 0x32CB1Cu;
            goto label_32cb1c;
        }
    }
    ctx->pc = 0x32CAD8u;
label_32cad8:
    // 0x32cad8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32cad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32cadc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32CADCu;
    {
        const bool branch_taken_0x32cadc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cadc) {
            ctx->pc = 0x32CAE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CADCu;
            // 0x32cae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CAF8u;
            goto label_32caf8;
        }
    }
    ctx->pc = 0x32CAE4u;
    // 0x32cae4: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x32CAE4u;
    SET_GPR_U32(ctx, 31, 0x32CAECu);
    ctx->pc = 0x1A4DB0u;
    if (runtime->hasFunction(0x1A4DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A4DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CAECu; }
        if (ctx->pc != 0x32CAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4DB0_0x1a4db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CAECu; }
        if (ctx->pc != 0x32CAECu) { return; }
    }
    ctx->pc = 0x32CAECu;
label_32caec:
    // 0x32caec: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x32caecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x32caf0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x32caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x32caf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32caf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32caf8:
    // 0x32caf8: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x32CAF8u;
    SET_GPR_U32(ctx, 31, 0x32CB00u);
    ctx->pc = 0x1A4B80u;
    if (runtime->hasFunction(0x1A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CB00u; }
        if (ctx->pc != 0x32CB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4B80_0x1a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CB00u; }
        if (ctx->pc != 0x32CB00u) { return; }
    }
    ctx->pc = 0x32CB00u;
label_32cb00:
    // 0x32cb00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32cb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cb04: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32CB04u;
    {
        const bool branch_taken_0x32cb04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cb04) {
            ctx->pc = 0x32CB1Cu;
            goto label_32cb1c;
        }
    }
    ctx->pc = 0x32CB0Cu;
    // 0x32cb0c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x32CB0Cu;
    {
        const bool branch_taken_0x32cb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cb0c) {
            ctx->pc = 0x32CB7Cu;
            goto label_32cb7c;
        }
    }
    ctx->pc = 0x32CB14u;
label_32cb14:
    // 0x32cb14: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x32cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x32cb18: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x32cb18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32cb1c:
    // 0x32cb1c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32cb20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cb24: 0x8c45d3a0  lw          $a1, -0x2C60($v0)
    ctx->pc = 0x32cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955936)));
    // 0x32cb28: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x32cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x32cb2c: 0xa3a30051  sb          $v1, 0x51($sp)
    ctx->pc = 0x32cb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 3));
    // 0x32cb30: 0xa3a00052  sb          $zero, 0x52($sp)
    ctx->pc = 0x32cb30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 82), (uint8_t)GPR_U32(ctx, 0));
    // 0x32cb34: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32cb38: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x32cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32cb3c: 0xa3a40050  sb          $a0, 0x50($sp)
    ctx->pc = 0x32cb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 4));
    // 0x32cb40: 0xac43d3a0  sw          $v1, -0x2C60($v0)
    ctx->pc = 0x32cb40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955936), GPR_U32(ctx, 3));
    // 0x32cb44: 0xa6000038  sh          $zero, 0x38($s0)
    ctx->pc = 0x32cb44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x32cb48: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x32cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x32cb4c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x32cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_32cb50:
    // 0x32cb50: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x32cb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x32cb54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32cb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cb58: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x32cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x32cb5c: 0xc0470ea  jal         func_11C3A8
    ctx->pc = 0x32CB5Cu;
    SET_GPR_U32(ctx, 31, 0x32CB64u);
    ctx->pc = 0x32CB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CB5Cu;
            // 0x32cb60: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C3A8u;
    if (runtime->hasFunction(0x11C3A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CB64u; }
        if (ctx->pc != 0x32CB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C3A8_0x11c3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CB64u; }
        if (ctx->pc != 0x32CB64u) { return; }
    }
    ctx->pc = 0x32CB64u;
label_32cb64:
    // 0x32cb64: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32CB64u;
    {
        const bool branch_taken_0x32cb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cb64) {
            ctx->pc = 0x32CB50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32cb50;
        }
    }
    ctx->pc = 0x32CB6Cu;
    // 0x32cb6c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x32cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x32cb70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32cb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cb74: 0xc055768  jal         func_155DA0
    ctx->pc = 0x32CB74u;
    SET_GPR_U32(ctx, 31, 0x32CB7Cu);
    ctx->pc = 0x32CB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CB74u;
            // 0x32cb78: 0x2484c930  addiu       $a0, $a0, -0x36D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CB7Cu; }
        if (ctx->pc != 0x32CB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CB7Cu; }
        if (ctx->pc != 0x32CB7Cu) { return; }
    }
    ctx->pc = 0x32CB7Cu;
label_32cb7c:
    // 0x32cb7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32cb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32cb80:
    // 0x32cb80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32cb80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32cb84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32cb84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32cb88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32cb88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cb8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32cb8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cb90: 0x3e00008  jr          $ra
    ctx->pc = 0x32CB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CB90u;
            // 0x32cb94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32CB98u;
    // 0x32cb98: 0x0  nop
    ctx->pc = 0x32cb98u;
    // NOP
    // 0x32cb9c: 0x0  nop
    ctx->pc = 0x32cb9cu;
    // NOP
label_32cba0:
    // 0x32cba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32cba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32cba4: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x32cba4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x32cba8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32cba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32cbac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32cbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32cbb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32cbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32cbb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32cbb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cbb8: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x32cbb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x32cbbc: 0x96020038  lhu         $v0, 0x38($s0)
    ctx->pc = 0x32cbbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x32cbc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32cbc4: 0xa6020038  sh          $v0, 0x38($s0)
    ctx->pc = 0x32cbc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x32cbc8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x32cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x32cbcc: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x32cbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x32cbd0: 0xc06912c  jal         func_1A44B0
    ctx->pc = 0x32CBD0u;
    SET_GPR_U32(ctx, 31, 0x32CBD8u);
    ctx->pc = 0x32CBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CBD0u;
            // 0x32cbd4: 0x26070048  addiu       $a3, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A44B0u;
    if (runtime->hasFunction(0x1A44B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A44B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CBD8u; }
        if (ctx->pc != 0x32CBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A44B0_0x1a44b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CBD8u; }
        if (ctx->pc != 0x32CBD8u) { return; }
    }
    ctx->pc = 0x32CBD8u;
label_32cbd8:
    // 0x32cbd8: 0x443000a  bgezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32CBD8u;
    {
        const bool branch_taken_0x32cbd8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x32cbd8) {
            ctx->pc = 0x32CBDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CBD8u;
            // 0x32cbdc: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CC04u;
            goto label_32cc04;
        }
    }
    ctx->pc = 0x32CBE0u;
    // 0x32cbe0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x32cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x32cbe4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x32cbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x32cbe8: 0x22823  negu        $a1, $v0
    ctx->pc = 0x32cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x32cbec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32cbf0: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x32cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x32cbf4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x32cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x32cbf8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32cbfc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x32CBFCu;
    {
        const bool branch_taken_0x32cbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CBFCu;
            // 0x32cc00: 0xae030044  sw          $v1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cbfc) {
            ctx->pc = 0x32CC38u;
            goto label_32cc38;
        }
    }
    ctx->pc = 0x32CC04u;
label_32cc04:
    // 0x32cc04: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32CC04u;
    {
        const bool branch_taken_0x32cc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cc04) {
            ctx->pc = 0x32CC08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CC04u;
            // 0x32cc08: 0x96060038  lhu         $a2, 0x38($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CC18u;
            goto label_32cc18;
        }
    }
    ctx->pc = 0x32CC0Cu;
    // 0x32cc0c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x32cc10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32cc14: 0x96060038  lhu         $a2, 0x38($s0)
    ctx->pc = 0x32cc14u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_32cc18:
    // 0x32cc18: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32cc1c: 0x248445d0  addiu       $a0, $a0, 0x45D0
    ctx->pc = 0x32cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17872));
    // 0x32cc20: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x32CC20u;
    SET_GPR_U32(ctx, 31, 0x32CC28u);
    ctx->pc = 0x32CC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CC20u;
            // 0x32cc24: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC28u; }
        if (ctx->pc != 0x32CC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC28u; }
        if (ctx->pc != 0x32CC28u) { return; }
    }
    ctx->pc = 0x32CC28u;
label_32cc28:
    // 0x32cc28: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x32CC28u;
    SET_GPR_U32(ctx, 31, 0x32CC30u);
    ctx->pc = 0x32CC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CC28u;
            // 0x32cc2c: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DB0u;
    if (runtime->hasFunction(0x1A4DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A4DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC30u; }
        if (ctx->pc != 0x32CC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4DB0_0x1a4db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC30u; }
        if (ctx->pc != 0x32CC30u) { return; }
    }
    ctx->pc = 0x32CC30u;
label_32cc30:
    // 0x32cc30: 0xc055728  jal         func_155CA0
    ctx->pc = 0x32CC30u;
    SET_GPR_U32(ctx, 31, 0x32CC38u);
    ctx->pc = 0x32CC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CC30u;
            // 0x32cc34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC38u; }
        if (ctx->pc != 0x32CC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC38u; }
        if (ctx->pc != 0x32CC38u) { return; }
    }
    ctx->pc = 0x32CC38u;
label_32cc38:
    // 0x32cc38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32cc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32cc3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32cc3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cc40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32cc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cc44: 0x3e00008  jr          $ra
    ctx->pc = 0x32CC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CC44u;
            // 0x32cc48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32CC4Cu;
    // 0x32cc4c: 0x0  nop
    ctx->pc = 0x32cc4cu;
    // NOP
label_32cc50:
    // 0x32cc50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32cc54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32cc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32cc58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32cc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32cc5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32cc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32cc60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32cc60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32cc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32cc68: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x32cc68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x32cc6c: 0x96220038  lhu         $v0, 0x38($s1)
    ctx->pc = 0x32cc6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x32cc70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cc74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32cc78: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x32CC78u;
    SET_GPR_U32(ctx, 31, 0x32CC80u);
    ctx->pc = 0x32CC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CC78u;
            // 0x32cc7c: 0xa6220038  sh          $v0, 0x38($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 56), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (runtime->hasFunction(0x11B970u)) {
        auto targetFn = runtime->lookupFunction(0x11B970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC80u; }
        if (ctx->pc != 0x32CC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B970_0x11b970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC80u; }
        if (ctx->pc != 0x32CC80u) { return; }
    }
    ctx->pc = 0x32CC80u;
label_32cc80:
    // 0x32cc80: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x32CC80u;
    {
        const bool branch_taken_0x32cc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cc80) {
            ctx->pc = 0x32CC84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CC80u;
            // 0x32cc84: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CDBCu;
            goto label_32cdbc;
        }
    }
    ctx->pc = 0x32CC88u;
    // 0x32cc88: 0xc047196  jal         func_11C658
    ctx->pc = 0x32CC88u;
    SET_GPR_U32(ctx, 31, 0x32CC90u);
    ctx->pc = 0x11C658u;
    if (runtime->hasFunction(0x11C658u)) {
        auto targetFn = runtime->lookupFunction(0x11C658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC90u; }
        if (ctx->pc != 0x32CC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C658_0x11c658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CC90u; }
        if (ctx->pc != 0x32CC90u) { return; }
    }
    ctx->pc = 0x32CC90u;
label_32cc90:
    // 0x32cc90: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x32CC90u;
    {
        const bool branch_taken_0x32cc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cc90) {
            ctx->pc = 0x32CCE4u;
            goto label_32cce4;
        }
    }
    ctx->pc = 0x32CC98u;
    // 0x32cc98: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x32cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x32cc9c: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x32cc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x32cca0: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x32cca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x32cca4: 0xc06909c  jal         func_1A4270
    ctx->pc = 0x32CCA4u;
    SET_GPR_U32(ctx, 31, 0x32CCACu);
    ctx->pc = 0x32CCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CCA4u;
            // 0x32cca8: 0x27a70044  addiu       $a3, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4270u;
    if (runtime->hasFunction(0x1A4270u)) {
        auto targetFn = runtime->lookupFunction(0x1A4270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CCACu; }
        if (ctx->pc != 0x32CCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4270_0x1a4270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CCACu; }
        if (ctx->pc != 0x32CCACu) { return; }
    }
    ctx->pc = 0x32CCACu;
label_32ccac:
    // 0x32ccac: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x32ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x32ccb0: 0xa3a00042  sb          $zero, 0x42($sp)
    ctx->pc = 0x32ccb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x32ccb4: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x32ccb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x32ccb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ccbc: 0xa3a20041  sb          $v0, 0x41($sp)
    ctx->pc = 0x32ccbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 2));
label_32ccc0:
    // 0x32ccc0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x32ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x32ccc4: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x32ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x32ccc8: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x32ccc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x32cccc: 0xc0470ea  jal         func_11C3A8
    ctx->pc = 0x32CCCCu;
    SET_GPR_U32(ctx, 31, 0x32CCD4u);
    ctx->pc = 0x32CCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CCCCu;
            // 0x32ccd0: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C3A8u;
    if (runtime->hasFunction(0x11C3A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CCD4u; }
        if (ctx->pc != 0x32CCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C3A8_0x11c3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CCD4u; }
        if (ctx->pc != 0x32CCD4u) { return; }
    }
    ctx->pc = 0x32CCD4u;
label_32ccd4:
    // 0x32ccd4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32CCD4u;
    {
        const bool branch_taken_0x32ccd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ccd4) {
            ctx->pc = 0x32CCC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32ccc0;
        }
    }
    ctx->pc = 0x32CCDCu;
    // 0x32ccdc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x32CCDCu;
    {
        const bool branch_taken_0x32ccdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ccdc) {
            ctx->pc = 0x32CDB8u;
            goto label_32cdb8;
        }
    }
    ctx->pc = 0x32CCE4u;
label_32cce4:
    // 0x32cce4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32cce8: 0x8c42d3a0  lw          $v0, -0x2C60($v0)
    ctx->pc = 0x32cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955936)));
    // 0x32ccec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32CCECu;
    {
        const bool branch_taken_0x32ccec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ccec) {
            ctx->pc = 0x32CCF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CCECu;
            // 0x32ccf0: 0x96260038  lhu         $a2, 0x38($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CD04u;
            goto label_32cd04;
        }
    }
    ctx->pc = 0x32CCF4u;
    // 0x32ccf4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x32ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32ccf8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32ccfc: 0xac43d3a0  sw          $v1, -0x2C60($v0)
    ctx->pc = 0x32ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955936), GPR_U32(ctx, 3));
    // 0x32cd00: 0x96260038  lhu         $a2, 0x38($s1)
    ctx->pc = 0x32cd00u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
label_32cd04:
    // 0x32cd04: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32cd04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32cd08: 0x248445b0  addiu       $a0, $a0, 0x45B0
    ctx->pc = 0x32cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17840));
    // 0x32cd0c: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x32CD0Cu;
    SET_GPR_U32(ctx, 31, 0x32CD14u);
    ctx->pc = 0x32CD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CD0Cu;
            // 0x32cd10: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CD14u; }
        if (ctx->pc != 0x32CD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CD14u; }
        if (ctx->pc != 0x32CD14u) { return; }
    }
    ctx->pc = 0x32CD14u;
label_32cd14:
    // 0x32cd14: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x32cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x32cd18: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x32cd18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32cd1c: 0x320207ff  andi        $v0, $s0, 0x7FF
    ctx->pc = 0x32cd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2047);
    // 0x32cd20: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32CD20u;
    {
        const bool branch_taken_0x32cd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cd20) {
            ctx->pc = 0x32CD24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CD20u;
            // 0x32cd24: 0x9223002c  lbu         $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CD38u;
            goto label_32cd38;
        }
    }
    ctx->pc = 0x32CD28u;
    // 0x32cd28: 0x2402f800  addiu       $v0, $zero, -0x800
    ctx->pc = 0x32cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x32cd2c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x32cd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x32cd30: 0x24500800  addiu       $s0, $v0, 0x800
    ctx->pc = 0x32cd30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x32cd34: 0x9223002c  lbu         $v1, 0x2C($s1)
    ctx->pc = 0x32cd34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_32cd38:
    // 0x32cd38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cd3c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32CD3Cu;
    {
        const bool branch_taken_0x32cd3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32cd3c) {
            ctx->pc = 0x32CD40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CD3Cu;
            // 0x32cd40: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CD68u;
            goto label_32cd68;
        }
    }
    ctx->pc = 0x32CD44u;
    // 0x32cd44: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x32CD44u;
    {
        const bool branch_taken_0x32cd44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cd44) {
            ctx->pc = 0x32CD48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CD44u;
            // 0x32cd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CD54u;
            goto label_32cd54;
        }
    }
    ctx->pc = 0x32CD4Cu;
    // 0x32cd4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32CD4Cu;
    {
        const bool branch_taken_0x32cd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cd4c) {
            ctx->pc = 0x32CD64u;
            goto label_32cd64;
        }
    }
    ctx->pc = 0x32CD54u;
label_32cd54:
    // 0x32cd54: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x32CD54u;
    SET_GPR_U32(ctx, 31, 0x32CD5Cu);
    ctx->pc = 0x1A4B80u;
    if (runtime->hasFunction(0x1A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CD5Cu; }
        if (ctx->pc != 0x32CD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4B80_0x1a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CD5Cu; }
        if (ctx->pc != 0x32CD5Cu) { return; }
    }
    ctx->pc = 0x32CD5Cu;
label_32cd5c:
    // 0x32cd5c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x32cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x32cd60: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_32cd64:
    // 0x32cd64: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x32cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_32cd68:
    // 0x32cd68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32cd6c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32CD6Cu;
    {
        const bool branch_taken_0x32cd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cd6c) {
            ctx->pc = 0x32CD70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CD6Cu;
            // 0x32cd70: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CD84u;
            goto label_32cd84;
        }
    }
    ctx->pc = 0x32CD74u;
    // 0x32cd74: 0xc069634  jal         func_1A58D0
    ctx->pc = 0x32CD74u;
    SET_GPR_U32(ctx, 31, 0x32CD7Cu);
    ctx->pc = 0x1A58D0u;
    if (runtime->hasFunction(0x1A58D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A58D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CD7Cu; }
        if (ctx->pc != 0x32CD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A58D0_0x1a58d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CD7Cu; }
        if (ctx->pc != 0x32CD7Cu) { return; }
    }
    ctx->pc = 0x32CD7Cu;
label_32cd7c:
    // 0x32cd7c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x32CD7Cu;
    {
        const bool branch_taken_0x32cd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cd7c) {
            ctx->pc = 0x32CDB8u;
            goto label_32cdb8;
        }
    }
    ctx->pc = 0x32CD84u;
label_32cd84:
    // 0x32cd84: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x32cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x32cd88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32cd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cd8c: 0x2484cba0  addiu       $a0, $a0, -0x3460
    ctx->pc = 0x32cd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953888));
    // 0x32cd90: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x32cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x32cd94: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x32cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x32cd98: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x32cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x32cd9c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x32cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x32cda0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32cda4: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x32cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x32cda8: 0xa2200048  sb          $zero, 0x48($s1)
    ctx->pc = 0x32cda8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x32cdac: 0xae300030  sw          $s0, 0x30($s1)
    ctx->pc = 0x32cdacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
    // 0x32cdb0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x32CDB0u;
    SET_GPR_U32(ctx, 31, 0x32CDB8u);
    ctx->pc = 0x32CDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CDB0u;
            // 0x32cdb4: 0xa6200038  sh          $zero, 0x38($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 56), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CDB8u; }
        if (ctx->pc != 0x32CDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CDB8u; }
        if (ctx->pc != 0x32CDB8u) { return; }
    }
    ctx->pc = 0x32CDB8u;
label_32cdb8:
    // 0x32cdb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32cdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32cdbc:
    // 0x32cdbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32cdbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32cdc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32cdc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cdc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32cdc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x32CDC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CDC8u;
            // 0x32cdcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32CDD0u;
label_32cdd0:
    // 0x32cdd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32cdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32cdd4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32cdd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32cdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32cddc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32cddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32cde0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32cde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32cde4: 0x8c63d3a0  lw          $v1, -0x2C60($v1)
    ctx->pc = 0x32cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955936)));
    // 0x32cde8: 0x14600044  bnez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x32CDE8u;
    {
        const bool branch_taken_0x32cde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CDE8u;
            // 0x32cdec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cde8) {
            ctx->pc = 0x32CEFCu;
            goto label_32cefc;
        }
    }
    ctx->pc = 0x32CDF0u;
    // 0x32cdf0: 0xc047062  jal         func_11C188
    ctx->pc = 0x32CDF0u;
    SET_GPR_U32(ctx, 31, 0x32CDF8u);
    ctx->pc = 0x32CDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CDF0u;
            // 0x32cdf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C188u;
    if (runtime->hasFunction(0x11C188u)) {
        auto targetFn = runtime->lookupFunction(0x11C188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CDF8u; }
        if (ctx->pc != 0x32CDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C188_0x11c188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CDF8u; }
        if (ctx->pc != 0x32CDF8u) { return; }
    }
    ctx->pc = 0x32CDF8u;
label_32cdf8:
    // 0x32cdf8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x32cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32cdfc: 0x50430040  beql        $v0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x32CDFCu;
    {
        const bool branch_taken_0x32cdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x32cdfc) {
            ctx->pc = 0x32CE00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CDFCu;
            // 0x32ce00: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CF00u;
            goto label_32cf00;
        }
    }
    ctx->pc = 0x32CE04u;
    // 0x32ce04: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x32ce04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32ce08: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x32ce08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x32ce0c: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x32ce0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x32ce10: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x32ce10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x32ce14: 0xc06909c  jal         func_1A4270
    ctx->pc = 0x32CE14u;
    SET_GPR_U32(ctx, 31, 0x32CE1Cu);
    ctx->pc = 0x32CE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CE14u;
            // 0x32ce18: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4270u;
    if (runtime->hasFunction(0x1A4270u)) {
        auto targetFn = runtime->lookupFunction(0x1A4270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE1Cu; }
        if (ctx->pc != 0x32CE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4270_0x1a4270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE1Cu; }
        if (ctx->pc != 0x32CE1Cu) { return; }
    }
    ctx->pc = 0x32CE1Cu;
label_32ce1c:
    // 0x32ce1c: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32CE1Cu;
    {
        const bool branch_taken_0x32ce1c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x32ce1c) {
            ctx->pc = 0x32CE20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CE1Cu;
            // 0x32ce20: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CE34u;
            goto label_32ce34;
        }
    }
    ctx->pc = 0x32CE24u;
    // 0x32ce24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ce28: 0xb8020001  swr         $v0, 0x1($zero)
    ctx->pc = 0x32ce28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x32ce2c: 0xa8020004  swl         $v0, 0x4($zero)
    ctx->pc = 0x32ce2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x32ce30: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x32ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_32ce34:
    // 0x32ce34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ce38: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x32ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x32ce3c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x32ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x32ce40: 0x9203002c  lbu         $v1, 0x2C($s0)
    ctx->pc = 0x32ce40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x32ce44: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x32CE44u;
    {
        const bool branch_taken_0x32ce44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32ce44) {
            ctx->pc = 0x32CE48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CE44u;
            // 0x32ce48: 0x3c040018  lui         $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CE94u;
            goto label_32ce94;
        }
    }
    ctx->pc = 0x32CE4Cu;
    // 0x32ce4c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x32CE4Cu;
    {
        const bool branch_taken_0x32ce4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ce4c) {
            ctx->pc = 0x32CE50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CE4Cu;
            // 0x32ce50: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CE5Cu;
            goto label_32ce5c;
        }
    }
    ctx->pc = 0x32CE54u;
    // 0x32ce54: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x32CE54u;
    {
        const bool branch_taken_0x32ce54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ce54) {
            ctx->pc = 0x32CEA4u;
            goto label_32cea4;
        }
    }
    ctx->pc = 0x32CE5Cu;
label_32ce5c:
    // 0x32ce5c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32ce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32ce60: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32CE60u;
    {
        const bool branch_taken_0x32ce60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ce60) {
            ctx->pc = 0x32CE64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CE60u;
            // 0x32ce64: 0x3c040018  lui         $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CE7Cu;
            goto label_32ce7c;
        }
    }
    ctx->pc = 0x32CE68u;
    // 0x32ce68: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x32CE68u;
    SET_GPR_U32(ctx, 31, 0x32CE70u);
    ctx->pc = 0x1A4DB0u;
    if (runtime->hasFunction(0x1A4DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A4DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE70u; }
        if (ctx->pc != 0x32CE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4DB0_0x1a4db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE70u; }
        if (ctx->pc != 0x32CE70u) { return; }
    }
    ctx->pc = 0x32CE70u;
label_32ce70:
    // 0x32ce70: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x32ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x32ce74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x32ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x32ce78: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x32ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
label_32ce7c:
    // 0x32ce7c: 0xc069320  jal         func_1A4C80
    ctx->pc = 0x32CE7Cu;
    SET_GPR_U32(ctx, 31, 0x32CE84u);
    ctx->pc = 0x1A4C80u;
    if (runtime->hasFunction(0x1A4C80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE84u; }
        if (ctx->pc != 0x32CE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4C80_0x1a4c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE84u; }
        if (ctx->pc != 0x32CE84u) { return; }
    }
    ctx->pc = 0x32CE84u;
label_32ce84:
    // 0x32ce84: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32CE84u;
    {
        const bool branch_taken_0x32ce84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CE84u;
            // 0x32ce88: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ce84) {
            ctx->pc = 0x32CEA4u;
            goto label_32cea4;
        }
    }
    ctx->pc = 0x32CE8Cu;
    // 0x32ce8c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x32CE8Cu;
    {
        const bool branch_taken_0x32ce8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ce8c) {
            ctx->pc = 0x32CEFCu;
            goto label_32cefc;
        }
    }
    ctx->pc = 0x32CE94u;
label_32ce94:
    // 0x32ce94: 0xc069320  jal         func_1A4C80
    ctx->pc = 0x32CE94u;
    SET_GPR_U32(ctx, 31, 0x32CE9Cu);
    ctx->pc = 0x1A4C80u;
    if (runtime->hasFunction(0x1A4C80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE9Cu; }
        if (ctx->pc != 0x32CE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4C80_0x1a4c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CE9Cu; }
        if (ctx->pc != 0x32CE9Cu) { return; }
    }
    ctx->pc = 0x32CE9Cu;
label_32ce9c:
    // 0x32ce9c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x32CE9Cu;
    {
        const bool branch_taken_0x32ce9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CE9Cu;
            // 0x32cea0: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ce9c) {
            ctx->pc = 0x32CEFCu;
            goto label_32cefc;
        }
    }
    ctx->pc = 0x32CEA4u;
label_32cea4:
    // 0x32cea4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32cea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ceac: 0x8c45d3a0  lw          $a1, -0x2C60($v0)
    ctx->pc = 0x32ceacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955936)));
    // 0x32ceb0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x32ceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x32ceb4: 0xa3a30031  sb          $v1, 0x31($sp)
    ctx->pc = 0x32ceb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ceb8: 0xa3a00032  sb          $zero, 0x32($sp)
    ctx->pc = 0x32ceb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x32cebc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32cec0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x32cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32cec4: 0xa3a40030  sb          $a0, 0x30($sp)
    ctx->pc = 0x32cec4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 4));
    // 0x32cec8: 0xac43d3a0  sw          $v1, -0x2C60($v0)
    ctx->pc = 0x32cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955936), GPR_U32(ctx, 3));
    // 0x32cecc: 0xa6000038  sh          $zero, 0x38($s0)
    ctx->pc = 0x32ceccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
label_32ced0:
    // 0x32ced0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x32ced0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x32ced4: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x32ced4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x32ced8: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x32ced8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x32cedc: 0xc0470ea  jal         func_11C3A8
    ctx->pc = 0x32CEDCu;
    SET_GPR_U32(ctx, 31, 0x32CEE4u);
    ctx->pc = 0x32CEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CEDCu;
            // 0x32cee0: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C3A8u;
    if (runtime->hasFunction(0x11C3A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CEE4u; }
        if (ctx->pc != 0x32CEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C3A8_0x11c3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CEE4u; }
        if (ctx->pc != 0x32CEE4u) { return; }
    }
    ctx->pc = 0x32CEE4u;
label_32cee4:
    // 0x32cee4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32CEE4u;
    {
        const bool branch_taken_0x32cee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cee4) {
            ctx->pc = 0x32CED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32ced0;
        }
    }
    ctx->pc = 0x32CEECu;
    // 0x32ceec: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x32ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x32cef0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32cef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cef4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x32CEF4u;
    SET_GPR_U32(ctx, 31, 0x32CEFCu);
    ctx->pc = 0x32CEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CEF4u;
            // 0x32cef8: 0x2484cc50  addiu       $a0, $a0, -0x33B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CEFCu; }
        if (ctx->pc != 0x32CEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CEFCu; }
        if (ctx->pc != 0x32CEFCu) { return; }
    }
    ctx->pc = 0x32CEFCu;
label_32cefc:
    // 0x32cefc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32cefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32cf00:
    // 0x32cf00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32cf00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cf04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32cf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cf08: 0x3e00008  jr          $ra
    ctx->pc = 0x32CF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CF08u;
            // 0x32cf0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32CF10u;
    ctx->pc = 0x32cf10u;
}
