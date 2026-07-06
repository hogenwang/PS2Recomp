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

// Function: sub_00119088
// Address: 0x119088 - 0x119130
void sub_00119088_0x119088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119088_0x119088");
#endif

    switch (ctx->pc) {
        case 0x119088u: goto label_119088;
        case 0x11908cu: goto label_11908c;
        case 0x119090u: goto label_119090;
        case 0x119094u: goto label_119094;
        case 0x119098u: goto label_119098;
        case 0x11909cu: goto label_11909c;
        case 0x1190a0u: goto label_1190a0;
        case 0x1190a4u: goto label_1190a4;
        case 0x1190a8u: goto label_1190a8;
        case 0x1190acu: goto label_1190ac;
        case 0x1190b0u: goto label_1190b0;
        case 0x1190b4u: goto label_1190b4;
        case 0x1190b8u: goto label_1190b8;
        case 0x1190bcu: goto label_1190bc;
        case 0x1190c0u: goto label_1190c0;
        case 0x1190c4u: goto label_1190c4;
        case 0x1190c8u: goto label_1190c8;
        case 0x1190ccu: goto label_1190cc;
        case 0x1190d0u: goto label_1190d0;
        case 0x1190d4u: goto label_1190d4;
        case 0x1190d8u: goto label_1190d8;
        case 0x1190dcu: goto label_1190dc;
        case 0x1190e0u: goto label_1190e0;
        case 0x1190e4u: goto label_1190e4;
        case 0x1190e8u: goto label_1190e8;
        case 0x1190ecu: goto label_1190ec;
        case 0x1190f0u: goto label_1190f0;
        case 0x1190f4u: goto label_1190f4;
        case 0x1190f8u: goto label_1190f8;
        case 0x1190fcu: goto label_1190fc;
        case 0x119100u: goto label_119100;
        case 0x119104u: goto label_119104;
        case 0x119108u: goto label_119108;
        case 0x11910cu: goto label_11910c;
        case 0x119110u: goto label_119110;
        case 0x119114u: goto label_119114;
        case 0x119118u: goto label_119118;
        case 0x11911cu: goto label_11911c;
        case 0x119120u: goto label_119120;
        case 0x119124u: goto label_119124;
        case 0x119128u: goto label_119128;
        case 0x11912cu: goto label_11912c;
        default: break;
    }

    ctx->pc = 0x119088u;

label_119088:
    // 0x119088: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x119088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11908c:
    // 0x11908c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11908cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_119090:
    // 0x119090: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x119090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_119094:
    // 0x119094: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x119094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_119098:
    // 0x119098: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11909c:
    // 0x11909c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11909cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1190a0:
    // 0x1190a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1190a4:
    if (ctx->pc == 0x1190A4u) {
        ctx->pc = 0x1190A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190A0u;
        // 0x1190a4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1190A8u;
        goto label_1190a8;
    }
    ctx->pc = 0x1190A0u;
    {
        const bool branch_taken_0x1190a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1190A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190A0u;
        // 0x1190a4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190a0) {
            ctx->pc = 0x1190B8u;
            goto label_1190b8;
        }
    }
    ctx->pc = 0x1190A8u;
label_1190a8:
    // 0x1190a8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1190a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_1190ac:
    // 0x1190ac: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1190acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1190b0:
    // 0x1190b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1190b4:
    if (ctx->pc == 0x1190B4u) {
        ctx->pc = 0x1190B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190B0u;
        // 0x1190b4: 0x2442d548  addiu       $v0, $v0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1190B8u;
        goto label_1190b8;
    }
    ctx->pc = 0x1190B0u;
    {
        const bool branch_taken_0x1190b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1190B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190B0u;
        // 0x1190b4: 0x2442d548  addiu       $v0, $v0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190b0) {
            ctx->pc = 0x1190C8u;
            goto label_1190c8;
        }
    }
    ctx->pc = 0x1190B8u;
label_1190b8:
    // 0x1190b8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1190b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_1190bc:
    // 0x1190bc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1190bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_1190c0:
    // 0x1190c0: 0x8c429d70  lw          $v0, -0x6290($v0)
    ctx->pc = 0x1190c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942064)));
label_1190c4:
    // 0x1190c4: 0x8c639d74  lw          $v1, -0x628C($v1)
    ctx->pc = 0x1190c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942068)));
label_1190c8:
    // 0x1190c8: 0x380902d  daddu       $s2, $gp, $zero
    ctx->pc = 0x1190c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1190cc:
    // 0x1190cc: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_1190d0:
    if (ctx->pc == 0x1190D0u) {
        ctx->pc = 0x1190D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190CCu;
        // 0x1190d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1190D4u;
        goto label_1190d4;
    }
    ctx->pc = 0x1190CCu;
    {
        const bool branch_taken_0x1190cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1190D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190CCu;
        // 0x1190d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190cc) {
            ctx->pc = 0x11910Cu;
            goto label_11910c;
        }
    }
    ctx->pc = 0x1190D4u;
label_1190d4:
    // 0x1190d4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1190d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1190d8:
    // 0x1190d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1190d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1190dc:
    // 0x1190dc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1190e0:
    if (ctx->pc == 0x1190E0u) {
        ctx->pc = 0x1190E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190DCu;
        // 0x1190e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1190E4u;
        goto label_1190e4;
    }
    ctx->pc = 0x1190DCu;
    {
        const bool branch_taken_0x1190dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1190dc) {
            ctx->pc = 0x1190E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1190DCu;
            // 0x1190e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119104u;
            goto label_119104;
        }
    }
    ctx->pc = 0x1190E4u;
label_1190e4:
    // 0x1190e4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1190e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1190e8:
    // 0x1190e8: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x1190e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1190ec:
    // 0x1190ec: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x1190ecu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1190f0:
    // 0x1190f0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1190f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1190f4:
    // 0x1190f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1190f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1190f8:
    // 0x1190f8: 0xc0f809  jalr        $a2
label_1190fc:
    if (ctx->pc == 0x1190FCu) {
        ctx->pc = 0x1190FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190F8u;
        // 0x1190fc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119100u;
        goto label_119100;
    }
    ctx->pc = 0x1190F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x119100u);
        ctx->pc = 0x1190FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190F8u;
        // 0x1190fc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1190F8u, 0x119100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119100u;
label_119100:
    // 0x119100: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x119100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_119104:
    // 0x119104: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_119108:
    if (ctx->pc == 0x119108u) {
        ctx->pc = 0x119108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119104u;
        // 0x119108: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11910Cu;
        goto label_11910c;
    }
    ctx->pc = 0x119104u;
    {
        const bool branch_taken_0x119104 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x119108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119104u;
        // 0x119108: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119104) {
            ctx->pc = 0x1190D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1190d8;
        }
    }
    ctx->pc = 0x11910Cu;
label_11910c:
    // 0x11910c: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x11910cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_119110:
    // 0x119110: 0x240e02d  daddu       $gp, $s2, $zero
    ctx->pc = 0x119110u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_119114:
    // 0x119114: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x119114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_119118:
    // 0x119118: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11911c:
    // 0x11911c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11911cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_119120:
    // 0x119120: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_119124:
    // 0x119124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_119128:
    // 0x119128: 0x3e00008  jr          $ra
label_11912c:
    if (ctx->pc == 0x11912Cu) {
        ctx->pc = 0x11912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119128u;
        // 0x11912c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119130u;
        goto label_fallthrough_0x119128;
    }
    ctx->pc = 0x119128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119128u;
        // 0x11912c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x119128:
    ctx->pc = 0x119130u;
}
