#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00237FE0
// Address: 0x237fe0 - 0x238198
void sub_00237FE0_0x237fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237FE0_0x237fe0");
#endif

    switch (ctx->pc) {
        case 0x23800cu: goto label_23800c;
        case 0x23802cu: goto label_23802c;
        case 0x238058u: goto label_238058;
        case 0x238088u: goto label_238088;
        case 0x2380b4u: goto label_2380b4;
        case 0x2380c0u: goto label_2380c0;
        case 0x2380e0u: goto label_2380e0;
        case 0x2380f0u: goto label_2380f0;
        case 0x2380fcu: goto label_2380fc;
        case 0x238120u: goto label_238120;
        case 0x23816cu: goto label_23816c;
        default: break;
    }

    ctx->pc = 0x237fe0u;

    // 0x237fe0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x237fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x237fe4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x237fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x237fe8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x237fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x237fec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x237fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ff0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x237ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x237ff4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x237ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x237ff8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x237ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x237ffc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x237ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x238000: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x238000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x238004: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x238004u;
    SET_GPR_U32(ctx, 31, 0x23800Cu);
    ctx->pc = 0x238008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238004u;
            // 0x238008: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (runtime->hasFunction(0x22B220u)) {
        auto targetFn = runtime->lookupFunction(0x22B220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23800Cu; }
        if (ctx->pc != 0x23800Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B220_0x22b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23800Cu; }
        if (ctx->pc != 0x23800Cu) { return; }
    }
    ctx->pc = 0x23800Cu;
label_23800c:
    // 0x23800c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x23800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x238010: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x238010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x238014: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x238014u;
    {
        const bool branch_taken_0x238014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238014u;
            // 0x238018: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238014) {
            ctx->pc = 0x238034u;
            goto label_238034;
        }
    }
    ctx->pc = 0x23801Cu;
    // 0x23801c: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x23801cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x238020: 0x24a54e58  addiu       $a1, $a1, 0x4E58
    ctx->pc = 0x238020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20056));
    // 0x238024: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x238024u;
    SET_GPR_U32(ctx, 31, 0x23802Cu);
    ctx->pc = 0x238028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238024u;
            // 0x238028: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23802Cu; }
        if (ctx->pc != 0x23802Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23802Cu; }
        if (ctx->pc != 0x23802Cu) { return; }
    }
    ctx->pc = 0x23802Cu;
label_23802c:
    // 0x23802c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x23802Cu;
    {
        const bool branch_taken_0x23802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23802Cu;
            // 0x238030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23802c) {
            ctx->pc = 0x238170u;
            goto label_238170;
        }
    }
    ctx->pc = 0x238034u;
label_238034:
    // 0x238034: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x238034u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x238038: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x238038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x23803c: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x23803cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238040: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x238040u;
    {
        const bool branch_taken_0x238040 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x238044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238040u;
            // 0x238044: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238040) {
            ctx->pc = 0x238060u;
            goto label_238060;
        }
    }
    ctx->pc = 0x238048u;
    // 0x238048: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x238048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x23804c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23804cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x238050: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x238050u;
    SET_GPR_U32(ctx, 31, 0x238058u);
    ctx->pc = 0x238054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238050u;
            // 0x238054: 0x24a54e90  addiu       $a1, $a1, 0x4E90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238058u; }
        if (ctx->pc != 0x238058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238058u; }
        if (ctx->pc != 0x238058u) { return; }
    }
    ctx->pc = 0x238058u;
label_238058:
    // 0x238058: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x238058u;
    {
        const bool branch_taken_0x238058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23805Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238058u;
            // 0x23805c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238058) {
            ctx->pc = 0x238170u;
            goto label_238170;
        }
    }
    ctx->pc = 0x238060u;
label_238060:
    // 0x238060: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x238060u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238064: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x238064u;
    {
        const bool branch_taken_0x238064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238064u;
            // 0x238068: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238064) {
            ctx->pc = 0x23816Cu;
            goto label_23816c;
        }
    }
    ctx->pc = 0x23806Cu;
    // 0x23806c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x23806cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238070: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x238070u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x238074: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x238074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x238078: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x238078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x23807c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x23807cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x238080: 0xc08ddb8  jal         func_2376E0
    ctx->pc = 0x238080u;
    SET_GPR_U32(ctx, 31, 0x238088u);
    ctx->pc = 0x238084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238080u;
            // 0x238084: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2376E0u;
    if (runtime->hasFunction(0x2376E0u)) {
        auto targetFn = runtime->lookupFunction(0x2376E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238088u; }
        if (ctx->pc != 0x238088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002376E0_0x2376e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238088u; }
        if (ctx->pc != 0x238088u) { return; }
    }
    ctx->pc = 0x238088u;
label_238088:
    // 0x238088: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x238088u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23808c: 0x12400038  beqz        $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x23808Cu;
    {
        const bool branch_taken_0x23808c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x238090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23808Cu;
            // 0x238090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23808c) {
            ctx->pc = 0x238170u;
            goto label_238170;
        }
    }
    ctx->pc = 0x238094u;
    // 0x238094: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x238094u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238098: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x238098u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x23809c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23809cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2380a0: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x2380a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2380a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2380A4u;
    {
        const bool branch_taken_0x2380a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2380A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2380A4u;
            // 0x2380a8: 0x62a825  or          $s5, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2380a4) {
            ctx->pc = 0x2380B4u;
            goto label_2380b4;
        }
    }
    ctx->pc = 0x2380ACu;
    // 0x2380ac: 0xc08cd78  jal         func_2335E0
    ctx->pc = 0x2380ACu;
    SET_GPR_U32(ctx, 31, 0x2380B4u);
    ctx->pc = 0x2380B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2380ACu;
            // 0x2380b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2335E0u;
    if (runtime->hasFunction(0x2335E0u)) {
        auto targetFn = runtime->lookupFunction(0x2335E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2380B4u; }
        if (ctx->pc != 0x2380B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002335E0_0x2335e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2380B4u; }
        if (ctx->pc != 0x2380B4u) { return; }
    }
    ctx->pc = 0x2380B4u;
label_2380b4:
    // 0x2380b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2380b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380b8: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x2380B8u;
    SET_GPR_U32(ctx, 31, 0x2380C0u);
    ctx->pc = 0x2380BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2380B8u;
            // 0x2380bc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (runtime->hasFunction(0x22B220u)) {
        auto targetFn = runtime->lookupFunction(0x22B220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2380C0u; }
        if (ctx->pc != 0x2380C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B220_0x22b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2380C0u; }
        if (ctx->pc != 0x2380C0u) { return; }
    }
    ctx->pc = 0x2380C0u;
label_2380c0:
    // 0x2380c0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2380c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380c4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2380c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2380c8: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x2380c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2380cc: 0x24a54ec8  addiu       $a1, $a1, 0x4EC8
    ctx->pc = 0x2380ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20168));
    // 0x2380d0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2380d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2380d4: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x2380d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2380d8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2380D8u;
    SET_GPR_U32(ctx, 31, 0x2380E0u);
    ctx->pc = 0x2380DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2380D8u;
            // 0x2380dc: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2380E0u; }
        if (ctx->pc != 0x2380E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2380E0u; }
        if (ctx->pc != 0x2380E0u) { return; }
    }
    ctx->pc = 0x2380E0u;
label_2380e0:
    // 0x2380e0: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2380E0u;
    {
        const bool branch_taken_0x2380e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2380E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2380E0u;
            // 0x2380e4: 0x3c13003f  lui         $s3, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2380e0) {
            ctx->pc = 0x238110u;
            goto label_238110;
        }
    }
    ctx->pc = 0x2380E8u;
    // 0x2380e8: 0x3c14003f  lui         $s4, 0x3F
    ctx->pc = 0x2380e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63 << 16));
    // 0x2380ec: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2380ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2380f0:
    // 0x2380f0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2380f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2380f4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2380F4u;
    SET_GPR_U32(ctx, 31, 0x2380FCu);
    ctx->pc = 0x2380F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2380F4u;
            // 0x2380f8: 0x26654ee8  addiu       $a1, $s3, 0x4EE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2380FCu; }
        if (ctx->pc != 0x2380FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2380FCu; }
        if (ctx->pc != 0x2380FCu) { return; }
    }
    ctx->pc = 0x2380FCu;
label_2380fc:
    // 0x2380fc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2380fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x238100: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x238100u;
    {
        const bool branch_taken_0x238100 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x238100) {
            ctx->pc = 0x238104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238100u;
            // 0x238104: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2380F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2380f0;
        }
    }
    ctx->pc = 0x238108u;
    // 0x238108: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x238108u;
    {
        const bool branch_taken_0x238108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23810Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238108u;
            // 0x23810c: 0x26854ef0  addiu       $a1, $s4, 0x4EF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 20208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238108) {
            ctx->pc = 0x238118u;
            goto label_238118;
        }
    }
    ctx->pc = 0x238110u;
label_238110:
    // 0x238110: 0x3c14003f  lui         $s4, 0x3F
    ctx->pc = 0x238110u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63 << 16));
    // 0x238114: 0x26854ef0  addiu       $a1, $s4, 0x4EF0
    ctx->pc = 0x238114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 20208));
label_238118:
    // 0x238118: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x238118u;
    SET_GPR_U32(ctx, 31, 0x238120u);
    ctx->pc = 0x23811Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238118u;
            // 0x23811c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238120u; }
        if (ctx->pc != 0x238120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238120u; }
        if (ctx->pc != 0x238120u) { return; }
    }
    ctx->pc = 0x238120u;
label_238120:
    // 0x238120: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x238120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x238124: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x238124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x238128: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x238128u;
    {
        const bool branch_taken_0x238128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23812Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238128u;
            // 0x23812c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238128) {
            ctx->pc = 0x238170u;
            goto label_238170;
        }
    }
    ctx->pc = 0x238130u;
    // 0x238130: 0xae320014  sw          $s2, 0x14($s1)
    ctx->pc = 0x238130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
    // 0x238134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x238134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238138: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x238138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23813c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23813cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238140: 0xde420058  ld          $v0, 0x58($s2)
    ctx->pc = 0x238140u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x238144: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x238144u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238148: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x238148u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x23814c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23814cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238150: 0xfe420058  sd          $v0, 0x58($s2)
    ctx->pc = 0x238150u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 2));
    // 0x238154: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x238154u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238158: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x238158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23815c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23815cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238164: 0x808e486  j           func_239218
    ctx->pc = 0x238164u;
    ctx->pc = 0x238168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238164u;
            // 0x238168: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239218u;
    {
        auto targetFn = runtime->lookupFunction(0x239218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x23816Cu;
label_23816c:
    // 0x23816c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23816cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238170:
    // 0x238170: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x238170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238174: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x238174u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238178: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x238178u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23817c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23817cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238180: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x238180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238184: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x238184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23818c: 0x808a996  j           func_22A658
    ctx->pc = 0x23818Cu;
    ctx->pc = 0x238190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23818Cu;
            // 0x238190: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022A658_0x22a658(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x238194u;
    // 0x238194: 0x0  nop
    ctx->pc = 0x238194u;
    // NOP
    ctx->pc = 0x238198u;
}
