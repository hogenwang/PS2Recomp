#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C46F8
// Address: 0x2c46f8 - 0x2c47c0
void sub_002C46F8_0x2c46f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C46F8_0x2c46f8");
#endif

    switch (ctx->pc) {
        case 0x2c4730u: goto label_2c4730;
        case 0x2c4740u: goto label_2c4740;
        case 0x2c4754u: goto label_2c4754;
        case 0x2c477cu: goto label_2c477c;
        case 0x2c4788u: goto label_2c4788;
        case 0x2c4794u: goto label_2c4794;
        default: break;
    }

    ctx->pc = 0x2c46f8u;

    // 0x2c46f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c46f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c46fc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2c46fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c4700: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2c4700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c4704: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c4704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4708: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c4708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c470c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c470cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4710: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2c4710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2c4714: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4714u;
    {
        const bool branch_taken_0x2c4714 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4714u;
            // 0x2c4718: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4714) {
            ctx->pc = 0x2C4724u;
            goto label_2c4724;
        }
    }
    ctx->pc = 0x2C471Cu;
    // 0x2c471c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C471Cu;
    {
        const bool branch_taken_0x2c471c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C471Cu;
            // 0x2c4720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c471c) {
            ctx->pc = 0x2C47A0u;
            goto label_2c47a0;
        }
    }
    ctx->pc = 0x2C4724u;
label_2c4724:
    // 0x2c4724: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c4724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4728: 0xc0b093c  jal         func_2C24F0
    ctx->pc = 0x2C4728u;
    SET_GPR_U32(ctx, 31, 0x2C4730u);
    ctx->pc = 0x2C472Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4728u;
            // 0x2c472c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C24F0u;
    if (runtime->hasFunction(0x2C24F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4730u; }
        if (ctx->pc != 0x2C4730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C24F0_0x2c24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4730u; }
        if (ctx->pc != 0x2C4730u) { return; }
    }
    ctx->pc = 0x2C4730u;
label_2c4730:
    // 0x2c4730: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c4730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c4734: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c4734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4738: 0xc09fc32  jal         func_27F0C8
    ctx->pc = 0x2C4738u;
    SET_GPR_U32(ctx, 31, 0x2C4740u);
    ctx->pc = 0x2C473Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4738u;
            // 0x2c473c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C8u;
    if (runtime->hasFunction(0x27F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x27F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4740u; }
        if (ctx->pc != 0x2C4740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F0C8_0x27f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4740u; }
        if (ctx->pc != 0x2C4740u) { return; }
    }
    ctx->pc = 0x2C4740u;
label_2c4740:
    // 0x2c4740: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c4740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c4744: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c4744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4748: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c4748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c474c: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x2C474Cu;
    SET_GPR_U32(ctx, 31, 0x2C4754u);
    ctx->pc = 0x2C4750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C474Cu;
            // 0x2c4750: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (runtime->hasFunction(0x2818E8u)) {
        auto targetFn = runtime->lookupFunction(0x2818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4754u; }
        if (ctx->pc != 0x2C4754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002818E8_0x2818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4754u; }
        if (ctx->pc != 0x2C4754u) { return; }
    }
    ctx->pc = 0x2C4754u;
label_2c4754:
    // 0x2c4754: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C4754u;
    {
        const bool branch_taken_0x2c4754 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4754u;
            // 0x2c4758: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4754) {
            ctx->pc = 0x2C47A0u;
            goto label_2c47a0;
        }
    }
    ctx->pc = 0x2C475Cu;
    // 0x2c475c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c4760: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c4760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4764: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c4764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4768: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c4768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c476c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c476cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2c4770: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c4770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c4774: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x2C4774u;
    SET_GPR_U32(ctx, 31, 0x2C477Cu);
    ctx->pc = 0x2C4778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4774u;
            // 0x2c4778: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (runtime->hasFunction(0x281740u)) {
        auto targetFn = runtime->lookupFunction(0x281740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C477Cu; }
        if (ctx->pc != 0x2C477Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281740_0x281740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C477Cu; }
        if (ctx->pc != 0x2C477Cu) { return; }
    }
    ctx->pc = 0x2C477Cu;
label_2c477c:
    // 0x2c477c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c477cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4780: 0xc0b093c  jal         func_2C24F0
    ctx->pc = 0x2C4780u;
    SET_GPR_U32(ctx, 31, 0x2C4788u);
    ctx->pc = 0x2C4784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4780u;
            // 0x2c4784: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C24F0u;
    if (runtime->hasFunction(0x2C24F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4788u; }
        if (ctx->pc != 0x2C4788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C24F0_0x2c24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4788u; }
        if (ctx->pc != 0x2C4788u) { return; }
    }
    ctx->pc = 0x2C4788u;
label_2c4788:
    // 0x2c4788: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c4788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c478c: 0xc09fc32  jal         func_27F0C8
    ctx->pc = 0x2C478Cu;
    SET_GPR_U32(ctx, 31, 0x2C4794u);
    ctx->pc = 0x2C4790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C478Cu;
            // 0x2c4790: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C8u;
    if (runtime->hasFunction(0x27F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x27F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4794u; }
        if (ctx->pc != 0x2C4794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F0C8_0x27f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4794u; }
        if (ctx->pc != 0x2C4794u) { return; }
    }
    ctx->pc = 0x2C4794u;
label_2c4794:
    // 0x2c4794: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c4794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4798: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c4798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c479c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2c479cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2c47a0:
    // 0x2c47a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c47a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c47a4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2c47a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c47a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2c47a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c47ac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2c47acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c47b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c47b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c47b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C47B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C47B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C47B4u;
            // 0x2c47b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C47BCu;
    // 0x2c47bc: 0x0  nop
    ctx->pc = 0x2c47bcu;
    // NOP
    ctx->pc = 0x2c47c0u;
}
