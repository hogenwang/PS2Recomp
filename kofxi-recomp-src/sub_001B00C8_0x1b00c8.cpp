#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B00C8
// Address: 0x1b00c8 - 0x1b01b0
void sub_001B00C8_0x1b00c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B00C8_0x1b00c8");
#endif

    switch (ctx->pc) {
        case 0x1b0104u: goto label_1b0104;
        case 0x1b010cu: goto label_1b010c;
        case 0x1b0120u: goto label_1b0120;
        case 0x1b0148u: goto label_1b0148;
        case 0x1b0174u: goto label_1b0174;
        case 0x1b0188u: goto label_1b0188;
        case 0x1b0190u: goto label_1b0190;
        default: break;
    }

    ctx->pc = 0x1b00c8u;

    // 0x1b00c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b00c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b00cc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1b00ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b00d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b00d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b00d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b00d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b00dc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1b00dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b00e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b00e4: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x1b00e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x1b00e8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1b00e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1b00ec: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x1b00ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
    // 0x1b00f0: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1b00f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1b00f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b00f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b00f8: 0xae110044  sw          $s1, 0x44($s0)
    ctx->pc = 0x1b00f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
    // 0x1b00fc: 0xc06dab0  jal         func_1B6AC0
    ctx->pc = 0x1B00FCu;
    SET_GPR_U32(ctx, 31, 0x1B0104u);
    ctx->pc = 0x1B0100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B00FCu;
            // 0x1b0100: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AC0u;
    if (runtime->hasFunction(0x1B6AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1B6AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0104u; }
        if (ctx->pc != 0x1B0104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6AC0_0x1b6ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0104u; }
        if (ctx->pc != 0x1B0104u) { return; }
    }
    ctx->pc = 0x1B0104u;
label_1b0104:
    // 0x1b0104: 0xc06db18  jal         func_1B6C60
    ctx->pc = 0x1B0104u;
    SET_GPR_U32(ctx, 31, 0x1B010Cu);
    ctx->pc = 0x1B0108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0104u;
            // 0x1b0108: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C60u;
    if (runtime->hasFunction(0x1B6C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B010Cu; }
        if (ctx->pc != 0x1B010Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6C60_0x1b6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B010Cu; }
        if (ctx->pc != 0x1B010Cu) { return; }
    }
    ctx->pc = 0x1B010Cu;
label_1b010c:
    // 0x1b010c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b010cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b0110: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0110u;
    {
        const bool branch_taken_0x1b0110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B0114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0110u;
            // 0x1b0114: 0x1122c0  sll         $a0, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0110) {
            ctx->pc = 0x1B0128u;
            goto label_1b0128;
        }
    }
    ctx->pc = 0x1B0118u;
    // 0x1b0118: 0xc06daf6  jal         func_1B6BD8
    ctx->pc = 0x1B0118u;
    SET_GPR_U32(ctx, 31, 0x1B0120u);
    ctx->pc = 0x1B011Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0118u;
            // 0x1b011c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BD8u;
    if (runtime->hasFunction(0x1B6BD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B6BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0120u; }
        if (ctx->pc != 0x1B0120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6BD8_0x1b6bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0120u; }
        if (ctx->pc != 0x1B0120u) { return; }
    }
    ctx->pc = 0x1B0120u;
label_1b0120:
    // 0x1b0120: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0120u;
    {
        const bool branch_taken_0x1b0120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0120u;
            // 0x1b0124: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0120) {
            ctx->pc = 0x1B0134u;
            goto label_1b0134;
        }
    }
    ctx->pc = 0x1B0128u;
label_1b0128:
    // 0x1b0128: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x1b0128u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
    // 0x1b012c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b012cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0130: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1b0130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_1b0134:
    // 0x1b0134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0138: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b013c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b013cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0140: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0140u;
            // 0x1b0144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0148u;
label_1b0148:
    // 0x1b0148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b014c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b014cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0154: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0158: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b0158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b015c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b015cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b0160: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b0160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0164: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b0164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b0168: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b0168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b016c: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B016Cu;
    SET_GPR_U32(ctx, 31, 0x1B0174u);
    ctx->pc = 0x1B0170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B016Cu;
            // 0x1b0170: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0174u; }
        if (ctx->pc != 0x1B0174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0174u; }
        if (ctx->pc != 0x1B0174u) { return; }
    }
    ctx->pc = 0x1B0174u;
label_1b0174:
    // 0x1b0174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b017c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b017cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0180: 0xc06c06c  jal         func_1B01B0
    ctx->pc = 0x1B0180u;
    SET_GPR_U32(ctx, 31, 0x1B0188u);
    ctx->pc = 0x1B0184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0180u;
            // 0x1b0184: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B01B0u;
    if (runtime->hasFunction(0x1B01B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B01B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0188u; }
        if (ctx->pc != 0x1B0188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01B0_0x1b01b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0188u; }
        if (ctx->pc != 0x1B0188u) { return; }
    }
    ctx->pc = 0x1B0188u;
label_1b0188:
    // 0x1b0188: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B0188u;
    SET_GPR_U32(ctx, 31, 0x1B0190u);
    ctx->pc = 0x1B018Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0188u;
            // 0x1b018c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0190u; }
        if (ctx->pc != 0x1B0190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0190u; }
        if (ctx->pc != 0x1B0190u) { return; }
    }
    ctx->pc = 0x1B0190u;
label_1b0190:
    // 0x1b0190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0194: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0198: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b019c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b019cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b01a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b01a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b01a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b01a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b01a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B01A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B01ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B01A8u;
            // 0x1b01ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B01B0u;
    ctx->pc = 0x1b01b0u;
}
