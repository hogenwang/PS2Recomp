#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021C220
// Address: 0x21c220 - 0x21c310
void sub_0021C220_0x21c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C220_0x21c220");
#endif

    switch (ctx->pc) {
        case 0x21c240u: goto label_21c240;
        case 0x21c26cu: goto label_21c26c;
        case 0x21c284u: goto label_21c284;
        case 0x21c2a8u: goto label_21c2a8;
        case 0x21c2d4u: goto label_21c2d4;
        case 0x21c2e8u: goto label_21c2e8;
        default: break;
    }

    ctx->pc = 0x21c220u;

label_21c220:
    // 0x21c220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c224: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c22c: 0x24841710  addiu       $a0, $a0, 0x1710
    ctx->pc = 0x21c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5904));
    // 0x21c230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c234: 0x8043e52  j           func_10F948
    ctx->pc = 0x21C234u;
    ctx->pc = 0x21C238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C234u;
            // 0x21c238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21C23Cu;
    // 0x21c23c: 0x0  nop
    ctx->pc = 0x21c23cu;
    // NOP
label_21c240:
    // 0x21c240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c244: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21c244u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21c248: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21c248u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21c24c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c254: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c258: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x21c258u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c25c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21c25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21c260: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21c260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c264: 0xc084bc0  jal         func_212F00
    ctx->pc = 0x21C264u;
    SET_GPR_U32(ctx, 31, 0x21C26Cu);
    ctx->pc = 0x21C268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C264u;
            // 0x21c268: 0x8cd10000  lw          $s1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212F00u;
    if (runtime->hasFunction(0x212F00u)) {
        auto targetFn = runtime->lookupFunction(0x212F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C26Cu; }
        if (ctx->pc != 0x21C26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00212F00_0x212f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C26Cu; }
        if (ctx->pc != 0x21C26Cu) { return; }
    }
    ctx->pc = 0x21C26Cu;
label_21c26c:
    // 0x21c26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c270: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C270u;
    {
        const bool branch_taken_0x21c270 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21C274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C270u;
            // 0x21c274: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c270) {
            ctx->pc = 0x21C288u;
            goto label_21c288;
        }
    }
    ctx->pc = 0x21C278u;
    // 0x21c278: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x21c278u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21c27c: 0xc087088  jal         func_21C220
    ctx->pc = 0x21C27Cu;
    SET_GPR_U32(ctx, 31, 0x21C284u);
    ctx->pc = 0x21C280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C27Cu;
            // 0x21c280: 0x22f8823  subu        $s1, $s1, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C220u;
    goto label_21c220;
    ctx->pc = 0x21C284u;
label_21c284:
    // 0x21c284: 0x220782d  daddu       $t7, $s1, $zero
    ctx->pc = 0x21c284u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c288:
    // 0x21c288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c28c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x21c28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c290: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c294: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c298: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21c298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c29c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C29Cu;
            // 0x21c2a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C2A4u;
    // 0x21c2a4: 0x0  nop
    ctx->pc = 0x21c2a4u;
    // NOP
label_21c2a8:
    // 0x21c2a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c2ac: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x21c2acu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x21c2b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c2b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c2b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c2bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21c2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c2c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21c2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21c2c4: 0xadc0ab5c  sw          $zero, -0x54A4($t6)
    ctx->pc = 0x21c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294945628), GPR_U32(ctx, 0));
    // 0x21c2c8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x21c2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21c2cc: 0xc084c14  jal         func_213050
    ctx->pc = 0x21C2CCu;
    SET_GPR_U32(ctx, 31, 0x21C2D4u);
    ctx->pc = 0x21C2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C2CCu;
            // 0x21c2d0: 0x8cb20000  lw          $s2, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213050u;
    if (runtime->hasFunction(0x213050u)) {
        auto targetFn = runtime->lookupFunction(0x213050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C2D4u; }
        if (ctx->pc != 0x21C2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213050_0x213050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C2D4u; }
        if (ctx->pc != 0x21C2D4u) { return; }
    }
    ctx->pc = 0x21C2D4u;
label_21c2d4:
    // 0x21c2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c2d8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C2D8u;
    {
        const bool branch_taken_0x21c2d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21C2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C2D8u;
            // 0x21c2dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c2d8) {
            ctx->pc = 0x21C2F0u;
            goto label_21c2f0;
        }
    }
    ctx->pc = 0x21C2E0u;
    // 0x21c2e0: 0xc087088  jal         func_21C220
    ctx->pc = 0x21C2E0u;
    SET_GPR_U32(ctx, 31, 0x21C2E8u);
    ctx->pc = 0x21C220u;
    goto label_21c220;
    ctx->pc = 0x21C2E8u;
label_21c2e8:
    // 0x21c2e8: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21c2e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21c2ec: 0x1f22823  subu        $a1, $t7, $s2
    ctx->pc = 0x21c2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_21c2f0:
    // 0x21c2f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c2f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c2f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x21c2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c2f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c2f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c2fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c2fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c300: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21c300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c304: 0x3e00008  jr          $ra
    ctx->pc = 0x21C304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C304u;
            // 0x21c308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C30Cu;
    // 0x21c30c: 0x0  nop
    ctx->pc = 0x21c30cu;
    // NOP
    ctx->pc = 0x21c310u;
}
