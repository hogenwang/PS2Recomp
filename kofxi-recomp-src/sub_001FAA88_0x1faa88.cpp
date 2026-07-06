#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FAA88
// Address: 0x1faa88 - 0x1fabd8
void sub_001FAA88_0x1faa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAA88_0x1faa88");
#endif

    switch (ctx->pc) {
        case 0x1faaa4u: goto label_1faaa4;
        case 0x1faac8u: goto label_1faac8;
        case 0x1faae8u: goto label_1faae8;
        case 0x1fab18u: goto label_1fab18;
        case 0x1fab50u: goto label_1fab50;
        case 0x1fabb8u: goto label_1fabb8;
        default: break;
    }

    ctx->pc = 0x1faa88u;

    // 0x1faa88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1faa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1faa8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1faa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1faa90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1faa90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faa94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1faa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1faa98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1faa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1faa9c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FAA9Cu;
    SET_GPR_U32(ctx, 31, 0x1FAAA4u);
    ctx->pc = 0x1FAAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAA9Cu;
            // 0x1faaa0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAAA4u; }
        if (ctx->pc != 0x1FAAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAAA4u; }
        if (ctx->pc != 0x1FAAA4u) { return; }
    }
    ctx->pc = 0x1FAAA4u;
label_1faaa4:
    // 0x1faaa4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1faaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1faaa8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAAA8u;
    {
        const bool branch_taken_0x1faaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAAA8u;
            // 0x1faaac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faaa8) {
            ctx->pc = 0x1FAAC8u;
            goto label_1faac8;
        }
    }
    ctx->pc = 0x1FAAB0u;
    // 0x1faab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1faab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faab4: 0x34a5015c  ori         $a1, $a1, 0x15C
    ctx->pc = 0x1faab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)348);
    // 0x1faab8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1faab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1faabc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1faabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faac0: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FAAC0u;
    ctx->pc = 0x1FAAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAAC0u;
            // 0x1faac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FAAC8u;
label_1faac8:
    // 0x1faac8: 0x8e043708  lw          $a0, 0x3708($s0)
    ctx->pc = 0x1faac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14088)));
    // 0x1faacc: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FAACCu;
    {
        const bool branch_taken_0x1faacc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1faacc) {
            ctx->pc = 0x1FAAD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAACCu;
            // 0x1faad0: 0xac910dd4  sw          $s1, 0xDD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3540), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FAAD4u;
            goto label_1faad4;
        }
    }
    ctx->pc = 0x1FAAD4u;
label_1faad4:
    // 0x1faad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1faad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faad8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1faad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1faadc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1faadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAAE0u;
            // 0x1faae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FAAE8u;
label_1faae8:
    // 0x1faae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1faae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1faaec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1faaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1faaf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1faaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1faaf4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1faaf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faaf8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1faaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1faafc: 0x26540e1c  addiu       $s4, $s2, 0xE1C
    ctx->pc = 0x1faafcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 3612));
    // 0x1fab00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fab00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fab04: 0x2651370c  addiu       $s1, $s2, 0x370C
    ctx->pc = 0x1fab04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 14092));
    // 0x1fab08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fab0c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fab0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1fab10: 0xc07ae2c  jal         func_1EB8B0
    ctx->pc = 0x1FAB10u;
    SET_GPR_U32(ctx, 31, 0x1FAB18u);
    ctx->pc = 0x1FAB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB10u;
            // 0x1fab14: 0x8e503708  lw          $s0, 0x3708($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8B0u;
    if (runtime->hasFunction(0x1EB8B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EB8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB18u; }
        if (ctx->pc != 0x1FAB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB8B0_0x1eb8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB18u; }
        if (ctx->pc != 0x1FAB18u) { return; }
    }
    ctx->pc = 0x1FAB18u;
label_1fab18:
    // 0x1fab18: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FAB18u;
    {
        const bool branch_taken_0x1fab18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fab18) {
            ctx->pc = 0x1FAB1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB18u;
            // 0x1fab1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FABBCu;
            goto label_1fabbc;
        }
    }
    ctx->pc = 0x1FAB20u;
    // 0x1fab20: 0x8e020dac  lw          $v0, 0xDAC($s0)
    ctx->pc = 0x1fab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3500)));
    // 0x1fab24: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FAB24u;
    {
        const bool branch_taken_0x1fab24 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FAB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB24u;
            // 0x1fab28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab24) {
            ctx->pc = 0x1FAB68u;
            goto label_1fab68;
        }
    }
    ctx->pc = 0x1FAB2Cu;
    // 0x1fab2c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1fab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fab30: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1fab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1fab34: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAB34u;
    {
        const bool branch_taken_0x1fab34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FAB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB34u;
            // 0x1fab38: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab34) {
            ctx->pc = 0x1FAB40u;
            goto label_1fab40;
        }
    }
    ctx->pc = 0x1FAB3Cu;
    // 0x1fab3c: 0x8e110dd4  lw          $s1, 0xDD4($s0)
    ctx->pc = 0x1fab3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3540)));
label_1fab40:
    // 0x1fab40: 0x622000a  bltzl       $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FAB40u;
    {
        const bool branch_taken_0x1fab40 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1fab40) {
            ctx->pc = 0x1FAB44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB40u;
            // 0x1fab44: 0x8e020db0  lw          $v0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FAB6Cu;
            goto label_1fab6c;
        }
    }
    ctx->pc = 0x1FAB48u;
    // 0x1fab48: 0xc07eaf6  jal         func_1FABD8
    ctx->pc = 0x1FAB48u;
    SET_GPR_U32(ctx, 31, 0x1FAB50u);
    ctx->pc = 0x1FAB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB48u;
            // 0x1fab4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FABD8u;
    if (runtime->hasFunction(0x1FABD8u)) {
        auto targetFn = runtime->lookupFunction(0x1FABD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB50u; }
        if (ctx->pc != 0x1FAB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FABD8_0x1fabd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB50u; }
        if (ctx->pc != 0x1FAB50u) { return; }
    }
    ctx->pc = 0x1FAB50u;
label_1fab50:
    // 0x1fab50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fab50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fab54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fab54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fab58: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAB58u;
    {
        const bool branch_taken_0x1fab58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FAB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB58u;
            // 0x1fab5c: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab58) {
            ctx->pc = 0x1FAB68u;
            goto label_1fab68;
        }
    }
    ctx->pc = 0x1FAB60u;
    // 0x1fab60: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fab60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fab64: 0xae020dac  sw          $v0, 0xDAC($s0)
    ctx->pc = 0x1fab64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3500), GPR_U32(ctx, 2));
label_1fab68:
    // 0x1fab68: 0x8e020db0  lw          $v0, 0xDB0($s0)
    ctx->pc = 0x1fab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_1fab6c:
    // 0x1fab6c: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAB6Cu;
    {
        const bool branch_taken_0x1fab6c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1fab6c) {
            ctx->pc = 0x1FAB90u;
            goto label_1fab90;
        }
    }
    ctx->pc = 0x1FAB74u;
    // 0x1fab74: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1fab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1fab78: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FAB78u;
    {
        const bool branch_taken_0x1fab78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fab78) {
            ctx->pc = 0x1FAB90u;
            goto label_1fab90;
        }
    }
    ctx->pc = 0x1FAB80u;
    // 0x1fab80: 0xae020db0  sw          $v0, 0xDB0($s0)
    ctx->pc = 0x1fab80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3504), GPR_U32(ctx, 2));
    // 0x1fab84: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fab84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fab88: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1fab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1fab8c: 0xae020db4  sw          $v0, 0xDB4($s0)
    ctx->pc = 0x1fab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3508), GPR_U32(ctx, 2));
label_1fab90:
    // 0x1fab90: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FAB90u;
    {
        const bool branch_taken_0x1fab90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB90u;
            // 0x1fab94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab90) {
            ctx->pc = 0x1FABB8u;
            goto label_1fabb8;
        }
    }
    ctx->pc = 0x1FAB98u;
    // 0x1fab98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fab98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fab9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fab9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faba0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1faba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1faba4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1faba4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1faba8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1faba8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fabac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fabacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fabb0: 0x807eb08  j           func_1FAC20
    ctx->pc = 0x1FABB0u;
    ctx->pc = 0x1FABB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FABB0u;
            // 0x1fabb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC20u;
    if (runtime->hasFunction(0x1FAC20u)) {
        auto targetFn = runtime->lookupFunction(0x1FAC20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001FAC20_0x1fac20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FABB8u;
label_1fabb8:
    // 0x1fabb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fabb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fabbc:
    // 0x1fabbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fabbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fabc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fabc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fabc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fabc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fabc8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fabc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fabcc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fabccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fabd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FABD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FABD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FABD0u;
            // 0x1fabd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FABD8u;
    ctx->pc = 0x1fabd8u;
}
