#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1080
// Address: 0x1b1080 - 0x1b1130
void sub_001B1080_0x1b1080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1080_0x1b1080");
#endif

    switch (ctx->pc) {
        case 0x1b10a0u: goto label_1b10a0;
        case 0x1b10c8u: goto label_1b10c8;
        case 0x1b10d0u: goto label_1b10d0;
        case 0x1b10e4u: goto label_1b10e4;
        case 0x1b10f8u: goto label_1b10f8;
        case 0x1b110cu: goto label_1b110c;
        case 0x1b1114u: goto label_1b1114;
        case 0x1b111cu: goto label_1b111c;
        default: break;
    }

    ctx->pc = 0x1b1080u;

    // 0x1b1080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b108c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B108Cu;
    {
        const bool branch_taken_0x1b108c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B108Cu;
            // 0x1b1090: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b108c) {
            ctx->pc = 0x1B10A8u;
            goto label_1b10a8;
        }
    }
    ctx->pc = 0x1B1094u;
    // 0x1b1094: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b1094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b1098: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B1098u;
    SET_GPR_U32(ctx, 31, 0x1B10A0u);
    ctx->pc = 0x1B109Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1098u;
            // 0x1b109c: 0x24847970  addiu       $a0, $a0, 0x7970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10A0u; }
        if (ctx->pc != 0x1B10A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10A0u; }
        if (ctx->pc != 0x1B10A0u) { return; }
    }
    ctx->pc = 0x1B10A0u;
label_1b10a0:
    // 0x1b10a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B10A0u;
    {
        const bool branch_taken_0x1b10a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B10A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10A0u;
            // 0x1b10a4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b10a0) {
            ctx->pc = 0x1B10E8u;
            goto label_1b10e8;
        }
    }
    ctx->pc = 0x1B10A8u;
label_1b10a8:
    // 0x1b10a8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1b10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b10ac: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1b10acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x1b10b0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1b10b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1b10b4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b10b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b10b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B10B8u;
    {
        const bool branch_taken_0x1b10b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b10b8) {
            ctx->pc = 0x1B10DCu;
            goto label_1b10dc;
        }
    }
    ctx->pc = 0x1B10C0u;
    // 0x1b10c0: 0xc06e014  jal         func_1B8050
    ctx->pc = 0x1B10C0u;
    SET_GPR_U32(ctx, 31, 0x1B10C8u);
    ctx->pc = 0x1B10C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10C0u;
            // 0x1b10c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8050u;
    if (runtime->hasFunction(0x1B8050u)) {
        auto targetFn = runtime->lookupFunction(0x1B8050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10C8u; }
        if (ctx->pc != 0x1B10C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8050_0x1b8050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10C8u; }
        if (ctx->pc != 0x1B10C8u) { return; }
    }
    ctx->pc = 0x1B10C8u;
label_1b10c8:
    // 0x1b10c8: 0xc06db18  jal         func_1B6C60
    ctx->pc = 0x1B10C8u;
    SET_GPR_U32(ctx, 31, 0x1B10D0u);
    ctx->pc = 0x1B10CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10C8u;
            // 0x1b10cc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C60u;
    if (runtime->hasFunction(0x1B6C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10D0u; }
        if (ctx->pc != 0x1B10D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6C60_0x1b6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10D0u; }
        if (ctx->pc != 0x1B10D0u) { return; }
    }
    ctx->pc = 0x1B10D0u;
label_1b10d0:
    // 0x1b10d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b10d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b10d4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B10D4u;
    {
        const bool branch_taken_0x1b10d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B10D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10D4u;
            // 0x1b10d8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b10d4) {
            ctx->pc = 0x1B10E8u;
            goto label_1b10e8;
        }
    }
    ctx->pc = 0x1B10DCu;
label_1b10dc:
    // 0x1b10dc: 0xc06deb0  jal         func_1B7AC0
    ctx->pc = 0x1B10DCu;
    SET_GPR_U32(ctx, 31, 0x1B10E4u);
    ctx->pc = 0x1B10E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10DCu;
            // 0x1b10e0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7AC0u;
    if (runtime->hasFunction(0x1B7AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10E4u; }
        if (ctx->pc != 0x1B10E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7AC0_0x1b7ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10E4u; }
        if (ctx->pc != 0x1B10E4u) { return; }
    }
    ctx->pc = 0x1B10E4u;
label_1b10e4:
    // 0x1b10e4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1b10e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1b10e8:
    // 0x1b10e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b10e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b10ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b10ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b10f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B10F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B10F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10F0u;
            // 0x1b10f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B10F8u;
label_1b10f8:
    // 0x1b10f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b10f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b10fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b10fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1100: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b1104: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B1104u;
    SET_GPR_U32(ctx, 31, 0x1B110Cu);
    ctx->pc = 0x1B1108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1104u;
            // 0x1b1108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B110Cu; }
        if (ctx->pc != 0x1B110Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B110Cu; }
        if (ctx->pc != 0x1B110Cu) { return; }
    }
    ctx->pc = 0x1B110Cu;
label_1b110c:
    // 0x1b110c: 0xc06c44c  jal         func_1B1130
    ctx->pc = 0x1B110Cu;
    SET_GPR_U32(ctx, 31, 0x1B1114u);
    ctx->pc = 0x1B1110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B110Cu;
            // 0x1b1110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1130u;
    if (runtime->hasFunction(0x1B1130u)) {
        auto targetFn = runtime->lookupFunction(0x1B1130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1114u; }
        if (ctx->pc != 0x1B1114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1130_0x1b1130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1114u; }
        if (ctx->pc != 0x1B1114u) { return; }
    }
    ctx->pc = 0x1B1114u;
label_1b1114:
    // 0x1b1114: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B1114u;
    SET_GPR_U32(ctx, 31, 0x1B111Cu);
    ctx->pc = 0x1B1118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1114u;
            // 0x1b1118: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B111Cu; }
        if (ctx->pc != 0x1B111Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B111Cu; }
        if (ctx->pc != 0x1B111Cu) { return; }
    }
    ctx->pc = 0x1B111Cu;
label_1b111c:
    // 0x1b111c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b111cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1120: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1128: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B112Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1128u;
            // 0x1b112c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1130u;
    ctx->pc = 0x1b1130u;
}
