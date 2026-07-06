#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1110
// Address: 0x1c1110 - 0x1c11f0
void sub_001C1110_0x1c1110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1110_0x1c1110");
#endif

    switch (ctx->pc) {
        case 0x1c1124u: goto label_1c1124;
        case 0x1c112cu: goto label_1c112c;
        case 0x1c1138u: goto label_1c1138;
        case 0x1c1150u: goto label_1c1150;
        case 0x1c1178u: goto label_1c1178;
        case 0x1c1180u: goto label_1c1180;
        case 0x1c1190u: goto label_1c1190;
        case 0x1c11a0u: goto label_1c11a0;
        case 0x1c11b0u: goto label_1c11b0;
        case 0x1c11c4u: goto label_1c11c4;
        case 0x1c11d8u: goto label_1c11d8;
        default: break;
    }

    ctx->pc = 0x1c1110u;

    // 0x1c1110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1118: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c111c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C111Cu;
    SET_GPR_U32(ctx, 31, 0x1C1124u);
    ctx->pc = 0x1C1120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C111Cu;
            // 0x1c1120: 0x24042300  addiu       $a0, $zero, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1124u; }
        if (ctx->pc != 0x1C1124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1124u; }
        if (ctx->pc != 0x1C1124u) { return; }
    }
    ctx->pc = 0x1C1124u;
label_1c1124:
    // 0x1c1124: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1C1124u;
    SET_GPR_U32(ctx, 31, 0x1C112Cu);
    ctx->pc = 0x1C1128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1124u;
            // 0x1c1128: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (runtime->hasFunction(0x11B970u)) {
        auto targetFn = runtime->lookupFunction(0x11B970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C112Cu; }
        if (ctx->pc != 0x1C112Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B970_0x11b970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C112Cu; }
        if (ctx->pc != 0x1C112Cu) { return; }
    }
    ctx->pc = 0x1C112Cu;
label_1c112c:
    // 0x1c112c: 0x24042301  addiu       $a0, $zero, 0x2301
    ctx->pc = 0x1c112cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8961));
    // 0x1c1130: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C1130u;
    SET_GPR_U32(ctx, 31, 0x1C1138u);
    ctx->pc = 0x1C1134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1130u;
            // 0x1c1134: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1138u; }
        if (ctx->pc != 0x1C1138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1138u; }
        if (ctx->pc != 0x1C1138u) { return; }
    }
    ctx->pc = 0x1C1138u;
label_1c1138:
    // 0x1c1138: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c113c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c113cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1144: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1144u;
            // 0x1c1148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C114Cu;
    // 0x1c114c: 0x0  nop
    ctx->pc = 0x1c114cu;
    // NOP
label_1c1150:
    // 0x1c1150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1154: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c1158: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c1158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c115c: 0x2450c7d0  addiu       $s0, $v0, -0x3830
    ctx->pc = 0x1c115cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952912));
    // 0x1c1160: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x1c1160u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c1164: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c1164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1168: 0x1464001b  bne         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C1168u;
    {
        const bool branch_taken_0x1c1168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C116Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1168u;
            // 0x1c116c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1168) {
            ctx->pc = 0x1C11D8u;
            goto label_1c11d8;
        }
    }
    ctx->pc = 0x1C1170u;
    // 0x1c1170: 0xc0736d2  jal         func_1CDB48
    ctx->pc = 0x1C1170u;
    SET_GPR_U32(ctx, 31, 0x1C1178u);
    ctx->pc = 0x1CDB48u;
    if (runtime->hasFunction(0x1CDB48u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1178u; }
        if (ctx->pc != 0x1C1178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDB48_0x1cdb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1178u; }
        if (ctx->pc != 0x1C1178u) { return; }
    }
    ctx->pc = 0x1C1178u;
label_1c1178:
    // 0x1c1178: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C1178u;
    SET_GPR_U32(ctx, 31, 0x1C1180u);
    ctx->pc = 0x1C117Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1178u;
            // 0x1c117c: 0x24042400  addiu       $a0, $zero, 0x2400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1180u; }
        if (ctx->pc != 0x1C1180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1180u; }
        if (ctx->pc != 0x1C1180u) { return; }
    }
    ctx->pc = 0x1C1180u;
label_1c1180:
    // 0x1c1180: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c1180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1184: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1c1184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1c1188: 0xc070572  jal         func_1C15C8
    ctx->pc = 0x1C1188u;
    SET_GPR_U32(ctx, 31, 0x1C1190u);
    ctx->pc = 0x1C118Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1188u;
            // 0x1c118c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C15C8u;
    if (runtime->hasFunction(0x1C15C8u)) {
        auto targetFn = runtime->lookupFunction(0x1C15C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1190u; }
        if (ctx->pc != 0x1C1190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C15C8_0x1c15c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1190u; }
        if (ctx->pc != 0x1C1190u) { return; }
    }
    ctx->pc = 0x1C1190u;
label_1c1190:
    // 0x1c1190: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1190u;
    {
        const bool branch_taken_0x1c1190 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C1194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1190u;
            // 0x1c1194: 0x24042402  addiu       $a0, $zero, 0x2402 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9218));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1190) {
            ctx->pc = 0x1C11A8u;
            goto label_1c11a8;
        }
    }
    ctx->pc = 0x1C1198u;
    // 0x1c1198: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C1198u;
    SET_GPR_U32(ctx, 31, 0x1C11A0u);
    ctx->pc = 0x1C119Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1198u;
            // 0x1c119c: 0x24042401  addiu       $a0, $zero, 0x2401 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9217));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11A0u; }
        if (ctx->pc != 0x1C11A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11A0u; }
        if (ctx->pc != 0x1C11A0u) { return; }
    }
    ctx->pc = 0x1C11A0u;
label_1c11a0:
    // 0x1c11a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C11A0u;
    {
        const bool branch_taken_0x1c11a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c11a0) {
            ctx->pc = 0x1C11D0u;
            goto label_1c11d0;
        }
    }
    ctx->pc = 0x1C11A8u;
label_1c11a8:
    // 0x1c11a8: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C11A8u;
    SET_GPR_U32(ctx, 31, 0x1C11B0u);
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11B0u; }
        if (ctx->pc != 0x1C11B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11B0u; }
        if (ctx->pc != 0x1C11B0u) { return; }
    }
    ctx->pc = 0x1C11B0u;
label_1c11b0:
    // 0x1c11b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C11B4u;
    {
        const bool branch_taken_0x1c11b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c11b4) {
            ctx->pc = 0x1C11D0u;
            goto label_1c11d0;
        }
    }
    ctx->pc = 0x1C11BCu;
    // 0x1c11bc: 0xc0736d8  jal         func_1CDB60
    ctx->pc = 0x1C11BCu;
    SET_GPR_U32(ctx, 31, 0x1C11C4u);
    ctx->pc = 0x1CDB60u;
    if (runtime->hasFunction(0x1CDB60u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11C4u; }
        if (ctx->pc != 0x1C11C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDB60_0x1cdb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11C4u; }
        if (ctx->pc != 0x1C11C4u) { return; }
    }
    ctx->pc = 0x1C11C4u;
label_1c11c4:
    // 0x1c11c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C11C4u;
    {
        const bool branch_taken_0x1c11c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11C4u;
            // 0x1c11c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11c4) {
            ctx->pc = 0x1C11DCu;
            goto label_1c11dc;
        }
    }
    ctx->pc = 0x1C11CCu;
    // 0x1c11cc: 0x0  nop
    ctx->pc = 0x1c11ccu;
    // NOP
label_1c11d0:
    // 0x1c11d0: 0xc0736d8  jal         func_1CDB60
    ctx->pc = 0x1C11D0u;
    SET_GPR_U32(ctx, 31, 0x1C11D8u);
    ctx->pc = 0x1CDB60u;
    if (runtime->hasFunction(0x1CDB60u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11D8u; }
        if (ctx->pc != 0x1C11D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDB60_0x1cdb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C11D8u; }
        if (ctx->pc != 0x1C11D8u) { return; }
    }
    ctx->pc = 0x1C11D8u;
label_1c11d8:
    // 0x1c11d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c11d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c11dc:
    // 0x1c11dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c11dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c11e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c11e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c11e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C11E4u;
            // 0x1c11e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C11ECu;
    // 0x1c11ec: 0x0  nop
    ctx->pc = 0x1c11ecu;
    // NOP
    ctx->pc = 0x1c11f0u;
}
