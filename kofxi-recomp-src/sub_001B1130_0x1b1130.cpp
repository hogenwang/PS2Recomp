#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1130
// Address: 0x1b1130 - 0x1b11f0
void sub_001B1130_0x1b1130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1130_0x1b1130");
#endif

    switch (ctx->pc) {
        case 0x1b1150u: goto label_1b1150;
        case 0x1b1178u: goto label_1b1178;
        case 0x1b1180u: goto label_1b1180;
        case 0x1b1194u: goto label_1b1194;
        case 0x1b11b8u: goto label_1b11b8;
        case 0x1b11ccu: goto label_1b11cc;
        case 0x1b11d4u: goto label_1b11d4;
        case 0x1b11dcu: goto label_1b11dc;
        default: break;
    }

    ctx->pc = 0x1b1130u;

    // 0x1b1130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b113c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B113Cu;
    {
        const bool branch_taken_0x1b113c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B113Cu;
            // 0x1b1140: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b113c) {
            ctx->pc = 0x1B1158u;
            goto label_1b1158;
        }
    }
    ctx->pc = 0x1B1144u;
    // 0x1b1144: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b1144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b1148: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B1148u;
    SET_GPR_U32(ctx, 31, 0x1B1150u);
    ctx->pc = 0x1B114Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1148u;
            // 0x1b114c: 0x248479a0  addiu       $a0, $a0, 0x79A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1150u; }
        if (ctx->pc != 0x1B1150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1150u; }
        if (ctx->pc != 0x1B1150u) { return; }
    }
    ctx->pc = 0x1B1150u;
label_1b1150:
    // 0x1b1150: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B1150u;
    {
        const bool branch_taken_0x1b1150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1150u;
            // 0x1b1154: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1150) {
            ctx->pc = 0x1B11A4u;
            goto label_1b11a4;
        }
    }
    ctx->pc = 0x1B1158u;
label_1b1158:
    // 0x1b1158: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x1b1158u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b115c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b115cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1b1160: 0x3442f7ff  ori         $v0, $v0, 0xF7FF
    ctx->pc = 0x1b1160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
    // 0x1b1164: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b1164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b1168: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B1168u;
    {
        const bool branch_taken_0x1b1168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1168) {
            ctx->pc = 0x1B119Cu;
            goto label_1b119c;
        }
    }
    ctx->pc = 0x1B1170u;
    // 0x1b1170: 0xc06e014  jal         func_1B8050
    ctx->pc = 0x1B1170u;
    SET_GPR_U32(ctx, 31, 0x1B1178u);
    ctx->pc = 0x1B1174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1170u;
            // 0x1b1174: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8050u;
    if (runtime->hasFunction(0x1B8050u)) {
        auto targetFn = runtime->lookupFunction(0x1B8050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1178u; }
        if (ctx->pc != 0x1B1178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8050_0x1b8050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1178u; }
        if (ctx->pc != 0x1B1178u) { return; }
    }
    ctx->pc = 0x1B1178u;
label_1b1178:
    // 0x1b1178: 0xc06db18  jal         func_1B6C60
    ctx->pc = 0x1B1178u;
    SET_GPR_U32(ctx, 31, 0x1B1180u);
    ctx->pc = 0x1B117Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1178u;
            // 0x1b117c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C60u;
    if (runtime->hasFunction(0x1B6C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1180u; }
        if (ctx->pc != 0x1B1180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6C60_0x1b6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1180u; }
        if (ctx->pc != 0x1B1180u) { return; }
    }
    ctx->pc = 0x1B1180u;
label_1b1180:
    // 0x1b1180: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b1180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1184: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1184u;
    {
        const bool branch_taken_0x1b1184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B1188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1184u;
            // 0x1b1188: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1184) {
            ctx->pc = 0x1B11A4u;
            goto label_1b11a4;
        }
    }
    ctx->pc = 0x1B118Cu;
    // 0x1b118c: 0xc06de8c  jal         func_1B7A30
    ctx->pc = 0x1B118Cu;
    SET_GPR_U32(ctx, 31, 0x1B1194u);
    ctx->pc = 0x1B1190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B118Cu;
            // 0x1b1190: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A30u;
    if (runtime->hasFunction(0x1B7A30u)) {
        auto targetFn = runtime->lookupFunction(0x1B7A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1194u; }
        if (ctx->pc != 0x1B1194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7A30_0x1b7a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1194u; }
        if (ctx->pc != 0x1B1194u) { return; }
    }
    ctx->pc = 0x1B1194u;
label_1b1194:
    // 0x1b1194: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1b1194u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1b1198: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b1198u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b119c:
    // 0x1b119c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1b119cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b11a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b11a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b11a4:
    // 0x1b11a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b11a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b11a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b11a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b11ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B11ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B11B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11ACu;
            // 0x1b11b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B11B4u;
    // 0x1b11b4: 0x0  nop
    ctx->pc = 0x1b11b4u;
    // NOP
label_1b11b8:
    // 0x1b11b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b11b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b11bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b11bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b11c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b11c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b11c4: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B11C4u;
    SET_GPR_U32(ctx, 31, 0x1B11CCu);
    ctx->pc = 0x1B11C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11C4u;
            // 0x1b11c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B11CCu; }
        if (ctx->pc != 0x1B11CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B11CCu; }
        if (ctx->pc != 0x1B11CCu) { return; }
    }
    ctx->pc = 0x1B11CCu;
label_1b11cc:
    // 0x1b11cc: 0xc06c47c  jal         func_1B11F0
    ctx->pc = 0x1B11CCu;
    SET_GPR_U32(ctx, 31, 0x1B11D4u);
    ctx->pc = 0x1B11D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11CCu;
            // 0x1b11d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B11F0u;
    if (runtime->hasFunction(0x1B11F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B11F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B11D4u; }
        if (ctx->pc != 0x1B11D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B11F0_0x1b11f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B11D4u; }
        if (ctx->pc != 0x1B11D4u) { return; }
    }
    ctx->pc = 0x1B11D4u;
label_1b11d4:
    // 0x1b11d4: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B11D4u;
    SET_GPR_U32(ctx, 31, 0x1B11DCu);
    ctx->pc = 0x1B11D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11D4u;
            // 0x1b11d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B11DCu; }
        if (ctx->pc != 0x1B11DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B11DCu; }
        if (ctx->pc != 0x1B11DCu) { return; }
    }
    ctx->pc = 0x1B11DCu;
label_1b11dc:
    // 0x1b11dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b11dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b11e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b11e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b11e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b11e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b11e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B11E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B11ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11E8u;
            // 0x1b11ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B11F0u;
    ctx->pc = 0x1b11f0u;
}
