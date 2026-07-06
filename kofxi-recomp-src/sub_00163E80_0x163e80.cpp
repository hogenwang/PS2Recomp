#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00163E80
// Address: 0x163e80 - 0x1641b0
void sub_00163E80_0x163e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163E80_0x163e80");
#endif

    switch (ctx->pc) {
        case 0x163eacu: goto label_163eac;
        case 0x163ec4u: goto label_163ec4;
        case 0x163ed4u: goto label_163ed4;
        case 0x163f00u: goto label_163f00;
        case 0x163f1cu: goto label_163f1c;
        case 0x163f30u: goto label_163f30;
        case 0x163f60u: goto label_163f60;
        case 0x163f84u: goto label_163f84;
        case 0x164020u: goto label_164020;
        case 0x164030u: goto label_164030;
        case 0x164040u: goto label_164040;
        case 0x164050u: goto label_164050;
        case 0x1640d4u: goto label_1640d4;
        case 0x1640f0u: goto label_1640f0;
        case 0x1640f8u: goto label_1640f8;
        case 0x164110u: goto label_164110;
        case 0x16412cu: goto label_16412c;
        case 0x164164u: goto label_164164;
        case 0x16419cu: goto label_16419c;
        default: break;
    }

    ctx->pc = 0x163e80u;

    // 0x163e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x163e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x163e84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x163e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163e88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x163e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x163e8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x163e90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163e94: 0xa7a0003e  sh          $zero, 0x3E($sp)
    ctx->pc = 0x163e94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 0));
    // 0x163e98: 0x9085035c  lbu         $a1, 0x35C($a0)
    ctx->pc = 0x163e98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 860)));
    // 0x163e9c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x163E9Cu;
    {
        const bool branch_taken_0x163e9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x163EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163E9Cu;
            // 0x163ea0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e9c) {
            ctx->pc = 0x163EACu;
            goto label_163eac;
        }
    }
    ctx->pc = 0x163EA4u;
    // 0x163ea4: 0xc0617f0  jal         func_185FC0
    ctx->pc = 0x163EA4u;
    SET_GPR_U32(ctx, 31, 0x163EACu);
    ctx->pc = 0x185FC0u;
    if (runtime->hasFunction(0x185FC0u)) {
        auto targetFn = runtime->lookupFunction(0x185FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EACu; }
        if (ctx->pc != 0x163EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185FC0_0x185fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EACu; }
        if (ctx->pc != 0x163EACu) { return; }
    }
    ctx->pc = 0x163EACu;
label_163eac:
    // 0x163eac: 0x9223036c  lbu         $v1, 0x36C($s1)
    ctx->pc = 0x163eacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x163eb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x163eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163eb4: 0x54640015  bnel        $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x163EB4u;
    {
        const bool branch_taken_0x163eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x163eb4) {
            ctx->pc = 0x163EB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163EB4u;
            // 0x163eb8: 0x9223035c  lbu         $v1, 0x35C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 860)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163F0Cu;
            goto label_163f0c;
        }
    }
    ctx->pc = 0x163EBCu;
    // 0x163ebc: 0xc06001c  jal         func_180070
    ctx->pc = 0x163EBCu;
    SET_GPR_U32(ctx, 31, 0x163EC4u);
    ctx->pc = 0x163EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163EBCu;
            // 0x163ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180070u;
    if (runtime->hasFunction(0x180070u)) {
        auto targetFn = runtime->lookupFunction(0x180070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EC4u; }
        if (ctx->pc != 0x163EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180070_0x180070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EC4u; }
        if (ctx->pc != 0x163EC4u) { return; }
    }
    ctx->pc = 0x163EC4u;
label_163ec4:
    // 0x163ec4: 0x8e220374  lw          $v0, 0x374($s1)
    ctx->pc = 0x163ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
    // 0x163ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ecc: 0xc06004c  jal         func_180130
    ctx->pc = 0x163ECCu;
    SET_GPR_U32(ctx, 31, 0x163ED4u);
    ctx->pc = 0x163ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163ECCu;
            // 0x163ed0: 0xae220518  sw          $v0, 0x518($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180130u;
    if (runtime->hasFunction(0x180130u)) {
        auto targetFn = runtime->lookupFunction(0x180130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163ED4u; }
        if (ctx->pc != 0x163ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180130_0x180130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163ED4u; }
        if (ctx->pc != 0x163ED4u) { return; }
    }
    ctx->pc = 0x163ED4u;
label_163ed4:
    // 0x163ed4: 0x922205f0  lbu         $v0, 0x5F0($s1)
    ctx->pc = 0x163ed4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x163ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163edc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x163edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x163ee0: 0xa22205f0  sb          $v0, 0x5F0($s1)
    ctx->pc = 0x163ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1520), (uint8_t)GPR_U32(ctx, 2));
    // 0x163ee4: 0x8e220494  lw          $v0, 0x494($s1)
    ctx->pc = 0x163ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x163ee8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x163ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x163eec: 0xae220494  sw          $v0, 0x494($s1)
    ctx->pc = 0x163eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1172), GPR_U32(ctx, 2));
    // 0x163ef0: 0x8e220530  lw          $v0, 0x530($s1)
    ctx->pc = 0x163ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
    // 0x163ef4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x163ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x163ef8: 0xc06005c  jal         func_180170
    ctx->pc = 0x163EF8u;
    SET_GPR_U32(ctx, 31, 0x163F00u);
    ctx->pc = 0x163EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163EF8u;
            // 0x163efc: 0xae220530  sw          $v0, 0x530($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180170u;
    if (runtime->hasFunction(0x180170u)) {
        auto targetFn = runtime->lookupFunction(0x180170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F00u; }
        if (ctx->pc != 0x163F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180170_0x180170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F00u; }
        if (ctx->pc != 0x163F00u) { return; }
    }
    ctx->pc = 0x163F00u;
label_163f00:
    // 0x163f00: 0x97a3003e  lhu         $v1, 0x3E($sp)
    ctx->pc = 0x163f00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x163f04: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x163F04u;
    {
        const bool branch_taken_0x163f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F04u;
            // 0x163f08: 0xa6230534  sh          $v1, 0x534($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1332), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f04) {
            ctx->pc = 0x16419Cu;
            goto label_16419c;
        }
    }
    ctx->pc = 0x163F0Cu;
label_163f0c:
    // 0x163f0c: 0x546400a4  bnel        $v1, $a0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x163F0Cu;
    {
        const bool branch_taken_0x163f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x163f0c) {
            ctx->pc = 0x163F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163F0Cu;
            // 0x163f10: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1641A0u;
            goto label_1641a0;
        }
    }
    ctx->pc = 0x163F14u;
    // 0x163f14: 0xc06001c  jal         func_180070
    ctx->pc = 0x163F14u;
    SET_GPR_U32(ctx, 31, 0x163F1Cu);
    ctx->pc = 0x163F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163F14u;
            // 0x163f18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180070u;
    if (runtime->hasFunction(0x180070u)) {
        auto targetFn = runtime->lookupFunction(0x180070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F1Cu; }
        if (ctx->pc != 0x163F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180070_0x180070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F1Cu; }
        if (ctx->pc != 0x163F1Cu) { return; }
    }
    ctx->pc = 0x163F1Cu;
label_163f1c:
    // 0x163f1c: 0x8e220364  lw          $v0, 0x364($s1)
    ctx->pc = 0x163f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
    // 0x163f20: 0xae220518  sw          $v0, 0x518($s1)
    ctx->pc = 0x163f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 2));
    // 0x163f24: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x163f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x163f28: 0xc04bfa4  jal         func_12FE90
    ctx->pc = 0x163F28u;
    SET_GPR_U32(ctx, 31, 0x163F30u);
    ctx->pc = 0x163F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163F28u;
            // 0x163f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FE90u;
    if (runtime->hasFunction(0x12FE90u)) {
        auto targetFn = runtime->lookupFunction(0x12FE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F30u; }
        if (ctx->pc != 0x163F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FE90_0x12fe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F30u; }
        if (ctx->pc != 0x163F30u) { return; }
    }
    ctx->pc = 0x163F30u;
label_163f30:
    // 0x163f30: 0xa220028a  sb          $zero, 0x28A($s1)
    ctx->pc = 0x163f30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 650), (uint8_t)GPR_U32(ctx, 0));
    // 0x163f34: 0x92220368  lbu         $v0, 0x368($s1)
    ctx->pc = 0x163f34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 872)));
    // 0x163f38: 0x9223035d  lbu         $v1, 0x35D($s1)
    ctx->pc = 0x163f38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 861)));
    // 0x163f3c: 0x8e300518  lw          $s0, 0x518($s1)
    ctx->pc = 0x163f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x163f40: 0x28420070  slti        $v0, $v0, 0x70
    ctx->pc = 0x163f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)112) ? 1 : 0);
    // 0x163f44: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x163F44u;
    {
        const bool branch_taken_0x163f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F44u;
            // 0x163f48: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f44) {
            ctx->pc = 0x164058u;
            goto label_164058;
        }
    }
    ctx->pc = 0x163F4Cu;
    // 0x163f4c: 0x8e220364  lw          $v0, 0x364($s1)
    ctx->pc = 0x163f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
    // 0x163f50: 0xae22051c  sw          $v0, 0x51C($s1)
    ctx->pc = 0x163f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1308), GPR_U32(ctx, 2));
    // 0x163f54: 0x9225035d  lbu         $a1, 0x35D($s1)
    ctx->pc = 0x163f54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 861)));
    // 0x163f58: 0xc05ff74  jal         func_17FDD0
    ctx->pc = 0x163F58u;
    SET_GPR_U32(ctx, 31, 0x163F60u);
    ctx->pc = 0x163F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163F58u;
            // 0x163f5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FDD0u;
    if (runtime->hasFunction(0x17FDD0u)) {
        auto targetFn = runtime->lookupFunction(0x17FDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F60u; }
        if (ctx->pc != 0x163F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FDD0_0x17fdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F60u; }
        if (ctx->pc != 0x163F60u) { return; }
    }
    ctx->pc = 0x163F60u;
label_163f60:
    // 0x163f60: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x163F60u;
    {
        const bool branch_taken_0x163f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f60) {
            ctx->pc = 0x163F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163F60u;
            // 0x163f64: 0x92220368  lbu         $v0, 0x368($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 872)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163F70u;
            goto label_163f70;
        }
    }
    ctx->pc = 0x163F68u;
    // 0x163f68: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x163F68u;
    {
        const bool branch_taken_0x163f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163F68u;
            // 0x163f6c: 0x922205f0  lbu         $v0, 0x5F0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f68) {
            ctx->pc = 0x16411Cu;
            goto label_16411c;
        }
    }
    ctx->pc = 0x163F70u;
label_163f70:
    // 0x163f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x163f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f78: 0x27a7003e  addiu       $a3, $sp, 0x3E
    ctx->pc = 0x163f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 62));
    // 0x163f7c: 0xc05ff8c  jal         func_17FE30
    ctx->pc = 0x163F7Cu;
    SET_GPR_U32(ctx, 31, 0x163F84u);
    ctx->pc = 0x163F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163F7Cu;
            // 0x163f80: 0x2446ff90  addiu       $a2, $v0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FE30u;
    if (runtime->hasFunction(0x17FE30u)) {
        auto targetFn = runtime->lookupFunction(0x17FE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F84u; }
        if (ctx->pc != 0x163F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FE30_0x17fe30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F84u; }
        if (ctx->pc != 0x163F84u) { return; }
    }
    ctx->pc = 0x163F84u;
label_163f84:
    // 0x163f84: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x163f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x163f88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x163f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x163f8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x163f8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x163f90: 0x10430061  beq         $v0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x163F90u;
    {
        const bool branch_taken_0x163f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x163f90) {
            ctx->pc = 0x164118u;
            goto label_164118;
        }
    }
    ctx->pc = 0x163F98u;
    // 0x163f98: 0x97a4003e  lhu         $a0, 0x3E($sp)
    ctx->pc = 0x163f98u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x163f9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x163f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x163fa0: 0x3084c000  andi        $a0, $a0, 0xC000
    ctx->pc = 0x163fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)49152);
    // 0x163fa4: 0x42383  sra         $a0, $a0, 14
    ctx->pc = 0x163fa4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 14));
    // 0x163fa8: 0x50830027  beql        $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x163FA8u;
    {
        const bool branch_taken_0x163fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x163fa8) {
            ctx->pc = 0x163FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163FA8u;
            // 0x163fac: 0xa62200f0  sh          $v0, 0xF0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164048u;
            goto label_164048;
        }
    }
    ctx->pc = 0x163FB0u;
    // 0x163fb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x163fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x163fb4: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x163FB4u;
    {
        const bool branch_taken_0x163fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x163fb4) {
            ctx->pc = 0x163FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163FB4u;
            // 0x163fb8: 0xa62200f0  sh          $v0, 0xF0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164038u;
            goto label_164038;
        }
    }
    ctx->pc = 0x163FBCu;
    // 0x163fbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x163fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163fc0: 0x50830019  beql        $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x163FC0u;
    {
        const bool branch_taken_0x163fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x163fc0) {
            ctx->pc = 0x163FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163FC0u;
            // 0x163fc4: 0xa62200f0  sh          $v0, 0xF0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164028u;
            goto label_164028;
        }
    }
    ctx->pc = 0x163FC8u;
    // 0x163fc8: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x163FC8u;
    {
        const bool branch_taken_0x163fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x163fc8) {
            ctx->pc = 0x163FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163FC8u;
            // 0x163fcc: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163FD8u;
            goto label_163fd8;
        }
    }
    ctx->pc = 0x163FD0u;
    // 0x163fd0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x163FD0u;
    {
        const bool branch_taken_0x163fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163fd0) {
            ctx->pc = 0x164118u;
            goto label_164118;
        }
    }
    ctx->pc = 0x163FD8u;
label_163fd8:
    // 0x163fd8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x163fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x163fdc: 0x2484dbc8  addiu       $a0, $a0, -0x2438
    ctx->pc = 0x163fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958024));
    // 0x163fe0: 0x3065000c  andi        $a1, $v1, 0xC
    ctx->pc = 0x163fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x163fe4: 0x53082  srl         $a2, $a1, 2
    ctx->pc = 0x163fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x163fe8: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x163fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x163fec: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x163fecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x163ff0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x163ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x163ff4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x163ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x163ff8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163ffc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x163ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x164000: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x164000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x164004: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x164004u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x164008: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x164008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16400c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164010: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x164010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164014: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x164014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x164018: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x164018u;
    SET_GPR_U32(ctx, 31, 0x164020u);
    ctx->pc = 0x16401Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164018u;
            // 0x16401c: 0xa48200f0  sh          $v0, 0xF0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 240), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164020u; }
        if (ctx->pc != 0x164020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164020u; }
        if (ctx->pc != 0x164020u) { return; }
    }
    ctx->pc = 0x164020u;
label_164020:
    // 0x164020: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x164020u;
    {
        const bool branch_taken_0x164020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164020) {
            ctx->pc = 0x164118u;
            goto label_164118;
        }
    }
    ctx->pc = 0x164028u;
label_164028:
    // 0x164028: 0xc05ac88  jal         func_16B220
    ctx->pc = 0x164028u;
    SET_GPR_U32(ctx, 31, 0x164030u);
    ctx->pc = 0x16402Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164028u;
            // 0x16402c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B220u;
    if (runtime->hasFunction(0x16B220u)) {
        auto targetFn = runtime->lookupFunction(0x16B220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164030u; }
        if (ctx->pc != 0x164030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B220_0x16b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164030u; }
        if (ctx->pc != 0x164030u) { return; }
    }
    ctx->pc = 0x164030u;
label_164030:
    // 0x164030: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x164030u;
    {
        const bool branch_taken_0x164030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164030) {
            ctx->pc = 0x164118u;
            goto label_164118;
        }
    }
    ctx->pc = 0x164038u;
label_164038:
    // 0x164038: 0xc05ac88  jal         func_16B220
    ctx->pc = 0x164038u;
    SET_GPR_U32(ctx, 31, 0x164040u);
    ctx->pc = 0x16403Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164038u;
            // 0x16403c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B220u;
    if (runtime->hasFunction(0x16B220u)) {
        auto targetFn = runtime->lookupFunction(0x16B220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164040u; }
        if (ctx->pc != 0x164040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B220_0x16b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164040u; }
        if (ctx->pc != 0x164040u) { return; }
    }
    ctx->pc = 0x164040u;
label_164040:
    // 0x164040: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x164040u;
    {
        const bool branch_taken_0x164040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164040) {
            ctx->pc = 0x164118u;
            goto label_164118;
        }
    }
    ctx->pc = 0x164048u;
label_164048:
    // 0x164048: 0xc05abcc  jal         func_16AF30
    ctx->pc = 0x164048u;
    SET_GPR_U32(ctx, 31, 0x164050u);
    ctx->pc = 0x16404Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164048u;
            // 0x16404c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AF30u;
    if (runtime->hasFunction(0x16AF30u)) {
        auto targetFn = runtime->lookupFunction(0x16AF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164050u; }
        if (ctx->pc != 0x164050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AF30_0x16af30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164050u; }
        if (ctx->pc != 0x164050u) { return; }
    }
    ctx->pc = 0x164050u;
label_164050:
    // 0x164050: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x164050u;
    {
        const bool branch_taken_0x164050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164050) {
            ctx->pc = 0x164118u;
            goto label_164118;
        }
    }
    ctx->pc = 0x164058u;
label_164058:
    // 0x164058: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x164058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16405c: 0x28620018  slti        $v0, $v1, 0x18
    ctx->pc = 0x16405cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x164060: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x164060u;
    {
        const bool branch_taken_0x164060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164060) {
            ctx->pc = 0x164118u;
            goto label_164118;
        }
    }
    ctx->pc = 0x164068u;
    // 0x164068: 0x2861001c  slti        $at, $v1, 0x1C
    ctx->pc = 0x164068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x16406c: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x16406Cu;
    {
        const bool branch_taken_0x16406c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16406c) {
            ctx->pc = 0x164118u;
            goto label_164118;
        }
    }
    ctx->pc = 0x164074u;
    // 0x164074: 0x9223008c  lbu         $v1, 0x8C($s1)
    ctx->pc = 0x164074u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x164078: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x164078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x16407c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16407Cu;
    {
        const bool branch_taken_0x16407c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16407c) {
            ctx->pc = 0x164080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16407Cu;
            // 0x164080: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x164090u;
            goto label_164090;
        }
    }
    ctx->pc = 0x164084u;
    // 0x164084: 0x306200fd  andi        $v0, $v1, 0xFD
    ctx->pc = 0x164084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x164088: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164088u;
    {
        const bool branch_taken_0x164088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16408Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164088u;
            // 0x16408c: 0xa222008c  sb          $v0, 0x8C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164088) {
            ctx->pc = 0x164094u;
            goto label_164094;
        }
    }
    ctx->pc = 0x164090u;
label_164090:
    // 0x164090: 0xa222008c  sb          $v0, 0x8C($s1)
    ctx->pc = 0x164090u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 2));
label_164094:
    // 0x164094: 0x962205e2  lhu         $v0, 0x5E2($s1)
    ctx->pc = 0x164094u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1506)));
    // 0x164098: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x164098u;
    {
        const bool branch_taken_0x164098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164098) {
            ctx->pc = 0x16409Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164098u;
            // 0x16409c: 0x9202059c  lbu         $v0, 0x59C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1640BCu;
            goto label_1640bc;
        }
    }
    ctx->pc = 0x1640A0u;
    // 0x1640a0: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x1640a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1640a4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1640a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1640a8: 0xa62205e2  sh          $v0, 0x5E2($s1)
    ctx->pc = 0x1640a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 2));
    // 0x1640ac: 0x962205e2  lhu         $v0, 0x5E2($s1)
    ctx->pc = 0x1640acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1506)));
    // 0x1640b0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1640b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1640b4: 0xa62205e2  sh          $v0, 0x5E2($s1)
    ctx->pc = 0x1640b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 2));
    // 0x1640b8: 0x9202059c  lbu         $v0, 0x59C($s0)
    ctx->pc = 0x1640b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1436)));
label_1640bc:
    // 0x1640bc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1640bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1640c0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1640C0u;
    {
        const bool branch_taken_0x1640c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640c0) {
            ctx->pc = 0x1640C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1640C0u;
            // 0x1640c4: 0x8e0600dc  lw          $a2, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1640E4u;
            goto label_1640e4;
        }
    }
    ctx->pc = 0x1640C8u;
    // 0x1640c8: 0x8e0405a4  lw          $a0, 0x5A4($s0)
    ctx->pc = 0x1640c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1444)));
    // 0x1640cc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x1640CCu;
    SET_GPR_U32(ctx, 31, 0x1640D4u);
    ctx->pc = 0x1640D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1640CCu;
            // 0x1640d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640D4u; }
        if (ctx->pc != 0x1640D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640D4u; }
        if (ctx->pc != 0x1640D4u) { return; }
    }
    ctx->pc = 0x1640D4u;
label_1640d4:
    // 0x1640d4: 0x9202059c  lbu         $v0, 0x59C($s0)
    ctx->pc = 0x1640d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1436)));
    // 0x1640d8: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x1640d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x1640dc: 0xa202059c  sb          $v0, 0x59C($s0)
    ctx->pc = 0x1640dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1436), (uint8_t)GPR_U32(ctx, 2));
    // 0x1640e0: 0x8e0600dc  lw          $a2, 0xDC($s0)
    ctx->pc = 0x1640e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_1640e4:
    // 0x1640e4: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x1640e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1640e8: 0xc059178  jal         func_1645E0
    ctx->pc = 0x1640E8u;
    SET_GPR_U32(ctx, 31, 0x1640F0u);
    ctx->pc = 0x1640ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1640E8u;
            // 0x1640ec: 0x922505e4  lbu         $a1, 0x5E4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1508)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1645E0u;
    if (runtime->hasFunction(0x1645E0u)) {
        auto targetFn = runtime->lookupFunction(0x1645E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640F0u; }
        if (ctx->pc != 0x1640F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001645E0_0x1645e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640F0u; }
        if (ctx->pc != 0x1640F0u) { return; }
    }
    ctx->pc = 0x1640F0u;
label_1640f0:
    // 0x1640f0: 0xc06003c  jal         func_1800F0
    ctx->pc = 0x1640F0u;
    SET_GPR_U32(ctx, 31, 0x1640F8u);
    ctx->pc = 0x1640F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1640F0u;
            // 0x1640f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1800F0u;
    if (runtime->hasFunction(0x1800F0u)) {
        auto targetFn = runtime->lookupFunction(0x1800F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640F8u; }
        if (ctx->pc != 0x1640F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001800F0_0x1800f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640F8u; }
        if (ctx->pc != 0x1640F8u) { return; }
    }
    ctx->pc = 0x1640F8u;
label_1640f8:
    // 0x1640f8: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x1640f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x1640fc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1640fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x164100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164104: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x164104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x164108: 0xc06005c  jal         func_180170
    ctx->pc = 0x164108u;
    SET_GPR_U32(ctx, 31, 0x164110u);
    ctx->pc = 0x16410Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164108u;
            // 0x16410c: 0xae220494  sw          $v0, 0x494($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180170u;
    if (runtime->hasFunction(0x180170u)) {
        auto targetFn = runtime->lookupFunction(0x180170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164110u; }
        if (ctx->pc != 0x164110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180170_0x180170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164110u; }
        if (ctx->pc != 0x164110u) { return; }
    }
    ctx->pc = 0x164110u;
label_164110:
    // 0x164110: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x164110u;
    {
        const bool branch_taken_0x164110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164110) {
            ctx->pc = 0x16419Cu;
            goto label_16419c;
        }
    }
    ctx->pc = 0x164118u;
label_164118:
    // 0x164118: 0x922205f0  lbu         $v0, 0x5F0($s1)
    ctx->pc = 0x164118u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1520)));
label_16411c:
    // 0x16411c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16411cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164120: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x164120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x164124: 0xc06003c  jal         func_1800F0
    ctx->pc = 0x164124u;
    SET_GPR_U32(ctx, 31, 0x16412Cu);
    ctx->pc = 0x164128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164124u;
            // 0x164128: 0xa22205f0  sb          $v0, 0x5F0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1520), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1800F0u;
    if (runtime->hasFunction(0x1800F0u)) {
        auto targetFn = runtime->lookupFunction(0x1800F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16412Cu; }
        if (ctx->pc != 0x16412Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001800F0_0x1800f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16412Cu; }
        if (ctx->pc != 0x16412Cu) { return; }
    }
    ctx->pc = 0x16412Cu;
label_16412c:
    // 0x16412c: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x16412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x164130: 0x30428300  andi        $v0, $v0, 0x8300
    ctx->pc = 0x164130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)33536);
    // 0x164134: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x164134u;
    {
        const bool branch_taken_0x164134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164134) {
            ctx->pc = 0x164138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164134u;
            // 0x164138: 0x8e230494  lw          $v1, 0x494($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164184u;
            goto label_164184;
        }
    }
    ctx->pc = 0x16413Cu;
    // 0x16413c: 0x9226035d  lbu         $a2, 0x35D($s1)
    ctx->pc = 0x16413cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 861)));
    // 0x164140: 0x28c2000f  slti        $v0, $a2, 0xF
    ctx->pc = 0x164140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x164144: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x164144u;
    {
        const bool branch_taken_0x164144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164144) {
            ctx->pc = 0x164148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164144u;
            // 0x164148: 0x8e240364  lw          $a0, 0x364($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16415Cu;
            goto label_16415c;
        }
    }
    ctx->pc = 0x16414Cu;
    // 0x16414c: 0x28c2001c  slti        $v0, $a2, 0x1C
    ctx->pc = 0x16414cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x164150: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x164150u;
    {
        const bool branch_taken_0x164150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164150) {
            ctx->pc = 0x164180u;
            goto label_164180;
        }
    }
    ctx->pc = 0x164158u;
    // 0x164158: 0x8e240364  lw          $a0, 0x364($s1)
    ctx->pc = 0x164158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 868)));
label_16415c:
    // 0x16415c: 0xc06008c  jal         func_180230
    ctx->pc = 0x16415Cu;
    SET_GPR_U32(ctx, 31, 0x164164u);
    ctx->pc = 0x164160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16415Cu;
            // 0x164160: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180230u;
    if (runtime->hasFunction(0x180230u)) {
        auto targetFn = runtime->lookupFunction(0x180230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164164u; }
        if (ctx->pc != 0x164164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180230_0x180230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164164u; }
        if (ctx->pc != 0x164164u) { return; }
    }
    ctx->pc = 0x164164u;
label_164164:
    // 0x164164: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x164164u;
    {
        const bool branch_taken_0x164164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164164) {
            ctx->pc = 0x164168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164164u;
            // 0x164168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164194u;
            goto label_164194;
        }
    }
    ctx->pc = 0x16416Cu;
    // 0x16416c: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x16416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x164170: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x164170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x164174: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x164174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x164178: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x164178u;
    {
        const bool branch_taken_0x164178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16417Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164178u;
            // 0x16417c: 0xae220494  sw          $v0, 0x494($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164178) {
            ctx->pc = 0x164190u;
            goto label_164190;
        }
    }
    ctx->pc = 0x164180u;
label_164180:
    // 0x164180: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x164180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
label_164184:
    // 0x164184: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x164184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x164188: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x164188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16418c: 0xae220494  sw          $v0, 0x494($s1)
    ctx->pc = 0x16418cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1172), GPR_U32(ctx, 2));
label_164190:
    // 0x164190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164194:
    // 0x164194: 0xc06005c  jal         func_180170
    ctx->pc = 0x164194u;
    SET_GPR_U32(ctx, 31, 0x16419Cu);
    ctx->pc = 0x180170u;
    if (runtime->hasFunction(0x180170u)) {
        auto targetFn = runtime->lookupFunction(0x180170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16419Cu; }
        if (ctx->pc != 0x16419Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180170_0x180170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16419Cu; }
        if (ctx->pc != 0x16419Cu) { return; }
    }
    ctx->pc = 0x16419Cu;
label_16419c:
    // 0x16419c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16419cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1641a0:
    // 0x1641a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1641a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1641a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1641a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1641a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1641A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1641ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1641A8u;
            // 0x1641ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1641B0u;
    ctx->pc = 0x1641b0u;
}
