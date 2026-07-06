#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BDD20
// Address: 0x2bdd20 - 0x2be4f8
void sub_002BDD20_0x2bdd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDD20_0x2bdd20");
#endif

    switch (ctx->pc) {
        case 0x2bdd68u: goto label_2bdd68;
        case 0x2bddb0u: goto label_2bddb0;
        case 0x2bde18u: goto label_2bde18;
        case 0x2bde28u: goto label_2bde28;
        case 0x2bde34u: goto label_2bde34;
        case 0x2bde4cu: goto label_2bde4c;
        case 0x2bde64u: goto label_2bde64;
        case 0x2bde7cu: goto label_2bde7c;
        case 0x2bde90u: goto label_2bde90;
        case 0x2bdeacu: goto label_2bdeac;
        case 0x2bdebcu: goto label_2bdebc;
        case 0x2bdec4u: goto label_2bdec4;
        case 0x2bdee4u: goto label_2bdee4;
        case 0x2bdeecu: goto label_2bdeec;
        case 0x2bdf18u: goto label_2bdf18;
        case 0x2bdf24u: goto label_2bdf24;
        case 0x2bdf30u: goto label_2bdf30;
        case 0x2bdf40u: goto label_2bdf40;
        case 0x2bdf4cu: goto label_2bdf4c;
        case 0x2bdf5cu: goto label_2bdf5c;
        case 0x2bdf60u: goto label_2bdf60;
        case 0x2bdf68u: goto label_2bdf68;
        case 0x2bdf78u: goto label_2bdf78;
        case 0x2bdf84u: goto label_2bdf84;
        case 0x2bdfa8u: goto label_2bdfa8;
        case 0x2bdfb8u: goto label_2bdfb8;
        case 0x2bdfccu: goto label_2bdfcc;
        case 0x2bdfe0u: goto label_2bdfe0;
        case 0x2bdff0u: goto label_2bdff0;
        case 0x2be004u: goto label_2be004;
        case 0x2be010u: goto label_2be010;
        case 0x2be020u: goto label_2be020;
        case 0x2be034u: goto label_2be034;
        case 0x2be048u: goto label_2be048;
        case 0x2be054u: goto label_2be054;
        case 0x2be068u: goto label_2be068;
        case 0x2be078u: goto label_2be078;
        case 0x2be08cu: goto label_2be08c;
        case 0x2be0acu: goto label_2be0ac;
        case 0x2be0c8u: goto label_2be0c8;
        case 0x2be0d8u: goto label_2be0d8;
        case 0x2be0e8u: goto label_2be0e8;
        case 0x2be0fcu: goto label_2be0fc;
        case 0x2be13cu: goto label_2be13c;
        case 0x2be1a8u: goto label_2be1a8;
        case 0x2be220u: goto label_2be220;
        case 0x2be23cu: goto label_2be23c;
        case 0x2be2b8u: goto label_2be2b8;
        case 0x2be2d4u: goto label_2be2d4;
        case 0x2be33cu: goto label_2be33c;
        case 0x2be344u: goto label_2be344;
        case 0x2be34cu: goto label_2be34c;
        case 0x2be354u: goto label_2be354;
        case 0x2be35cu: goto label_2be35c;
        case 0x2be3a0u: goto label_2be3a0;
        case 0x2be3e0u: goto label_2be3e0;
        case 0x2be420u: goto label_2be420;
        case 0x2be448u: goto label_2be448;
        case 0x2be490u: goto label_2be490;
        default: break;
    }

    ctx->pc = 0x2bdd20u;

    // 0x2bdd20: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2bdd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2bdd24: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x2bdd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2bdd28: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2bdd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2bdd2c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2bdd2cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdd30: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2bdd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2bdd34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bdd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdd38: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2bdd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2bdd3c: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x2bdd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2bdd40: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2bdd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2bdd44: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2bdd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2bdd48: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2bdd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2bdd4c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2bdd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2bdd50: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2bdd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2bdd54: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bdd54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2bdd58: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2bdd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2bdd5c: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x2bdd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x2bdd60: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x2BDD60u;
    SET_GPR_U32(ctx, 31, 0x2BDD68u);
    ctx->pc = 0x2BDD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDD60u;
            // 0x2bdd64: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDD68u; }
        if (ctx->pc != 0x2BDD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDD68u; }
        if (ctx->pc != 0x2BDD68u) { return; }
    }
    ctx->pc = 0x2BDD68u;
label_2bdd68:
    // 0x2bdd68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bdd68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdd6c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2bdd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2bdd70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDD70u;
    {
        const bool branch_taken_0x2bdd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDD70u;
            // 0x2bdd74: 0x24032721  addiu       $v1, $zero, 0x2721 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10017));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd70) {
            ctx->pc = 0x2BDD84u;
            goto label_2bdd84;
        }
    }
    ctx->pc = 0x2BDD78u;
    // 0x2bdd78: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDD78u;
    {
        const bool branch_taken_0x2bdd78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDD78u;
            // 0x2bdd7c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd78) {
            ctx->pc = 0x2BDD8Cu;
            goto label_2bdd8c;
        }
    }
    ctx->pc = 0x2BDD80u;
    // 0x2bdd80: 0x24032721  addiu       $v1, $zero, 0x2721
    ctx->pc = 0x2bdd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10017));
label_2bdd84:
    // 0x2bdd84: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x2BDD84u;
    {
        const bool branch_taken_0x2bdd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDD84u;
            // 0x2bdd88: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd84) {
            ctx->pc = 0x2BE4C4u;
            goto label_2be4c4;
        }
    }
    ctx->pc = 0x2BDD8Cu;
label_2bdd8c:
    // 0x2bdd8c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2bdd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2bdd90: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2bdd90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bdd94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDD94u;
    {
        const bool branch_taken_0x2bdd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDD94u;
            // 0x2bdd98: 0x26150008  addiu       $s5, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd94) {
            ctx->pc = 0x2BDDA8u;
            goto label_2bdda8;
        }
    }
    ctx->pc = 0x2BDD9Cu;
    // 0x2bdd9c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2bdd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bdda0: 0x14820170  bne         $a0, $v0, . + 4 + (0x170 << 2)
    ctx->pc = 0x2BDDA0u;
    {
        const bool branch_taken_0x2bdda0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BDDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDA0u;
            // 0x2bdda4: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdda0) {
            ctx->pc = 0x2BE364u;
            goto label_2be364;
        }
    }
    ctx->pc = 0x2BDDA8u;
label_2bdda8:
    // 0x2bdda8: 0xc0a1a8c  jal         func_286A30
    ctx->pc = 0x2BDDA8u;
    SET_GPR_U32(ctx, 31, 0x2BDDB0u);
    ctx->pc = 0x2BDDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDA8u;
            // 0x2bddac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A30u;
    if (runtime->hasFunction(0x286A30u)) {
        auto targetFn = runtime->lookupFunction(0x286A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDB0u; }
        if (ctx->pc != 0x2BDDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A30_0x286a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDDB0u; }
        if (ctx->pc != 0x2BDDB0u) { return; }
    }
    ctx->pc = 0x2BDDB0u;
label_2bddb0:
    // 0x2bddb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bddb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bddb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bddb8: 0x1240004f  beqz        $s2, . + 4 + (0x4F << 2)
    ctx->pc = 0x2BDDB8u;
    {
        const bool branch_taken_0x2bddb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDB8u;
            // 0x2bddbc: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bddb8) {
            ctx->pc = 0x2BDEF8u;
            goto label_2bdef8;
        }
    }
    ctx->pc = 0x2BDDC0u;
    // 0x2bddc0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2bddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bddc4: 0x4630012  bgezl       $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BDDC4u;
    {
        const bool branch_taken_0x2bddc4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2bddc4) {
            ctx->pc = 0x2BDDC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDC4u;
            // 0x2bddc8: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDE10u;
            goto label_2bde10;
        }
    }
    ctx->pc = 0x2BDDCCu;
    // 0x2bddcc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2bddccu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2bddd0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2bddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2bddd4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2bddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bddd8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2bddd8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2bdddc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2bdddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2bdde0: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2bdde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2bdde4: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2bdde4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bdde8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2bdde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2bddec: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2bddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bddf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bddf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDDF4u;
    {
        const bool branch_taken_0x2bddf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDDF4u;
            // 0x2bddf8: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bddf4) {
            ctx->pc = 0x2BDE08u;
            goto label_2bde08;
        }
    }
    ctx->pc = 0x2BDDFCu;
    // 0x2bddfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bde00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bde00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bde04: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bde04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2bde08:
    // 0x2bde08: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2bde08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bde0c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2bde0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2bde10:
    // 0x2bde10: 0xc0a1b6a  jal         func_286DA8
    ctx->pc = 0x2BDE10u;
    SET_GPR_U32(ctx, 31, 0x2BDE18u);
    ctx->pc = 0x2BDE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE10u;
            // 0x2bde14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286DA8u;
    if (runtime->hasFunction(0x286DA8u)) {
        auto targetFn = runtime->lookupFunction(0x286DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE18u; }
        if (ctx->pc != 0x2BDE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286DA8_0x286da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE18u; }
        if (ctx->pc != 0x2BDE18u) { return; }
    }
    ctx->pc = 0x2BDE18u;
label_2bde18:
    // 0x2bde18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bde18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bde1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde20: 0xc0a1cd2  jal         func_287348
    ctx->pc = 0x2BDE20u;
    SET_GPR_U32(ctx, 31, 0x2BDE28u);
    ctx->pc = 0x2BDE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE20u;
            // 0x2bde24: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287348u;
    if (runtime->hasFunction(0x287348u)) {
        auto targetFn = runtime->lookupFunction(0x287348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE28u; }
        if (ctx->pc != 0x2BDE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287348_0x287348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE28u; }
        if (ctx->pc != 0x2BDE28u) { return; }
    }
    ctx->pc = 0x2BDE28u;
label_2bde28:
    // 0x2bde28: 0x9ea50004  lwu         $a1, 0x4($s5)
    ctx->pc = 0x2bde28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2bde2c: 0xc0a212a  jal         func_2884A8
    ctx->pc = 0x2BDE2Cu;
    SET_GPR_U32(ctx, 31, 0x2BDE34u);
    ctx->pc = 0x2BDE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE2Cu;
            // 0x2bde30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2884A8u;
    if (runtime->hasFunction(0x2884A8u)) {
        auto targetFn = runtime->lookupFunction(0x2884A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE34u; }
        if (ctx->pc != 0x2BDE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002884A8_0x2884a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE34u; }
        if (ctx->pc != 0x2BDE34u) { return; }
    }
    ctx->pc = 0x2BDE34u;
label_2bde34:
    // 0x2bde34: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BDE34u;
    {
        const bool branch_taken_0x2bde34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE34u;
            // 0x2bde38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde34) {
            ctx->pc = 0x2BDE40u;
            goto label_2bde40;
        }
    }
    ctx->pc = 0x2BDE3Cu;
    // 0x2bde3c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2bde3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2bde40:
    // 0x2bde40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bde40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde44: 0xc0a20f2  jal         func_2883C8
    ctx->pc = 0x2BDE44u;
    SET_GPR_U32(ctx, 31, 0x2BDE4Cu);
    ctx->pc = 0x2BDE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE44u;
            // 0x2bde48: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2883C8u;
    if (runtime->hasFunction(0x2883C8u)) {
        auto targetFn = runtime->lookupFunction(0x2883C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE4Cu; }
        if (ctx->pc != 0x2BDE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002883C8_0x2883c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE4Cu; }
        if (ctx->pc != 0x2BDE4Cu) { return; }
    }
    ctx->pc = 0x2BDE4Cu;
label_2bde4c:
    // 0x2bde4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2bde4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2bde50: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2bde50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2bde54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bde54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde58: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2bde58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2bde5c: 0xc0a20f2  jal         func_2883C8
    ctx->pc = 0x2BDE5Cu;
    SET_GPR_U32(ctx, 31, 0x2BDE64u);
    ctx->pc = 0x2BDE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE5Cu;
            // 0x2bde60: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2883C8u;
    if (runtime->hasFunction(0x2883C8u)) {
        auto targetFn = runtime->lookupFunction(0x2883C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE64u; }
        if (ctx->pc != 0x2BDE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002883C8_0x2883c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE64u; }
        if (ctx->pc != 0x2BDE64u) { return; }
    }
    ctx->pc = 0x2BDE64u;
label_2bde64:
    // 0x2bde64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2bde64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2bde68: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2bde68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2bde6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bde6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde70: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2bde70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2bde74: 0xc0a20f2  jal         func_2883C8
    ctx->pc = 0x2BDE74u;
    SET_GPR_U32(ctx, 31, 0x2BDE7Cu);
    ctx->pc = 0x2BDE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE74u;
            // 0x2bde78: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2883C8u;
    if (runtime->hasFunction(0x2883C8u)) {
        auto targetFn = runtime->lookupFunction(0x2883C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE7Cu; }
        if (ctx->pc != 0x2BDE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002883C8_0x2883c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE7Cu; }
        if (ctx->pc != 0x2BDE7Cu) { return; }
    }
    ctx->pc = 0x2BDE7Cu;
label_2bde7c:
    // 0x2bde7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2bde7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2bde80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2bde80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2bde84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bde84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde88: 0xc0a1b0c  jal         func_286C30
    ctx->pc = 0x2BDE88u;
    SET_GPR_U32(ctx, 31, 0x2BDE90u);
    ctx->pc = 0x2BDE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE88u;
            // 0x2bde8c: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286C30u;
    if (runtime->hasFunction(0x286C30u)) {
        auto targetFn = runtime->lookupFunction(0x286C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE90u; }
        if (ctx->pc != 0x2BDE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286C30_0x286c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDE90u; }
        if (ctx->pc != 0x2BDE90u) { return; }
    }
    ctx->pc = 0x2BDE90u;
label_2bde90:
    // 0x2bde90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bde90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bde94: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDE94u;
    {
        const bool branch_taken_0x2bde94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE94u;
            // 0x2bde98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde94) {
            ctx->pc = 0x2BDEA4u;
            goto label_2bdea4;
        }
    }
    ctx->pc = 0x2BDE9Cu;
    // 0x2bde9c: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x2BDE9Cu;
    {
        const bool branch_taken_0x2bde9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE9Cu;
            // 0x2bdea0: 0x24022715  addiu       $v0, $zero, 0x2715 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10005));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde9c) {
            ctx->pc = 0x2BE4C0u;
            goto label_2be4c0;
        }
    }
    ctx->pc = 0x2BDEA4u;
label_2bdea4:
    // 0x2bdea4: 0xc0a21dc  jal         func_288770
    ctx->pc = 0x2BDEA4u;
    SET_GPR_U32(ctx, 31, 0x2BDEACu);
    ctx->pc = 0x2BDEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDEA4u;
            // 0x2bdea8: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288770u;
    if (runtime->hasFunction(0x288770u)) {
        auto targetFn = runtime->lookupFunction(0x288770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEACu; }
        if (ctx->pc != 0x2BDEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288770_0x288770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEACu; }
        if (ctx->pc != 0x2BDEACu) { return; }
    }
    ctx->pc = 0x2BDEACu;
label_2bdeac:
    // 0x2bdeac: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2bdeacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2bdeb0: 0x34a53ab1  ori         $a1, $a1, 0x3AB1
    ctx->pc = 0x2bdeb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15025);
    // 0x2bdeb4: 0xc0a20f2  jal         func_2883C8
    ctx->pc = 0x2BDEB4u;
    SET_GPR_U32(ctx, 31, 0x2BDEBCu);
    ctx->pc = 0x2BDEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDEB4u;
            // 0x2bdeb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2883C8u;
    if (runtime->hasFunction(0x2883C8u)) {
        auto targetFn = runtime->lookupFunction(0x2883C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEBCu; }
        if (ctx->pc != 0x2BDEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002883C8_0x2883c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEBCu; }
        if (ctx->pc != 0x2BDEBCu) { return; }
    }
    ctx->pc = 0x2BDEBCu;
label_2bdebc:
    // 0x2bdebc: 0xc0a1b0c  jal         func_286C30
    ctx->pc = 0x2BDEBCu;
    SET_GPR_U32(ctx, 31, 0x2BDEC4u);
    ctx->pc = 0x2BDEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDEBCu;
            // 0x2bdec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286C30u;
    if (runtime->hasFunction(0x286C30u)) {
        auto targetFn = runtime->lookupFunction(0x286C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEC4u; }
        if (ctx->pc != 0x2BDEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286C30_0x286c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEC4u; }
        if (ctx->pc != 0x2BDEC4u) { return; }
    }
    ctx->pc = 0x2BDEC4u;
label_2bdec4:
    // 0x2bdec4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bdec4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdec8: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDEC8u;
    {
        const bool branch_taken_0x2bdec8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDEC8u;
            // 0x2bdecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdec8) {
            ctx->pc = 0x2BDEDCu;
            goto label_2bdedc;
        }
    }
    ctx->pc = 0x2BDED0u;
    // 0x2bded0: 0x24032715  addiu       $v1, $zero, 0x2715
    ctx->pc = 0x2bded0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10005));
    // 0x2bded4: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x2BDED4u;
    {
        const bool branch_taken_0x2bded4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDED4u;
            // 0x2bded8: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bded4) {
            ctx->pc = 0x2BE4C4u;
            goto label_2be4c4;
        }
    }
    ctx->pc = 0x2BDEDCu;
label_2bdedc:
    // 0x2bdedc: 0xc0a212a  jal         func_2884A8
    ctx->pc = 0x2BDEDCu;
    SET_GPR_U32(ctx, 31, 0x2BDEE4u);
    ctx->pc = 0x2BDEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDEDCu;
            // 0x2bdee0: 0x240507b2  addiu       $a1, $zero, 0x7B2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1970));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2884A8u;
    if (runtime->hasFunction(0x2884A8u)) {
        auto targetFn = runtime->lookupFunction(0x2884A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEE4u; }
        if (ctx->pc != 0x2BDEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002884A8_0x2884a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEE4u; }
        if (ctx->pc != 0x2BDEE4u) { return; }
    }
    ctx->pc = 0x2BDEE4u;
label_2bdee4:
    // 0x2bdee4: 0xc0a1b0c  jal         func_286C30
    ctx->pc = 0x2BDEE4u;
    SET_GPR_U32(ctx, 31, 0x2BDEECu);
    ctx->pc = 0x2BDEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDEE4u;
            // 0x2bdee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286C30u;
    if (runtime->hasFunction(0x286C30u)) {
        auto targetFn = runtime->lookupFunction(0x286C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEECu; }
        if (ctx->pc != 0x2BDEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286C30_0x286c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDEECu; }
        if (ctx->pc != 0x2BDEECu) { return; }
    }
    ctx->pc = 0x2BDEECu;
label_2bdeec:
    // 0x2bdeec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2bdeecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdef0: 0x56c00004  bnel        $s6, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDEF0u;
    {
        const bool branch_taken_0x2bdef0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bdef0) {
            ctx->pc = 0x2BDEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDEF0u;
            // 0x2bdef4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDF04u;
            goto label_2bdf04;
        }
    }
    ctx->pc = 0x2BDEF8u;
label_2bdef8:
    // 0x2bdef8: 0x24042715  addiu       $a0, $zero, 0x2715
    ctx->pc = 0x2bdef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10005));
    // 0x2bdefc: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x2BDEFCu;
    {
        const bool branch_taken_0x2bdefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDEFCu;
            // 0x2bdf00: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdefc) {
            ctx->pc = 0x2BE4C4u;
            goto label_2be4c4;
        }
    }
    ctx->pc = 0x2BDF04u;
label_2bdf04:
    // 0x2bdf04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BDF04u;
    {
        const bool branch_taken_0x2bdf04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF04u;
            // 0x2bdf08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf04) {
            ctx->pc = 0x2BDF1Cu;
            goto label_2bdf1c;
        }
    }
    ctx->pc = 0x2BDF0Cu;
    // 0x2bdf0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bdf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf10: 0xc0a217e  jal         func_2885F8
    ctx->pc = 0x2BDF10u;
    SET_GPR_U32(ctx, 31, 0x2BDF18u);
    ctx->pc = 0x2BDF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF10u;
            // 0x2bdf14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2885F8u;
    if (runtime->hasFunction(0x2885F8u)) {
        auto targetFn = runtime->lookupFunction(0x2885F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF18u; }
        if (ctx->pc != 0x2BDF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002885F8_0x2885f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF18u; }
        if (ctx->pc != 0x2BDF18u) { return; }
    }
    ctx->pc = 0x2BDF18u;
label_2bdf18:
    // 0x2bdf18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bdf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bdf1c:
    // 0x2bdf1c: 0xc0a21dc  jal         func_288770
    ctx->pc = 0x2BDF1Cu;
    SET_GPR_U32(ctx, 31, 0x2BDF24u);
    ctx->pc = 0x2BDF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF1Cu;
            // 0x2bdf20: 0x2405016d  addiu       $a1, $zero, 0x16D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288770u;
    if (runtime->hasFunction(0x288770u)) {
        auto targetFn = runtime->lookupFunction(0x288770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF24u; }
        if (ctx->pc != 0x2BDF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288770_0x288770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF24u; }
        if (ctx->pc != 0x2BDF24u) { return; }
    }
    ctx->pc = 0x2BDF24u;
label_2bdf24:
    // 0x2bdf24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bdf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf28: 0xc0a20f2  jal         func_2883C8
    ctx->pc = 0x2BDF28u;
    SET_GPR_U32(ctx, 31, 0x2BDF30u);
    ctx->pc = 0x2BDF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF28u;
            // 0x2bdf2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2883C8u;
    if (runtime->hasFunction(0x2883C8u)) {
        auto targetFn = runtime->lookupFunction(0x2883C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF30u; }
        if (ctx->pc != 0x2BDF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002883C8_0x2883c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF30u; }
        if (ctx->pc != 0x2BDF30u) { return; }
    }
    ctx->pc = 0x2BDF30u;
label_2bdf30:
    // 0x2bdf30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bdf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf34: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bdf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf38: 0xc0a15fa  jal         func_2857E8
    ctx->pc = 0x2BDF38u;
    SET_GPR_U32(ctx, 31, 0x2BDF40u);
    ctx->pc = 0x2BDF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF38u;
            // 0x2bdf3c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2857E8u;
    if (runtime->hasFunction(0x2857E8u)) {
        auto targetFn = runtime->lookupFunction(0x2857E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF40u; }
        if (ctx->pc != 0x2BDF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002857E8_0x2857e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF40u; }
        if (ctx->pc != 0x2BDF40u) { return; }
    }
    ctx->pc = 0x2BDF40u;
label_2bdf40:
    // 0x2bdf40: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bdf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf44: 0xc0a20f2  jal         func_2883C8
    ctx->pc = 0x2BDF44u;
    SET_GPR_U32(ctx, 31, 0x2BDF4Cu);
    ctx->pc = 0x2BDF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF44u;
            // 0x2bdf48: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2883C8u;
    if (runtime->hasFunction(0x2883C8u)) {
        auto targetFn = runtime->lookupFunction(0x2883C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF4Cu; }
        if (ctx->pc != 0x2BDF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002883C8_0x2883c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF4Cu; }
        if (ctx->pc != 0x2BDF4Cu) { return; }
    }
    ctx->pc = 0x2BDF4Cu;
label_2bdf4c:
    // 0x2bdf4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bdf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bdf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf54: 0xc0a16fa  jal         func_285BE8
    ctx->pc = 0x2BDF54u;
    SET_GPR_U32(ctx, 31, 0x2BDF5Cu);
    ctx->pc = 0x2BDF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF54u;
            // 0x2bdf58: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285BE8u;
    if (runtime->hasFunction(0x285BE8u)) {
        auto targetFn = runtime->lookupFunction(0x285BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF5Cu; }
        if (ctx->pc != 0x2BDF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285BE8_0x285be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF5Cu; }
        if (ctx->pc != 0x2BDF5Cu) { return; }
    }
    ctx->pc = 0x2BDF5Cu;
label_2bdf5c:
    // 0x2bdf5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bdf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2bdf60:
    // 0x2bdf60: 0xc0a20f2  jal         func_2883C8
    ctx->pc = 0x2BDF60u;
    SET_GPR_U32(ctx, 31, 0x2BDF68u);
    ctx->pc = 0x2BDF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF60u;
            // 0x2bdf64: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2883C8u;
    if (runtime->hasFunction(0x2883C8u)) {
        auto targetFn = runtime->lookupFunction(0x2883C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF68u; }
        if (ctx->pc != 0x2BDF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002883C8_0x2883c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF68u; }
        if (ctx->pc != 0x2BDF68u) { return; }
    }
    ctx->pc = 0x2BDF68u;
label_2bdf68:
    // 0x2bdf68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bdf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bdf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf70: 0xc0a15fa  jal         func_2857E8
    ctx->pc = 0x2BDF70u;
    SET_GPR_U32(ctx, 31, 0x2BDF78u);
    ctx->pc = 0x2BDF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF70u;
            // 0x2bdf74: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2857E8u;
    if (runtime->hasFunction(0x2857E8u)) {
        auto targetFn = runtime->lookupFunction(0x2857E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF78u; }
        if (ctx->pc != 0x2BDF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002857E8_0x2857e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF78u; }
        if (ctx->pc != 0x2BDF78u) { return; }
    }
    ctx->pc = 0x2BDF78u;
label_2bdf78:
    // 0x2bdf78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bdf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf7c: 0xc0a217e  jal         func_2885F8
    ctx->pc = 0x2BDF7Cu;
    SET_GPR_U32(ctx, 31, 0x2BDF84u);
    ctx->pc = 0x2BDF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF7Cu;
            // 0x2bdf80: 0x240501dd  addiu       $a1, $zero, 0x1DD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2885F8u;
    if (runtime->hasFunction(0x2885F8u)) {
        auto targetFn = runtime->lookupFunction(0x2885F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF84u; }
        if (ctx->pc != 0x2BDF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002885F8_0x2885f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDF84u; }
        if (ctx->pc != 0x2BDF84u) { return; }
    }
    ctx->pc = 0x2BDF84u;
label_2bdf84:
    // 0x2bdf84: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2bdf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2bdf88: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BDF88u;
    {
        const bool branch_taken_0x2bdf88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF88u;
            // 0x2bdf8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf88) {
            ctx->pc = 0x2BDFE4u;
            goto label_2bdfe4;
        }
    }
    ctx->pc = 0x2BDF90u;
    // 0x2bdf90: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2bdf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2bdf94: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BDF94u;
    {
        const bool branch_taken_0x2bdf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDF94u;
            // 0x2bdf98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf94) {
            ctx->pc = 0x2BDFE8u;
            goto label_2bdfe8;
        }
    }
    ctx->pc = 0x2BDF9Cu;
    // 0x2bdf9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdfa0: 0xc0a20c8  jal         func_288320
    ctx->pc = 0x2BDFA0u;
    SET_GPR_U32(ctx, 31, 0x2BDFA8u);
    ctx->pc = 0x2BDFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFA0u;
            // 0x2bdfa4: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288320u;
    if (runtime->hasFunction(0x288320u)) {
        auto targetFn = runtime->lookupFunction(0x288320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFA8u; }
        if (ctx->pc != 0x2BDFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288320_0x288320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFA8u; }
        if (ctx->pc != 0x2BDFA8u) { return; }
    }
    ctx->pc = 0x2BDFA8u;
label_2bdfa8:
    // 0x2bdfa8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BDFA8u;
    {
        const bool branch_taken_0x2bdfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFA8u;
            // 0x2bdfac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdfa8) {
            ctx->pc = 0x2BDFE0u;
            goto label_2bdfe0;
        }
    }
    ctx->pc = 0x2BDFB0u;
    // 0x2bdfb0: 0xc0a20c8  jal         func_288320
    ctx->pc = 0x2BDFB0u;
    SET_GPR_U32(ctx, 31, 0x2BDFB8u);
    ctx->pc = 0x2BDFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFB0u;
            // 0x2bdfb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288320u;
    if (runtime->hasFunction(0x288320u)) {
        auto targetFn = runtime->lookupFunction(0x288320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFB8u; }
        if (ctx->pc != 0x2BDFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288320_0x288320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFB8u; }
        if (ctx->pc != 0x2BDFB8u) { return; }
    }
    ctx->pc = 0x2BDFB8u;
label_2bdfb8:
    // 0x2bdfb8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDFB8u;
    {
        const bool branch_taken_0x2bdfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFB8u;
            // 0x2bdfbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdfb8) {
            ctx->pc = 0x2BDFD8u;
            goto label_2bdfd8;
        }
    }
    ctx->pc = 0x2BDFC0u;
    // 0x2bdfc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdfc4: 0xc0a20c8  jal         func_288320
    ctx->pc = 0x2BDFC4u;
    SET_GPR_U32(ctx, 31, 0x2BDFCCu);
    ctx->pc = 0x2BDFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFC4u;
            // 0x2bdfc8: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288320u;
    if (runtime->hasFunction(0x288320u)) {
        auto targetFn = runtime->lookupFunction(0x288320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFCCu; }
        if (ctx->pc != 0x2BDFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288320_0x288320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFCCu; }
        if (ctx->pc != 0x2BDFCCu) { return; }
    }
    ctx->pc = 0x2BDFCCu;
label_2bdfcc:
    // 0x2bdfcc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BDFCCu;
    {
        const bool branch_taken_0x2bdfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BDFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFCCu;
            // 0x2bdfd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdfcc) {
            ctx->pc = 0x2BDFE4u;
            goto label_2bdfe4;
        }
    }
    ctx->pc = 0x2BDFD4u;
    // 0x2bdfd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bdfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bdfd8:
    // 0x2bdfd8: 0xc0a212a  jal         func_2884A8
    ctx->pc = 0x2BDFD8u;
    SET_GPR_U32(ctx, 31, 0x2BDFE0u);
    ctx->pc = 0x2BDFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFD8u;
            // 0x2bdfdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2884A8u;
    if (runtime->hasFunction(0x2884A8u)) {
        auto targetFn = runtime->lookupFunction(0x2884A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFE0u; }
        if (ctx->pc != 0x2BDFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002884A8_0x2884a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFE0u; }
        if (ctx->pc != 0x2BDFE0u) { return; }
    }
    ctx->pc = 0x2BDFE0u;
label_2bdfe0:
    // 0x2bdfe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bdfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bdfe4:
    // 0x2bdfe4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bdfe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bdfe8:
    // 0x2bdfe8: 0xc0a16fa  jal         func_285BE8
    ctx->pc = 0x2BDFE8u;
    SET_GPR_U32(ctx, 31, 0x2BDFF0u);
    ctx->pc = 0x2BDFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFE8u;
            // 0x2bdfec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285BE8u;
    if (runtime->hasFunction(0x285BE8u)) {
        auto targetFn = runtime->lookupFunction(0x285BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFF0u; }
        if (ctx->pc != 0x2BDFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285BE8_0x285be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDFF0u; }
        if (ctx->pc != 0x2BDFF0u) { return; }
    }
    ctx->pc = 0x2BDFF0u;
label_2bdff0:
    // 0x2bdff0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2bdff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2bdff4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BDFF4u;
    {
        const bool branch_taken_0x2bdff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFF4u;
            // 0x2bdff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdff4) {
            ctx->pc = 0x2BE048u;
            goto label_2be048;
        }
    }
    ctx->pc = 0x2BDFFCu;
    // 0x2bdffc: 0xc0a217e  jal         func_2885F8
    ctx->pc = 0x2BDFFCu;
    SET_GPR_U32(ctx, 31, 0x2BE004u);
    ctx->pc = 0x2BE000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDFFCu;
            // 0x2be000: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2885F8u;
    if (runtime->hasFunction(0x2885F8u)) {
        auto targetFn = runtime->lookupFunction(0x2885F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE004u; }
        if (ctx->pc != 0x2BE004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002885F8_0x2885f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE004u; }
        if (ctx->pc != 0x2BE004u) { return; }
    }
    ctx->pc = 0x2BE004u;
label_2be004:
    // 0x2be004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be008: 0xc0a20c8  jal         func_288320
    ctx->pc = 0x2BE008u;
    SET_GPR_U32(ctx, 31, 0x2BE010u);
    ctx->pc = 0x2BE00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE008u;
            // 0x2be00c: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288320u;
    if (runtime->hasFunction(0x288320u)) {
        auto targetFn = runtime->lookupFunction(0x288320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE010u; }
        if (ctx->pc != 0x2BE010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288320_0x288320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE010u; }
        if (ctx->pc != 0x2BE010u) { return; }
    }
    ctx->pc = 0x2BE010u;
label_2be010:
    // 0x2be010: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BE010u;
    {
        const bool branch_taken_0x2be010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE010u;
            // 0x2be014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be010) {
            ctx->pc = 0x2BE03Cu;
            goto label_2be03c;
        }
    }
    ctx->pc = 0x2BE018u;
    // 0x2be018: 0xc0a20c8  jal         func_288320
    ctx->pc = 0x2BE018u;
    SET_GPR_U32(ctx, 31, 0x2BE020u);
    ctx->pc = 0x2BE01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE018u;
            // 0x2be01c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288320u;
    if (runtime->hasFunction(0x288320u)) {
        auto targetFn = runtime->lookupFunction(0x288320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE020u; }
        if (ctx->pc != 0x2BE020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288320_0x288320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE020u; }
        if (ctx->pc != 0x2BE020u) { return; }
    }
    ctx->pc = 0x2BE020u;
label_2be020:
    // 0x2be020: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE020u;
    {
        const bool branch_taken_0x2be020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE020u;
            // 0x2be024: 0x2405016d  addiu       $a1, $zero, 0x16D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be020) {
            ctx->pc = 0x2BE040u;
            goto label_2be040;
        }
    }
    ctx->pc = 0x2BE028u;
    // 0x2be028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be02c: 0xc0a20c8  jal         func_288320
    ctx->pc = 0x2BE02Cu;
    SET_GPR_U32(ctx, 31, 0x2BE034u);
    ctx->pc = 0x2BE030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE02Cu;
            // 0x2be030: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288320u;
    if (runtime->hasFunction(0x288320u)) {
        auto targetFn = runtime->lookupFunction(0x288320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE034u; }
        if (ctx->pc != 0x2BE034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288320_0x288320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE034u; }
        if (ctx->pc != 0x2BE034u) { return; }
    }
    ctx->pc = 0x2BE034u;
label_2be034:
    // 0x2be034: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BE034u;
    {
        const bool branch_taken_0x2be034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be034) {
            ctx->pc = 0x2BE038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE034u;
            // 0x2be038: 0x2405016d  addiu       $a1, $zero, 0x16D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE040u;
            goto label_2be040;
        }
    }
    ctx->pc = 0x2BE03Cu;
label_2be03c:
    // 0x2be03c: 0x2405016e  addiu       $a1, $zero, 0x16E
    ctx->pc = 0x2be03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
label_2be040:
    // 0x2be040: 0xc0a212a  jal         func_2884A8
    ctx->pc = 0x2BE040u;
    SET_GPR_U32(ctx, 31, 0x2BE048u);
    ctx->pc = 0x2BE044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE040u;
            // 0x2be044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2884A8u;
    if (runtime->hasFunction(0x2884A8u)) {
        auto targetFn = runtime->lookupFunction(0x2884A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE048u; }
        if (ctx->pc != 0x2BE048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002884A8_0x2884a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE048u; }
        if (ctx->pc != 0x2BE048u) { return; }
    }
    ctx->pc = 0x2BE048u;
label_2be048:
    // 0x2be048: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2be048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be04c: 0xc0a1b46  jal         func_286D18
    ctx->pc = 0x2BE04Cu;
    SET_GPR_U32(ctx, 31, 0x2BE054u);
    ctx->pc = 0x2BE050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE04Cu;
            // 0x2be050: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286D18u;
    if (runtime->hasFunction(0x286D18u)) {
        auto targetFn = runtime->lookupFunction(0x286D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE054u; }
        if (ctx->pc != 0x2BE054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286D18_0x286d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE054u; }
        if (ctx->pc != 0x2BE054u) { return; }
    }
    ctx->pc = 0x2BE054u;
label_2be054:
    // 0x2be054: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2be054u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2be058: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2be058u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2be05c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be060: 0xc0a20c8  jal         func_288320
    ctx->pc = 0x2BE060u;
    SET_GPR_U32(ctx, 31, 0x2BE068u);
    ctx->pc = 0x2BE064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE060u;
            // 0x2be064: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288320u;
    if (runtime->hasFunction(0x288320u)) {
        auto targetFn = runtime->lookupFunction(0x288320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE068u; }
        if (ctx->pc != 0x2BE068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288320_0x288320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE068u; }
        if (ctx->pc != 0x2BE068u) { return; }
    }
    ctx->pc = 0x2BE068u;
label_2be068:
    // 0x2be068: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BE068u;
    {
        const bool branch_taken_0x2be068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE068u;
            // 0x2be06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be068) {
            ctx->pc = 0x2BE094u;
            goto label_2be094;
        }
    }
    ctx->pc = 0x2BE070u;
    // 0x2be070: 0xc0a20c8  jal         func_288320
    ctx->pc = 0x2BE070u;
    SET_GPR_U32(ctx, 31, 0x2BE078u);
    ctx->pc = 0x2BE074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE070u;
            // 0x2be074: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288320u;
    if (runtime->hasFunction(0x288320u)) {
        auto targetFn = runtime->lookupFunction(0x288320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE078u; }
        if (ctx->pc != 0x2BE078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288320_0x288320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE078u; }
        if (ctx->pc != 0x2BE078u) { return; }
    }
    ctx->pc = 0x2BE078u;
label_2be078:
    // 0x2be078: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BE078u;
    {
        const bool branch_taken_0x2be078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE078u;
            // 0x2be07c: 0x2a02016d  slti        $v0, $s0, 0x16D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)365) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be078) {
            ctx->pc = 0x2BE0B4u;
            goto label_2be0b4;
        }
    }
    ctx->pc = 0x2BE080u;
    // 0x2be080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be084: 0xc0a20c8  jal         func_288320
    ctx->pc = 0x2BE084u;
    SET_GPR_U32(ctx, 31, 0x2BE08Cu);
    ctx->pc = 0x2BE088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE084u;
            // 0x2be088: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288320u;
    if (runtime->hasFunction(0x288320u)) {
        auto targetFn = runtime->lookupFunction(0x288320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE08Cu; }
        if (ctx->pc != 0x2BE08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288320_0x288320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE08Cu; }
        if (ctx->pc != 0x2BE08Cu) { return; }
    }
    ctx->pc = 0x2BE08Cu;
label_2be08c:
    // 0x2be08c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BE08Cu;
    {
        const bool branch_taken_0x2be08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE08Cu;
            // 0x2be090: 0x2a02016d  slti        $v0, $s0, 0x16D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)365) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be08c) {
            ctx->pc = 0x2BE0B4u;
            goto label_2be0b4;
        }
    }
    ctx->pc = 0x2BE094u;
label_2be094:
    // 0x2be094: 0x2a02016e  slti        $v0, $s0, 0x16E
    ctx->pc = 0x2be094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)366) ? 1 : 0);
    // 0x2be098: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2BE098u;
    {
        const bool branch_taken_0x2be098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be098) {
            ctx->pc = 0x2BE09Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE098u;
            // 0x2be09c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE108u;
            goto label_2be108;
        }
    }
    ctx->pc = 0x2BE0A0u;
    // 0x2be0a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0a4: 0xc0a212a  jal         func_2884A8
    ctx->pc = 0x2BE0A4u;
    SET_GPR_U32(ctx, 31, 0x2BE0ACu);
    ctx->pc = 0x2BE0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE0A4u;
            // 0x2be0a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2884A8u;
    if (runtime->hasFunction(0x2884A8u)) {
        auto targetFn = runtime->lookupFunction(0x2884A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE0ACu; }
        if (ctx->pc != 0x2BE0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002884A8_0x2884a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE0ACu; }
        if (ctx->pc != 0x2BE0ACu) { return; }
    }
    ctx->pc = 0x2BE0ACu;
label_2be0ac:
    // 0x2be0ac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2BE0ACu;
    {
        const bool branch_taken_0x2be0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE0ACu;
            // 0x2be0b0: 0x2610fe92  addiu       $s0, $s0, -0x16E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966930));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0ac) {
            ctx->pc = 0x2BE108u;
            goto label_2be108;
        }
    }
    ctx->pc = 0x2BE0B4u;
label_2be0b4:
    // 0x2be0b4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BE0B4u;
    {
        const bool branch_taken_0x2be0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE0B4u;
            // 0x2be0b8: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0b4) {
            ctx->pc = 0x2BE10Cu;
            goto label_2be10c;
        }
    }
    ctx->pc = 0x2BE0BCu;
    // 0x2be0bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0c0: 0xc0a212a  jal         func_2884A8
    ctx->pc = 0x2BE0C0u;
    SET_GPR_U32(ctx, 31, 0x2BE0C8u);
    ctx->pc = 0x2BE0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE0C0u;
            // 0x2be0c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2884A8u;
    if (runtime->hasFunction(0x2884A8u)) {
        auto targetFn = runtime->lookupFunction(0x2884A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE0C8u; }
        if (ctx->pc != 0x2BE0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002884A8_0x2884a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE0C8u; }
        if (ctx->pc != 0x2BE0C8u) { return; }
    }
    ctx->pc = 0x2BE0C8u;
label_2be0c8:
    // 0x2be0c8: 0x2610fe93  addiu       $s0, $s0, -0x16D
    ctx->pc = 0x2be0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966931));
    // 0x2be0cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0d0: 0xc0a20c8  jal         func_288320
    ctx->pc = 0x2BE0D0u;
    SET_GPR_U32(ctx, 31, 0x2BE0D8u);
    ctx->pc = 0x2BE0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE0D0u;
            // 0x2be0d4: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288320u;
    if (runtime->hasFunction(0x288320u)) {
        auto targetFn = runtime->lookupFunction(0x288320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE0D8u; }
        if (ctx->pc != 0x2BE0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288320_0x288320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE0D8u; }
        if (ctx->pc != 0x2BE0D8u) { return; }
    }
    ctx->pc = 0x2BE0D8u;
label_2be0d8:
    // 0x2be0d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BE0D8u;
    {
        const bool branch_taken_0x2be0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE0D8u;
            // 0x2be0dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0d8) {
            ctx->pc = 0x2BE104u;
            goto label_2be104;
        }
    }
    ctx->pc = 0x2BE0E0u;
    // 0x2be0e0: 0xc0a20c8  jal         func_288320
    ctx->pc = 0x2BE0E0u;
    SET_GPR_U32(ctx, 31, 0x2BE0E8u);
    ctx->pc = 0x2BE0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE0E0u;
            // 0x2be0e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288320u;
    if (runtime->hasFunction(0x288320u)) {
        auto targetFn = runtime->lookupFunction(0x288320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE0E8u; }
        if (ctx->pc != 0x2BE0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288320_0x288320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE0E8u; }
        if (ctx->pc != 0x2BE0E8u) { return; }
    }
    ctx->pc = 0x2BE0E8u;
label_2be0e8:
    // 0x2be0e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE0E8u;
    {
        const bool branch_taken_0x2be0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE0E8u;
            // 0x2be0ec: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0e8) {
            ctx->pc = 0x2BE10Cu;
            goto label_2be10c;
        }
    }
    ctx->pc = 0x2BE0F0u;
    // 0x2be0f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0f4: 0xc0a20c8  jal         func_288320
    ctx->pc = 0x2BE0F4u;
    SET_GPR_U32(ctx, 31, 0x2BE0FCu);
    ctx->pc = 0x2BE0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE0F4u;
            // 0x2be0f8: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288320u;
    if (runtime->hasFunction(0x288320u)) {
        auto targetFn = runtime->lookupFunction(0x288320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE0FCu; }
        if (ctx->pc != 0x2BE0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288320_0x288320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE0FCu; }
        if (ctx->pc != 0x2BE0FCu) { return; }
    }
    ctx->pc = 0x2BE0FCu;
label_2be0fc:
    // 0x2be0fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE0FCu;
    {
        const bool branch_taken_0x2be0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE0FCu;
            // 0x2be100: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0fc) {
            ctx->pc = 0x2BE10Cu;
            goto label_2be10c;
        }
    }
    ctx->pc = 0x2BE104u;
label_2be104:
    // 0x2be104: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2be104u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2be108:
    // 0x2be108: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2be108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2be10c:
    // 0x2be10c: 0x266501c8  addiu       $a1, $s3, 0x1C8
    ctx->pc = 0x2be10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 456));
    // 0x2be110: 0x2e22018  mult        $a0, $s7, $v0
    ctx->pc = 0x2be110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2be114: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2be114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be118: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2be118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2be11c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2be11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2be120: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2be120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2be124: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE124u;
    {
        const bool branch_taken_0x2be124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE124u;
            // 0x2be128: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be124) {
            ctx->pc = 0x2BE138u;
            goto label_2be138;
        }
    }
    ctx->pc = 0x2BE12Cu;
    // 0x2be12c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BE12Cu;
    {
        const bool branch_taken_0x2be12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE12Cu;
            // 0x2be130: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be12c) {
            ctx->pc = 0x2BE178u;
            goto label_2be178;
        }
    }
    ctx->pc = 0x2BE134u;
    // 0x2be134: 0x0  nop
    ctx->pc = 0x2be134u;
    // NOP
label_2be138:
    // 0x2be138: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2be138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2be13c:
    // 0x2be13c: 0x2a62000d  slti        $v0, $s3, 0xD
    ctx->pc = 0x2be13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2be140: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BE140u;
    {
        const bool branch_taken_0x2be140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE140u;
            // 0x2be144: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be140) {
            ctx->pc = 0x2BE184u;
            goto label_2be184;
        }
    }
    ctx->pc = 0x2BE148u;
    // 0x2be148: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2be148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2be14c: 0x2e22018  mult        $a0, $s7, $v0
    ctx->pc = 0x2be14cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2be150: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2be150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2be154: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2be154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2be158: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2be158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2be15c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2be15cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2be160: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BE160u;
    {
        const bool branch_taken_0x2be160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be160) {
            ctx->pc = 0x2BE164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE160u;
            // 0x2be164: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE13Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2be13c;
        }
    }
    ctx->pc = 0x2BE168u;
    // 0x2be168: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x2be168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2be16c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be170: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2be170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2be174: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2be174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2be178:
    // 0x2be178: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2be178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be17c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x2be17cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2be180: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x2be180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_2be184:
    // 0x2be184: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2be184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be188: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2be188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be18c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2be18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2be190: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2be190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2be194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2be194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be198: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2BE198u;
    {
        const bool branch_taken_0x2be198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BE19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE198u;
            // 0x2be19c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be198) {
            ctx->pc = 0x2BE228u;
            goto label_2be228;
        }
    }
    ctx->pc = 0x2BE1A0u;
    // 0x2be1a0: 0xc0a1b46  jal         func_286D18
    ctx->pc = 0x2BE1A0u;
    SET_GPR_U32(ctx, 31, 0x2BE1A8u);
    ctx->pc = 0x2BE1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE1A0u;
            // 0x2be1a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286D18u;
    if (runtime->hasFunction(0x286D18u)) {
        auto targetFn = runtime->lookupFunction(0x286D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE1A8u; }
        if (ctx->pc != 0x2BE1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286D18_0x286d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE1A8u; }
        if (ctx->pc != 0x2BE1A8u) { return; }
    }
    ctx->pc = 0x2BE1A8u;
label_2be1a8:
    // 0x2be1a8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2be1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2be1ac: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2be1acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2be1b0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2be1b0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2be1b4: 0x54600050  bnel        $v1, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x2BE1B4u;
    {
        const bool branch_taken_0x2be1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be1b4) {
            ctx->pc = 0x2BE1B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE1B4u;
            // 0x2be1b8: 0x24042723  addiu       $a0, $zero, 0x2723 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10019));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE2F8u;
            goto label_2be2f8;
        }
    }
    ctx->pc = 0x2BE1BCu;
    // 0x2be1bc: 0x28c20802  slti        $v0, $a2, 0x802
    ctx->pc = 0x2be1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2050) ? 1 : 0);
    // 0x2be1c0: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2BE1C0u;
    {
        const bool branch_taken_0x2be1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE1C0u;
            // 0x2be1c4: 0x28c2079e  slti        $v0, $a2, 0x79E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1950) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1c0) {
            ctx->pc = 0x2BE2F4u;
            goto label_2be2f4;
        }
    }
    ctx->pc = 0x2BE1C8u;
    // 0x2be1c8: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2BE1C8u;
    {
        const bool branch_taken_0x2be1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE1C8u;
            // 0x2be1cc: 0x24042723  addiu       $a0, $zero, 0x2723 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10019));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1c8) {
            ctx->pc = 0x2BE2F8u;
            goto label_2be2f8;
        }
    }
    ctx->pc = 0x2BE1D0u;
    // 0x2be1d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2be1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2be1d4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2be1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2be1d8: 0x2bc3000e  slti        $v1, $fp, 0xE
    ctx->pc = 0x2be1d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2be1dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2be1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2be1e0: 0x146000b7  bnez        $v1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2BE1E0u;
    {
        const bool branch_taken_0x2be1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE1E0u;
            // 0x2be1e4: 0x24022720  addiu       $v0, $zero, 0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1e0) {
            ctx->pc = 0x2BE4C0u;
            goto label_2be4c0;
        }
    }
    ctx->pc = 0x2BE1E8u;
    // 0x2be1e8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2be1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2be1ec: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2be1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2be1f0: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x2be1f0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2be1f4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BE1F4u;
    {
        const bool branch_taken_0x2be1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be1f4) {
            ctx->pc = 0x2BE1F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE1F4u;
            // 0x2be1f8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE1FCu;
            goto label_2be1fc;
        }
    }
    ctx->pc = 0x2BE1FCu;
label_2be1fc:
    // 0x2be1fc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2be1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2be200: 0x24a5eb60  addiu       $a1, $a1, -0x14A0
    ctx->pc = 0x2be200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962016));
    // 0x2be204: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x2be204u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be208: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2be208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be20c: 0x8fa90034  lw          $t1, 0x34($sp)
    ctx->pc = 0x2be20cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2be210: 0x8faa0038  lw          $t2, 0x38($sp)
    ctx->pc = 0x2be210u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2be214: 0x3010  mfhi        $a2
    ctx->pc = 0x2be214u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2be218: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2BE218u;
    SET_GPR_U32(ctx, 31, 0x2BE220u);
    ctx->pc = 0x2BE21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE218u;
            // 0x2be21c: 0x8fab003c  lw          $t3, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE220u; }
        if (ctx->pc != 0x2BE220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE220u; }
        if (ctx->pc != 0x2BE220u) { return; }
    }
    ctx->pc = 0x2BE220u;
label_2be220:
    // 0x2be220: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2BE220u;
    {
        const bool branch_taken_0x2be220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be220) {
            ctx->pc = 0x2BE33Cu;
            goto label_2be33c;
        }
    }
    ctx->pc = 0x2BE228u;
label_2be228:
    // 0x2be228: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2be228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2be22c: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2BE22Cu;
    {
        const bool branch_taken_0x2be22c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BE230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE22Cu;
            // 0x2be230: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be22c) {
            ctx->pc = 0x2BE2C0u;
            goto label_2be2c0;
        }
    }
    ctx->pc = 0x2BE234u;
    // 0x2be234: 0xc0a1b46  jal         func_286D18
    ctx->pc = 0x2BE234u;
    SET_GPR_U32(ctx, 31, 0x2BE23Cu);
    ctx->pc = 0x2BE238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE234u;
            // 0x2be238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286D18u;
    if (runtime->hasFunction(0x286D18u)) {
        auto targetFn = runtime->lookupFunction(0x286D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE23Cu; }
        if (ctx->pc != 0x2BE23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286D18_0x286d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE23Cu; }
        if (ctx->pc != 0x2BE23Cu) { return; }
    }
    ctx->pc = 0x2BE23Cu;
label_2be23c:
    // 0x2be23c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2be23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2be240: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2be240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2be244: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2be244u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2be248: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2BE248u;
    {
        const bool branch_taken_0x2be248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE248u;
            // 0x2be24c: 0x24042723  addiu       $a0, $zero, 0x2723 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10019));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be248) {
            ctx->pc = 0x2BE2F8u;
            goto label_2be2f8;
        }
    }
    ctx->pc = 0x2BE250u;
    // 0x2be250: 0x28c22710  slti        $v0, $a2, 0x2710
    ctx->pc = 0x2be250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x2be254: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BE254u;
    {
        const bool branch_taken_0x2be254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE254u;
            // 0x2be258: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be254) {
            ctx->pc = 0x2BE2F4u;
            goto label_2be2f4;
        }
    }
    ctx->pc = 0x2BE25Cu;
    // 0x2be25c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2be25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2be260: 0x2bc30011  slti        $v1, $fp, 0x11
    ctx->pc = 0x2be260u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2be264: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE264u;
    {
        const bool branch_taken_0x2be264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE264u;
            // 0x2be268: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be264) {
            ctx->pc = 0x2BE274u;
            goto label_2be274;
        }
    }
    ctx->pc = 0x2BE26Cu;
    // 0x2be26c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x2BE26Cu;
    {
        const bool branch_taken_0x2be26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE26Cu;
            // 0x2be270: 0x24022720  addiu       $v0, $zero, 0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be26c) {
            ctx->pc = 0x2BE4C0u;
            goto label_2be4c0;
        }
    }
    ctx->pc = 0x2BE274u;
label_2be274:
    // 0x2be274: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2be274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2be278: 0x3c0205f5  lui         $v0, 0x5F5
    ctx->pc = 0x2be278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1525 << 16));
    // 0x2be27c: 0x3442e100  ori         $v0, $v0, 0xE100
    ctx->pc = 0x2be27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57600);
    // 0x2be280: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2be280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2be284: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2be284u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2be288: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BE288u;
    {
        const bool branch_taken_0x2be288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be288) {
            ctx->pc = 0x2BE28Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE288u;
            // 0x2be28c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE290u;
            goto label_2be290;
        }
    }
    ctx->pc = 0x2BE290u;
label_2be290:
    // 0x2be290: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2be290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2be294: 0x24a5eb80  addiu       $a1, $a1, -0x1480
    ctx->pc = 0x2be294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962048));
    // 0x2be298: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x2be298u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be29c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2be29cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be2a0: 0x8fa90034  lw          $t1, 0x34($sp)
    ctx->pc = 0x2be2a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2be2a4: 0x8faa0038  lw          $t2, 0x38($sp)
    ctx->pc = 0x2be2a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2be2a8: 0x8fab003c  lw          $t3, 0x3C($sp)
    ctx->pc = 0x2be2a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2be2ac: 0x1812  mflo        $v1
    ctx->pc = 0x2be2acu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2be2b0: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2BE2B0u;
    SET_GPR_U32(ctx, 31, 0x2BE2B8u);
    ctx->pc = 0x2BE2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE2B0u;
            // 0x2be2b4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE2B8u; }
        if (ctx->pc != 0x2BE2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE2B8u; }
        if (ctx->pc != 0x2BE2B8u) { return; }
    }
    ctx->pc = 0x2BE2B8u;
label_2be2b8:
    // 0x2be2b8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2BE2B8u;
    {
        const bool branch_taken_0x2be2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be2b8) {
            ctx->pc = 0x2BE33Cu;
            goto label_2be33c;
        }
    }
    ctx->pc = 0x2BE2C0u;
label_2be2c0:
    // 0x2be2c0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2be2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2be2c4: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2BE2C4u;
    {
        const bool branch_taken_0x2be2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2be2c4) {
            ctx->pc = 0x2BE33Cu;
            goto label_2be33c;
        }
    }
    ctx->pc = 0x2BE2CCu;
    // 0x2be2cc: 0xc0a1b46  jal         func_286D18
    ctx->pc = 0x2BE2CCu;
    SET_GPR_U32(ctx, 31, 0x2BE2D4u);
    ctx->pc = 0x2BE2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE2CCu;
            // 0x2be2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286D18u;
    if (runtime->hasFunction(0x286D18u)) {
        auto targetFn = runtime->lookupFunction(0x286D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE2D4u; }
        if (ctx->pc != 0x2BE2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286D18_0x286d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE2D4u; }
        if (ctx->pc != 0x2BE2D4u) { return; }
    }
    ctx->pc = 0x2BE2D4u;
label_2be2d4:
    // 0x2be2d4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2be2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2be2d8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2be2d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2be2dc: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2be2dcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2be2e0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE2E0u;
    {
        const bool branch_taken_0x2be2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE2E0u;
            // 0x2be2e4: 0x24042723  addiu       $a0, $zero, 0x2723 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10019));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2e0) {
            ctx->pc = 0x2BE2F8u;
            goto label_2be2f8;
        }
    }
    ctx->pc = 0x2BE2E8u;
    // 0x2be2e8: 0x28c22710  slti        $v0, $a2, 0x2710
    ctx->pc = 0x2be2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x2be2ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE2ECu;
    {
        const bool branch_taken_0x2be2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE2ECu;
            // 0x2be2f0: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2ec) {
            ctx->pc = 0x2BE300u;
            goto label_2be300;
        }
    }
    ctx->pc = 0x2BE2F4u;
label_2be2f4:
    // 0x2be2f4: 0x24042723  addiu       $a0, $zero, 0x2723
    ctx->pc = 0x2be2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10019));
label_2be2f8:
    // 0x2be2f8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2BE2F8u;
    {
        const bool branch_taken_0x2be2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE2F8u;
            // 0x2be2fc: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2f8) {
            ctx->pc = 0x2BE4C4u;
            goto label_2be4c4;
        }
    }
    ctx->pc = 0x2BE300u;
label_2be300:
    // 0x2be300: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2be300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2be304: 0x2bc30014  slti        $v1, $fp, 0x14
    ctx->pc = 0x2be304u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2be308: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE308u;
    {
        const bool branch_taken_0x2be308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE308u;
            // 0x2be30c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be308) {
            ctx->pc = 0x2BE318u;
            goto label_2be318;
        }
    }
    ctx->pc = 0x2BE310u;
    // 0x2be310: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2BE310u;
    {
        const bool branch_taken_0x2be310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE310u;
            // 0x2be314: 0x24022720  addiu       $v0, $zero, 0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be310) {
            ctx->pc = 0x2BE4C0u;
            goto label_2be4c0;
        }
    }
    ctx->pc = 0x2BE318u;
label_2be318:
    // 0x2be318: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2be318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2be31c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2be31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2be320: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x2be320u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be324: 0x24a5eba8  addiu       $a1, $a1, -0x1458
    ctx->pc = 0x2be324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962088));
    // 0x2be328: 0x8fa90034  lw          $t1, 0x34($sp)
    ctx->pc = 0x2be328u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2be32c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2be32cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be330: 0x8faa0038  lw          $t2, 0x38($sp)
    ctx->pc = 0x2be330u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2be334: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2BE334u;
    SET_GPR_U32(ctx, 31, 0x2BE33Cu);
    ctx->pc = 0x2BE338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE334u;
            // 0x2be338: 0x8fab003c  lw          $t3, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE33Cu; }
        if (ctx->pc != 0x2BE33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE33Cu; }
        if (ctx->pc != 0x2BE33Cu) { return; }
    }
    ctx->pc = 0x2BE33Cu;
label_2be33c:
    // 0x2be33c: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2BE33Cu;
    SET_GPR_U32(ctx, 31, 0x2BE344u);
    ctx->pc = 0x2BE340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE33Cu;
            // 0x2be340: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE344u; }
        if (ctx->pc != 0x2BE344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE344u; }
        if (ctx->pc != 0x2BE344u) { return; }
    }
    ctx->pc = 0x2BE344u;
label_2be344:
    // 0x2be344: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2BE344u;
    SET_GPR_U32(ctx, 31, 0x2BE34Cu);
    ctx->pc = 0x2BE348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE344u;
            // 0x2be348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE34Cu; }
        if (ctx->pc != 0x2BE34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE34Cu; }
        if (ctx->pc != 0x2BE34Cu) { return; }
    }
    ctx->pc = 0x2BE34Cu;
label_2be34c:
    // 0x2be34c: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2BE34Cu;
    SET_GPR_U32(ctx, 31, 0x2BE354u);
    ctx->pc = 0x2BE350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE34Cu;
            // 0x2be350: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE354u; }
        if (ctx->pc != 0x2BE354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE354u; }
        if (ctx->pc != 0x2BE354u) { return; }
    }
    ctx->pc = 0x2BE354u;
label_2be354:
    // 0x2be354: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2BE354u;
    SET_GPR_U32(ctx, 31, 0x2BE35Cu);
    ctx->pc = 0x2BE358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE354u;
            // 0x2be358: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE35Cu; }
        if (ctx->pc != 0x2BE35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE35Cu; }
        if (ctx->pc != 0x2BE35Cu) { return; }
    }
    ctx->pc = 0x2BE35Cu;
label_2be35c:
    // 0x2be35c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2BE35Cu;
    {
        const bool branch_taken_0x2be35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE35Cu;
            // 0x2be360: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be35c) {
            ctx->pc = 0x2BE4C8u;
            goto label_2be4c8;
        }
    }
    ctx->pc = 0x2BE364u;
label_2be364:
    // 0x2be364: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2be364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2be368: 0x14620055  bne         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2BE368u;
    {
        const bool branch_taken_0x2be368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BE36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE368u;
            // 0x2be36c: 0x24022724  addiu       $v0, $zero, 0x2724 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10020));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be368) {
            ctx->pc = 0x2BE4C0u;
            goto label_2be4c0;
        }
    }
    ctx->pc = 0x2BE370u;
    // 0x2be370: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2be370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2be374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2be374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be378: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x2be378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2be37c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2be37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be380: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE380u;
    {
        const bool branch_taken_0x2be380 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BE384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE380u;
            // 0x2be384: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be380) {
            ctx->pc = 0x2BE390u;
            goto label_2be390;
        }
    }
    ctx->pc = 0x2BE388u;
    // 0x2be388: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2be388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2be38c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2be38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2be390:
    // 0x2be390: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2be390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2be394: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2be394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2be398: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE398u;
    {
        const bool branch_taken_0x2be398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE398u;
            // 0x2be39c: 0x31602  srl         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be398) {
            ctx->pc = 0x2BE3B4u;
            goto label_2be3b4;
        }
    }
    ctx->pc = 0x2BE3A0u;
label_2be3a0:
    // 0x2be3a0: 0x5200007  bltz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE3A0u;
    {
        const bool branch_taken_0x2be3a0 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x2BE3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3A0u;
            // 0x2be3a4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3a0) {
            ctx->pc = 0x2BE3C0u;
            goto label_2be3c0;
        }
    }
    ctx->pc = 0x2BE3A8u;
    // 0x2be3a8: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x2be3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2be3ac: 0x431007  srav        $v0, $v1, $v0
    ctx->pc = 0x2be3acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2be3b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2be3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2be3b4:
    // 0x2be3b4: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BE3B4u;
    {
        const bool branch_taken_0x2be3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be3b4) {
            ctx->pc = 0x2BE3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3B4u;
            // 0x2be3b8: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE3A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2be3a0;
        }
    }
    ctx->pc = 0x2BE3BCu;
    // 0x2be3bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2be3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2be3c0:
    // 0x2be3c0: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BE3C0u;
    {
        const bool branch_taken_0x2be3c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3C0u;
            // 0x2be3c4: 0x3d0102a  slt         $v0, $fp, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3c0) {
            ctx->pc = 0x2BE400u;
            goto label_2be400;
        }
    }
    ctx->pc = 0x2BE3C8u;
    // 0x2be3c8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2be3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2be3cc: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x2be3ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2be3d0: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x2be3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x2be3d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BE3D4u;
    {
        const bool branch_taken_0x2be3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3D4u;
            // 0x2be3d8: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3d4) {
            ctx->pc = 0x2BE3FCu;
            goto label_2be3fc;
        }
    }
    ctx->pc = 0x2BE3DCu;
    // 0x2be3dc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2be3dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_2be3e0:
    // 0x2be3e0: 0x5200006  bltz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE3E0u;
    {
        const bool branch_taken_0x2be3e0 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x2BE3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3E0u;
            // 0x2be3e4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3e0) {
            ctx->pc = 0x2BE3FCu;
            goto label_2be3fc;
        }
    }
    ctx->pc = 0x2BE3E8u;
    // 0x2be3e8: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x2be3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2be3ec: 0x431007  srav        $v0, $v1, $v0
    ctx->pc = 0x2be3ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2be3f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2be3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2be3f4: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BE3F4u;
    {
        const bool branch_taken_0x2be3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be3f4) {
            ctx->pc = 0x2BE3F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3F4u;
            // 0x2be3f8: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE3E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2be3e0;
        }
    }
    ctx->pc = 0x2BE3FCu;
label_2be3fc:
    // 0x2be3fc: 0x3d0102a  slt         $v0, $fp, $s0
    ctx->pc = 0x2be3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2be400:
    // 0x2be400: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE400u;
    {
        const bool branch_taken_0x2be400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE400u;
            // 0x2be404: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be400) {
            ctx->pc = 0x2BE414u;
            goto label_2be414;
        }
    }
    ctx->pc = 0x2BE408u;
    // 0x2be408: 0x24022720  addiu       $v0, $zero, 0x2720
    ctx->pc = 0x2be408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10016));
    // 0x2be40c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2BE40Cu;
    {
        const bool branch_taken_0x2be40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE40Cu;
            // 0x2be410: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be40c) {
            ctx->pc = 0x2BE4C0u;
            goto label_2be4c0;
        }
    }
    ctx->pc = 0x2BE414u;
label_2be414:
    // 0x2be414: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2be414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2be418: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2BE418u;
    SET_GPR_U32(ctx, 31, 0x2BE420u);
    ctx->pc = 0x2BE41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE418u;
            // 0x2be41c: 0x3d03023  subu        $a2, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE420u; }
        if (ctx->pc != 0x2BE420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE420u; }
        if (ctx->pc != 0x2BE420u) { return; }
    }
    ctx->pc = 0x2BE420u;
label_2be420:
    // 0x2be420: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2be420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2be424: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2be424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be428: 0x26a50005  addiu       $a1, $s5, 0x5
    ctx->pc = 0x2be428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 5));
    // 0x2be42c: 0xac7e0000  sw          $fp, 0x0($v1)
    ctx->pc = 0x2be42cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 30));
    // 0x2be430: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2be430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2be434: 0x92a20004  lbu         $v0, 0x4($s5)
    ctx->pc = 0x2be434u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2be438: 0x9e1821  addu        $v1, $a0, $fp
    ctx->pc = 0x2be438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x2be43c: 0x2467fffe  addiu       $a3, $v1, -0x2
    ctx->pc = 0x2be43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2be440: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2BE440u;
    {
        const bool branch_taken_0x2be440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE440u;
            // 0x2be444: 0xa062ffff  sb          $v0, -0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be440) {
            ctx->pc = 0x2BE4C4u;
            goto label_2be4c4;
        }
    }
    ctx->pc = 0x2BE448u;
label_2be448:
    // 0x2be448: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2be448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2be44c: 0x2d220004  sltiu       $v0, $t1, 0x4
    ctx->pc = 0x2be44cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2be450: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE450u;
    {
        const bool branch_taken_0x2be450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be450) {
            ctx->pc = 0x2BE46Cu;
            goto label_2be46c;
        }
    }
    ctx->pc = 0x2BE458u;
    // 0x2be458: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2be458u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2be45c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2be45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2be460: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x2be460u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2be464: 0x1530fff8  bne         $t1, $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BE464u;
    {
        const bool branch_taken_0x2be464 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BE468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE464u;
            // 0x2be468: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be464) {
            ctx->pc = 0x2BE448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2be448;
        }
    }
    ctx->pc = 0x2BE46Cu;
label_2be46c:
    // 0x2be46c: 0x11300015  beq         $t1, $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BE46Cu;
    {
        const bool branch_taken_0x2be46c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 16));
        ctx->pc = 0x2BE470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE46Cu;
            // 0x2be470: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be46c) {
            ctx->pc = 0x2BE4C4u;
            goto label_2be4c4;
        }
    }
    ctx->pc = 0x2BE474u;
    // 0x2be474: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2be474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be478: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2be478u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2be47c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2be47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2be480: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2be480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2be484: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x2be484u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2be488: 0x1203000e  beq         $s0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2BE488u;
    {
        const bool branch_taken_0x2be488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BE48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE488u;
            // 0x2be48c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be488) {
            ctx->pc = 0x2BE4C4u;
            goto label_2be4c4;
        }
    }
    ctx->pc = 0x2BE490u;
label_2be490:
    // 0x2be490: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2be490u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2be494: 0x2d220004  sltiu       $v0, $t1, 0x4
    ctx->pc = 0x2be494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2be498: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BE498u;
    {
        const bool branch_taken_0x2be498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE498u;
            // 0x2be49c: 0x25230004  addiu       $v1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be498) {
            ctx->pc = 0x2BE4C4u;
            goto label_2be4c4;
        }
    }
    ctx->pc = 0x2BE4A0u;
    // 0x2be4a0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2be4a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2be4a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2be4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2be4a8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x2be4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2be4ac: 0x1470fff8  bne         $v1, $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BE4ACu;
    {
        const bool branch_taken_0x2be4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x2BE4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE4ACu;
            // 0x2be4b0: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be4ac) {
            ctx->pc = 0x2BE490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2be490;
        }
    }
    ctx->pc = 0x2BE4B4u;
    // 0x2be4b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE4B4u;
    {
        const bool branch_taken_0x2be4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE4B4u;
            // 0x2be4b8: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be4b4) {
            ctx->pc = 0x2BE4C8u;
            goto label_2be4c8;
        }
    }
    ctx->pc = 0x2BE4BCu;
    // 0x2be4bc: 0x0  nop
    ctx->pc = 0x2be4bcu;
    // NOP
label_2be4c0:
    // 0x2be4c0: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2be4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_2be4c4:
    // 0x2be4c4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2be4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2be4c8:
    // 0x2be4c8: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2be4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2be4cc: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x2be4ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2be4d0: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x2be4d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2be4d4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2be4d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2be4d8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x2be4d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2be4dc: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2be4dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2be4e0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x2be4e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2be4e4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2be4e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2be4e8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2be4e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2be4ec: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2be4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2be4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE4F0u;
            // 0x2be4f4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE4F8u;
    ctx->pc = 0x2be4f8u;
}
