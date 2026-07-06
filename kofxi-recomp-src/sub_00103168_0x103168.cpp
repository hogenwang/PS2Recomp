#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00103168
// Address: 0x103168 - 0x103398
void sub_00103168_0x103168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103168_0x103168");
#endif

    switch (ctx->pc) {
        case 0x1031e8u: goto label_1031e8;
        case 0x103360u: goto label_103360;
        default: break;
    }

    ctx->pc = 0x103168u;

label_103168:
    // 0x103168: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x103168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10316c: 0x34423800  ori         $v0, $v0, 0x3800
    ctx->pc = 0x10316cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
    // 0x103170: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x103170u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x103174: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x103174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x103178: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x103178u;
    {
        const bool branch_taken_0x103178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103178u;
        // 0x10317c: 0x30820700  andi        $v0, $a0, 0x700 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1792);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103178) {
            ctx->pc = 0x103188u;
            goto label_103188;
        }
    }
    ctx->pc = 0x103180u;
    // 0x103180: 0x3e00008  jr          $ra
    ctx->pc = 0x103180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103180u;
        // 0x103184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103188u;
label_103188:
    // 0x103188: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103188u;
    {
        const bool branch_taken_0x103188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103188u;
        // 0x10318c: 0x3082000c  andi        $v0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103188) {
            ctx->pc = 0x103198u;
            goto label_103198;
        }
    }
    ctx->pc = 0x103190u;
    // 0x103190: 0x3e00008  jr          $ra
    ctx->pc = 0x103190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103190u;
        // 0x103194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103198u;
label_103198:
    // 0x103198: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103198u;
    {
        const bool branch_taken_0x103198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103198u;
        // 0x10319c: 0x30843000  andi        $a0, $a0, 0x3000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103198) {
            ctx->pc = 0x1031A8u;
            goto label_1031a8;
        }
    }
    ctx->pc = 0x1031A0u;
    // 0x1031a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1031A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1031A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031A0u;
        // 0x1031a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1031A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1031A8u;
label_1031a8:
    // 0x1031a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1031a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1031ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1031acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1031b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1031B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1031B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031B0u;
        // 0x1031b4: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1031B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1031B8u;
    // 0x1031b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1031b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1031bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1031bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1031c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1031c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1031c4: 0x34423840  ori         $v0, $v0, 0x3840
    ctx->pc = 0x1031c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14400);
    // 0x1031c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1031c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1031cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1031ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1031d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1031d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1031d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1031d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1031d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1031dc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1031dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1031e0: 0xc040c5a  jal         func_103168
    ctx->pc = 0x1031E0u;
    SET_GPR_U32(ctx, 31, 0x1031E8u);
    ctx->pc = 0x1031E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031E0u;
    // 0x1031e4: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103168u;
    goto label_103168;
    ctx->pc = 0x1031E8u;
label_1031e8:
    // 0x1031e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1031e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1031ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1031ECu;
    {
        const bool branch_taken_0x1031ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1031F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031ECu;
        // 0x1031f0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1031ec) {
            ctx->pc = 0x1031FCu;
            goto label_1031fc;
        }
    }
    ctx->pc = 0x1031F4u;
    // 0x1031f4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1031F4u;
    {
        const bool branch_taken_0x1031f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1031F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031F4u;
        // 0x1031f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1031f4) {
            ctx->pc = 0x103318u;
            goto label_103318;
        }
    }
    ctx->pc = 0x1031FCu;
label_1031fc:
    // 0x1031fc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1031fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x103200: 0x34423900  ori         $v0, $v0, 0x3900
    ctx->pc = 0x103200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14592);
    // 0x103204: 0x34633910  ori         $v1, $v1, 0x3910
    ctx->pc = 0x103204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14608);
    // 0x103208: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x103208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10320c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10320cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x103210: 0x34843920  ori         $a0, $a0, 0x3920
    ctx->pc = 0x103210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14624);
    // 0x103214: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x103214u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x103218: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x103218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x10321c: 0x34c63930  ori         $a2, $a2, 0x3930
    ctx->pc = 0x10321cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14640);
    // 0x103220: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x103220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x103224: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x103224u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x103228: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x103228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10322c: 0x34a53940  ori         $a1, $a1, 0x3940
    ctx->pc = 0x10322cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14656);
    // 0x103230: 0x35ef3950  ori         $t7, $t7, 0x3950
    ctx->pc = 0x103230u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)14672);
    // 0x103234: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x103234u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x103238: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x103238u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x10323c: 0x36103960  ori         $s0, $s0, 0x3960
    ctx->pc = 0x10323cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)14688);
    // 0x103240: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x103240u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x103244: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x103244u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x103248: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x103248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10324c: 0x35ce3970  ori         $t6, $t6, 0x3970
    ctx->pc = 0x10324cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)14704);
    // 0x103250: 0x36313870  ori         $s1, $s1, 0x3870
    ctx->pc = 0x103250u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)14448);
    // 0x103254: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x103254u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x103258: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x103258u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x10325c: 0x358c3880  ori         $t4, $t4, 0x3880
    ctx->pc = 0x10325cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)14464);
    // 0x103260: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x103260u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x103264: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x103264u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x103268: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x103268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10326c: 0x356b3800  ori         $t3, $t3, 0x3800
    ctx->pc = 0x10326cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)14336);
    // 0x103270: 0x35ad38d0  ori         $t5, $t5, 0x38D0
    ctx->pc = 0x103270u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)14544);
    // 0x103274: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x103274u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x103278: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x103278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x10327c: 0x34c63890  ori         $a2, $a2, 0x3890
    ctx->pc = 0x10327cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14480);
    // 0x103280: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x103280u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x103284: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x103284u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x103288: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x103288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10328c: 0x34e73830  ori         $a3, $a3, 0x3830
    ctx->pc = 0x10328cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)14384);
    // 0x103290: 0x35293860  ori         $t1, $t1, 0x3860
    ctx->pc = 0x103290u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)14432);
    // 0x103294: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x103294u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x103298: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x103298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x10329c: 0x35083820  ori         $t0, $t0, 0x3820
    ctx->pc = 0x10329cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)14368);
    // 0x1032a0: 0x149202  srl         $s2, $s4, 8
    ctx->pc = 0x1032a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 20), 8));
    // 0x1032a4: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x1032a4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x1032a8: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x1032a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1032ac: 0x354a3850  ori         $t2, $t2, 0x3850
    ctx->pc = 0x1032acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)14416);
    // 0x1032b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1032b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1032b4: 0xae640014  sw          $a0, 0x14($s3)
    ctx->pc = 0x1032b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
    // 0x1032b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1032b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1032bc: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x1032bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
    // 0x1032c0: 0x8dc40000  lw          $a0, 0x0($t6)
    ctx->pc = 0x1032c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1032c4: 0xae64001c  sw          $a0, 0x1C($s3)
    ctx->pc = 0x1032c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 4));
    // 0x1032c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1032c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1032cc: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x1032ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
    // 0x1032d0: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x1032d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1032d4: 0xae640024  sw          $a0, 0x24($s3)
    ctx->pc = 0x1032d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 4));
    // 0x1032d8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1032d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1032dc: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x1032dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
    // 0x1032e0: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x1032e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1032e4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1032e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1032e8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1032e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1032ec: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x1032ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1032f0: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x1032f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1032f4: 0xa663002e  sh          $v1, 0x2E($s3)
    ctx->pc = 0x1032f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x1032f8: 0xa664002c  sh          $a0, 0x2C($s3)
    ctx->pc = 0x1032f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 4));
    // 0x1032fc: 0xa6650030  sh          $a1, 0x30($s3)
    ctx->pc = 0x1032fcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x103300: 0xa6660032  sh          $a2, 0x32($s3)
    ctx->pc = 0x103300u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 50), (uint16_t)GPR_U32(ctx, 6));
    // 0x103304: 0xa2670034  sb          $a3, 0x34($s3)
    ctx->pc = 0x103304u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 52), (uint8_t)GPR_U32(ctx, 7));
    // 0x103308: 0xa2740035  sb          $s4, 0x35($s3)
    ctx->pc = 0x103308u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 53), (uint8_t)GPR_U32(ctx, 20));
    // 0x10330c: 0xa2720036  sb          $s2, 0x36($s3)
    ctx->pc = 0x10330cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 54), (uint8_t)GPR_U32(ctx, 18));
    // 0x103310: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x103310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x103314: 0xa2630037  sb          $v1, 0x37($s3)
    ctx->pc = 0x103314u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 3));
label_103318:
    // 0x103318: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x103318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10331c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10331cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103320: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x103320u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103324: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103324u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103328: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10332c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10332cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103330: 0x3e00008  jr          $ra
    ctx->pc = 0x103330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103330u;
        // 0x103334: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103338u;
    // 0x103338: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x103338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10333c: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x10333Cu;
    {
        const bool branch_taken_0x10333c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x103340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10333Cu;
        // 0x103340: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10333c) {
            ctx->pc = 0x10338Cu;
            goto label_10338c;
        }
    }
    ctx->pc = 0x103344u;
    // 0x103344: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x103344u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x103348: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x103348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10334c: 0x34c63800  ori         $a2, $a2, 0x3800
    ctx->pc = 0x10334cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14336);
    // 0x103350: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x103350u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x103354: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x103354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x103358: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x103358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10335c: 0x0  nop
    ctx->pc = 0x10335cu;
    // NOP
label_103360:
    // 0x103360: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x103360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x103364: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x103364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x103368: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x103368u;
    {
        const bool branch_taken_0x103368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103368) {
            ctx->pc = 0x10336Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103368u;
            // 0x10336c: 0x78820000  lq          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103378u;
            goto label_103378;
        }
    }
    ctx->pc = 0x103370u;
    // 0x103370: 0x3e00008  jr          $ra
    ctx->pc = 0x103370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103370u;
        // 0x103374: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103378u;
label_103378:
    // 0x103378: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x103378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x10337c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x10337cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x103380: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x103380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x103384: 0x1468fff6  bne         $v1, $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x103384u;
    {
        const bool branch_taken_0x103384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x103388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103384u;
        // 0x103388: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103384) {
            ctx->pc = 0x103360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_103360;
        }
    }
    ctx->pc = 0x10338Cu;
label_10338c:
    // 0x10338c: 0x3e00008  jr          $ra
    ctx->pc = 0x10338Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10338Cu;
        // 0x103390: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10338Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103394u;
    // 0x103394: 0x0  nop
    ctx->pc = 0x103394u;
    // NOP
}
