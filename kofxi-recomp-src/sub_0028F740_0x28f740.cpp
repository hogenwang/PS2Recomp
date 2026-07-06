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

// Function: sub_0028F740
// Address: 0x28f740 - 0x290400
void sub_0028F740_0x28f740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F740_0x28f740");
#endif

    switch (ctx->pc) {
        case 0x28f780u: goto label_28f780;
        case 0x28f7d0u: goto label_28f7d0;
        case 0x28f818u: goto label_28f818;
        case 0x28f828u: goto label_28f828;
        case 0x28f85cu: goto label_28f85c;
        case 0x28f874u: goto label_28f874;
        case 0x28f8d0u: goto label_28f8d0;
        case 0x28f8f0u: goto label_28f8f0;
        case 0x28f8f8u: goto label_28f8f8;
        case 0x28f910u: goto label_28f910;
        case 0x28f928u: goto label_28f928;
        case 0x28f968u: goto label_28f968;
        case 0x28f988u: goto label_28f988;
        case 0x28f9acu: goto label_28f9ac;
        case 0x28f9e0u: goto label_28f9e0;
        case 0x28fa08u: goto label_28fa08;
        case 0x28fa78u: goto label_28fa78;
        case 0x28faa8u: goto label_28faa8;
        case 0x28fae0u: goto label_28fae0;
        case 0x28fb18u: goto label_28fb18;
        case 0x28fb40u: goto label_28fb40;
        case 0x28fbbcu: goto label_28fbbc;
        case 0x28fbc0u: goto label_28fbc0;
        case 0x28fc08u: goto label_28fc08;
        case 0x28fc78u: goto label_28fc78;
        case 0x28fcb8u: goto label_28fcb8;
        case 0x28fd10u: goto label_28fd10;
        case 0x28fd50u: goto label_28fd50;
        case 0x28fd88u: goto label_28fd88;
        case 0x28fdd8u: goto label_28fdd8;
        case 0x28fe28u: goto label_28fe28;
        case 0x28fe70u: goto label_28fe70;
        case 0x28feacu: goto label_28feac;
        case 0x28febcu: goto label_28febc;
        case 0x28fef4u: goto label_28fef4;
        case 0x28ff04u: goto label_28ff04;
        case 0x28ff60u: goto label_28ff60;
        case 0x28ff80u: goto label_28ff80;
        case 0x28ffa4u: goto label_28ffa4;
        case 0x28ffd4u: goto label_28ffd4;
        case 0x28ffecu: goto label_28ffec;
        case 0x290038u: goto label_290038;
        case 0x290080u: goto label_290080;
        case 0x2900a0u: goto label_2900a0;
        case 0x2900c4u: goto label_2900c4;
        case 0x2900f4u: goto label_2900f4;
        case 0x29010cu: goto label_29010c;
        case 0x290158u: goto label_290158;
        case 0x2901a0u: goto label_2901a0;
        case 0x2901c0u: goto label_2901c0;
        case 0x2901e4u: goto label_2901e4;
        case 0x290214u: goto label_290214;
        case 0x29022cu: goto label_29022c;
        case 0x290278u: goto label_290278;
        case 0x2902c0u: goto label_2902c0;
        case 0x2902e0u: goto label_2902e0;
        case 0x290304u: goto label_290304;
        case 0x290334u: goto label_290334;
        case 0x29034cu: goto label_29034c;
        case 0x290398u: goto label_290398;
        case 0x2903bcu: goto label_2903bc;
        default: break;
    }

    ctx->pc = 0x28f740u;

    // 0x28f740: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28f740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28f744: 0x3e00008  jr          $ra
    ctx->pc = 0x28F744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F744u;
        // 0x28f748: 0x24423870  addiu       $v0, $v0, 0x3870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F74Cu;
    // 0x28f74c: 0x0  nop
    ctx->pc = 0x28f74cu;
    // NOP
    // 0x28f750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28f754: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28f758: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28f758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28f75c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28f75cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28f764: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28f764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f768: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28f768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28f76c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28f76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f770: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x28f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x28f774: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28f774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f778: 0xc0a5102  jal         func_294408
    ctx->pc = 0x28F778u;
    SET_GPR_U32(ctx, 31, 0x28F780u);
    ctx->pc = 0x28F77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F778u;
    // 0x28f77c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x28F778u, 0x28F780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F780u;
label_28f780:
    // 0x28f780: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F780u;
    {
        const bool branch_taken_0x28f780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f780) {
            ctx->pc = 0x28F784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F780u;
            // 0x28f784: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F790u;
            goto label_28f790;
        }
    }
    ctx->pc = 0x28F788u;
    // 0x28f788: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28F788u;
    {
        const bool branch_taken_0x28f788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F788u;
        // 0x28f78c: 0x24122711  addiu       $s2, $zero, 0x2711 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f788) {
            ctx->pc = 0x28F7D8u;
            goto label_28f7d8;
        }
    }
    ctx->pc = 0x28F790u;
label_28f790:
    // 0x28f790: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28f790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28f794: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28F794u;
    {
        const bool branch_taken_0x28f794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F794u;
        // 0x28f798: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f794) {
            ctx->pc = 0x28F7DCu;
            goto label_28f7dc;
        }
    }
    ctx->pc = 0x28F79Cu;
    // 0x28f79c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f7a0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28F7A0u;
    {
        const bool branch_taken_0x28f7a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7A0u;
        // 0x28f7a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7a0) {
            ctx->pc = 0x28F7C0u;
            goto label_28f7c0;
        }
    }
    ctx->pc = 0x28F7A8u;
    // 0x28f7a8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x28f7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28f7ac: 0x2cc20041  sltiu       $v0, $a2, 0x41
    ctx->pc = 0x28f7acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x28f7b0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F7B0u;
    {
        const bool branch_taken_0x28f7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f7b0) {
            ctx->pc = 0x28F7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F7B0u;
            // 0x28f7b4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F7C0u;
            goto label_28f7c0;
        }
    }
    ctx->pc = 0x28F7B8u;
    // 0x28f7b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28F7B8u;
    {
        const bool branch_taken_0x28f7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7B8u;
        // 0x28f7bc: 0x24122726  addiu       $s2, $zero, 0x2726 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10022));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7b8) {
            ctx->pc = 0x28F7D8u;
            goto label_28f7d8;
        }
    }
    ctx->pc = 0x28F7C0u;
label_28f7c0:
    // 0x28f7c0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x28f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x28f7c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28f7c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f7c8: 0xc0a5f8a  jal         func_297E28
    ctx->pc = 0x28F7C8u;
    SET_GPR_U32(ctx, 31, 0x28F7D0u);
    ctx->pc = 0x28F7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F7C8u;
    // 0x28f7cc: 0x8c870000  lw          $a3, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E28u, 0x28F7C8u, 0x28F7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F7D0u;
label_28f7d0:
    // 0x28f7d0: 0x24032711  addiu       $v1, $zero, 0x2711
    ctx->pc = 0x28f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
    // 0x28f7d4: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x28f7d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_28f7d8:
    // 0x28f7d8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28f7d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28f7dc:
    // 0x28f7dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28f7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f7e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28f7e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f7e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28f7e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f7e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f7e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x28F7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F7ECu;
        // 0x28f7f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F7F4u;
    // 0x28f7f4: 0x0  nop
    ctx->pc = 0x28f7f4u;
    // NOP
    // 0x28f7f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28f7fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28f800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f804: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x28f804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28f808: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F808u;
    {
        const bool branch_taken_0x28f808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f808) {
            ctx->pc = 0x28F80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F808u;
            // 0x28f80c: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F820u;
            goto label_28f820;
        }
    }
    ctx->pc = 0x28F810u;
    // 0x28f810: 0xc0a5ff4  jal         func_297FD0
    ctx->pc = 0x28F810u;
    SET_GPR_U32(ctx, 31, 0x28F818u);
    ctx->pc = 0x28F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F810u;
    // 0x28f814: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FD0u, 0x28F810u, 0x28F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F818u;
label_28f818:
    // 0x28f818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28F818u;
    {
        const bool branch_taken_0x28f818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F818u;
        // 0x28f81c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f818) {
            ctx->pc = 0x28F82Cu;
            goto label_28f82c;
        }
    }
    ctx->pc = 0x28F820u;
label_28f820:
    // 0x28f820: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x28F820u;
    SET_GPR_U32(ctx, 31, 0x28F828u);
    ctx->pc = 0x28F824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F820u;
    // 0x28f824: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x28F820u, 0x28F828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F828u;
label_28f828:
    // 0x28f828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f82c:
    // 0x28f82c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f82cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f830: 0x3e00008  jr          $ra
    ctx->pc = 0x28F830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F830u;
        // 0x28f834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F838u;
    // 0x28f838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28f83c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28f840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28f844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28f844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28f848: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x28f848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28f84c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F84Cu;
    {
        const bool branch_taken_0x28f84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F84Cu;
        // 0x28f850: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f84c) {
            ctx->pc = 0x28F868u;
            goto label_28f868;
        }
    }
    ctx->pc = 0x28F854u;
    // 0x28f854: 0xc0a5ff6  jal         func_297FD8
    ctx->pc = 0x28F854u;
    SET_GPR_U32(ctx, 31, 0x28F85Cu);
    ctx->pc = 0x28F858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F854u;
    // 0x28f858: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FD8u, 0x28F854u, 0x28F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F85Cu;
label_28f85c:
    // 0x28f85c: 0x24032711  addiu       $v1, $zero, 0x2711
    ctx->pc = 0x28f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
    // 0x28f860: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28F860u;
    {
        const bool branch_taken_0x28f860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F860u;
        // 0x28f864: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f860) {
            ctx->pc = 0x28F874u;
            goto label_28f874;
        }
    }
    ctx->pc = 0x28F868u;
label_28f868:
    // 0x28f868: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x28f868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x28f86c: 0xc0a5148  jal         func_294520
    ctx->pc = 0x28F86Cu;
    SET_GPR_U32(ctx, 31, 0x28F874u);
    ctx->pc = 0x28F870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F86Cu;
    // 0x28f870: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x28F86Cu, 0x28F874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F874u;
label_28f874:
    // 0x28f874: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28f874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28f878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f87c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f87cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f880: 0x3e00008  jr          $ra
    ctx->pc = 0x28F880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F880u;
        // 0x28f884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F888u;
    // 0x28f888: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28f888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28f88c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28f88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28f890: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28f890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28f894: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28f894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28f89c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28f89cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f8a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28f8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f8a4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F8A4u;
    {
        const bool branch_taken_0x28f8a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8A4u;
        // 0x28f8a8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8a4) {
            ctx->pc = 0x28F8B4u;
            goto label_28f8b4;
        }
    }
    ctx->pc = 0x28F8ACu;
    // 0x28f8ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x28F8ACu;
    {
        const bool branch_taken_0x28f8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8ACu;
        // 0x28f8b0: 0x24122721  addiu       $s2, $zero, 0x2721 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10017));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8ac) {
            ctx->pc = 0x28F910u;
            goto label_28f910;
        }
    }
    ctx->pc = 0x28F8B4u;
label_28f8b4:
    // 0x28f8b4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x28f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x28f8b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F8B8u;
    {
        const bool branch_taken_0x28f8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f8b8) {
            ctx->pc = 0x28F8C8u;
            goto label_28f8c8;
        }
    }
    ctx->pc = 0x28F8C0u;
    // 0x28f8c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28F8C0u;
    {
        const bool branch_taken_0x28f8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8C0u;
        // 0x28f8c4: 0x24122722  addiu       $s2, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8c0) {
            ctx->pc = 0x28F910u;
            goto label_28f910;
        }
    }
    ctx->pc = 0x28F8C8u;
label_28f8c8:
    // 0x28f8c8: 0xc0a8d8a  jal         func_2A3628
    ctx->pc = 0x28F8C8u;
    SET_GPR_U32(ctx, 31, 0x28F8D0u);
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x28F8C8u, 0x28F8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F8D0u;
label_28f8d0:
    // 0x28f8d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28f8d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f8d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28f8d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f8d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28f8d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f8e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28f8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f8e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28f8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f8e8: 0xc0a88fc  jal         func_2A23F0
    ctx->pc = 0x28F8E8u;
    SET_GPR_U32(ctx, 31, 0x28F8F0u);
    ctx->pc = 0x28F8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F8E8u;
    // 0x28f8ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A23F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A23F0u, 0x28F8E8u, 0x28F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F8F0u;
label_28f8f0:
    // 0x28f8f0: 0xc0a7e78  jal         func_29F9E0
    ctx->pc = 0x28F8F0u;
    SET_GPR_U32(ctx, 31, 0x28F8F8u);
    ctx->pc = 0x29F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F9E0u, 0x28F8F0u, 0x28F8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F8F8u;
label_28f8f8:
    // 0x28f8f8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x28f8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x28f8fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28f8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f900: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28f900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f904: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28f904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f908: 0xc0a80dc  jal         func_2A0370
    ctx->pc = 0x28F908u;
    SET_GPR_U32(ctx, 31, 0x28F910u);
    ctx->pc = 0x28F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F908u;
    // 0x28f90c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0370u, 0x28F908u, 0x28F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F910u;
label_28f910:
    // 0x28f910: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28f910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f914: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28f914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f918: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28f918u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f91c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28f91cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f924: 0x3e00008  jr          $ra
label_28f928:
    if (ctx->pc == 0x28F928u) {
        ctx->pc = 0x28F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F924u;
        // 0x28f928: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F92Cu;
        goto label_fallthrough_0x28f924;
    }
    ctx->pc = 0x28F924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F924u;
        // 0x28f928: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28f924:
    ctx->pc = 0x28F92Cu;
    // 0x28f92c: 0x0  nop
    ctx->pc = 0x28f92cu;
    // NOP
    // 0x28f930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28f930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28f934: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x28f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x28f938: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x28f938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x28f93c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28f93cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f940: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28f940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28f944: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28f944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f948: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28f948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28f94c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x28f94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x28f950: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F950u;
    {
        const bool branch_taken_0x28f950 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F950u;
        // 0x28f954: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f950) {
            ctx->pc = 0x28F960u;
            goto label_28f960;
        }
    }
    ctx->pc = 0x28F958u;
    // 0x28f958: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x28F958u;
    {
        const bool branch_taken_0x28f958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F958u;
        // 0x28f95c: 0x24092722  addiu       $t1, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f958) {
            ctx->pc = 0x28FA38u;
            goto label_28fa38;
        }
    }
    ctx->pc = 0x28F960u;
label_28f960:
    // 0x28f960: 0xc0a814c  jal         func_2A0530
    ctx->pc = 0x28F960u;
    SET_GPR_U32(ctx, 31, 0x28F968u);
    ctx->pc = 0x28F964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F960u;
    // 0x28f964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0530u, 0x28F960u, 0x28F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F968u;
label_28f968:
    // 0x28f968: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x28f968u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f96c: 0x15200033  bnez        $t1, . + 4 + (0x33 << 2)
    ctx->pc = 0x28F96Cu;
    {
        const bool branch_taken_0x28f96c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F96Cu;
        // 0x28f970: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f96c) {
            ctx->pc = 0x28FA3Cu;
            goto label_28fa3c;
        }
    }
    ctx->pc = 0x28F974u;
    // 0x28f974: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x28f974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x28f978: 0x24050103  addiu       $a1, $zero, 0x103
    ctx->pc = 0x28f978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x28f97c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28f97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f980: 0xc0a8186  jal         func_2A0618
    ctx->pc = 0x28F980u;
    SET_GPR_U32(ctx, 31, 0x28F988u);
    ctx->pc = 0x28F984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F980u;
    // 0x28f984: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0618u, 0x28F980u, 0x28F988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F988u;
label_28f988:
    // 0x28f988: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x28f988u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f98c: 0x1520002b  bnez        $t1, . + 4 + (0x2B << 2)
    ctx->pc = 0x28F98Cu;
    {
        const bool branch_taken_0x28f98c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F98Cu;
        // 0x28f990: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f98c) {
            ctx->pc = 0x28FA3Cu;
            goto label_28fa3c;
        }
    }
    ctx->pc = 0x28F994u;
    // 0x28f994: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x28f994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x28f998: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28f998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f99c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x28f99cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f9a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28f9a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9a4: 0xc0a816c  jal         func_2A05B0
    ctx->pc = 0x28F9A4u;
    SET_GPR_U32(ctx, 31, 0x28F9ACu);
    ctx->pc = 0x28F9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F9A4u;
    // 0x28f9a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A05B0u, 0x28F9A4u, 0x28F9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9ACu;
label_28f9ac:
    // 0x28f9ac: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x28f9acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9b0: 0x15200022  bnez        $t1, . + 4 + (0x22 << 2)
    ctx->pc = 0x28F9B0u;
    {
        const bool branch_taken_0x28f9b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9B0u;
        // 0x28f9b4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9b0) {
            ctx->pc = 0x28FA3Cu;
            goto label_28fa3c;
        }
    }
    ctx->pc = 0x28F9B8u;
    // 0x28f9b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28f9bc: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x28f9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f9c0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x28f9c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x28f9c4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28F9C4u;
    {
        const bool branch_taken_0x28f9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9C4u;
        // 0x28f9c8: 0x1033823  subu        $a3, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9c4) {
            ctx->pc = 0x28FA2Cu;
            goto label_28fa2c;
        }
    }
    ctx->pc = 0x28F9CCu;
    // 0x28f9cc: 0x2505ffff  addiu       $a1, $t0, -0x1
    ctx->pc = 0x28f9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x28f9d0: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x28f9d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x28f9d4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28F9D4u;
    {
        const bool branch_taken_0x28f9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9D4u;
        // 0x28f9d8: 0x2466ffff  addiu       $a2, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9d4) {
            ctx->pc = 0x28FA00u;
            goto label_28fa00;
        }
    }
    ctx->pc = 0x28F9DCu;
    // 0x28f9dc: 0x0  nop
    ctx->pc = 0x28f9dcu;
    // NOP
label_28f9e0:
    // 0x28f9e0: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x28f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x28f9e4: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x28f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x28f9e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28f9e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f9ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28f9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28f9f0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x28f9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x28f9f4: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x28f9f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x28f9f8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28F9F8u;
    {
        const bool branch_taken_0x28f9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9F8u;
        // 0x28f9fc: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9f8) {
            ctx->pc = 0x28F9E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28f9e0;
        }
    }
    ctx->pc = 0x28FA00u;
label_28fa00:
    // 0x28fa00: 0x4a2000d  bltzl       $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x28FA00u;
    {
        const bool branch_taken_0x28fa00 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x28fa00) {
            ctx->pc = 0x28FA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FA00u;
            // 0x28fa04: 0xae480000  sw          $t0, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FA38u;
            goto label_28fa38;
        }
    }
    ctx->pc = 0x28FA08u;
label_28fa08:
    // 0x28fa08: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x28fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x28fa0c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x28fa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28fa10: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28fa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28fa14: 0x0  nop
    ctx->pc = 0x28fa14u;
    // NOP
    // 0x28fa18: 0x0  nop
    ctx->pc = 0x28fa18u;
    // NOP
    // 0x28fa1c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28FA1Cu;
    {
        const bool branch_taken_0x28fa1c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x28fa1c) {
            ctx->pc = 0x28FA08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28fa08;
        }
    }
    ctx->pc = 0x28FA24u;
    // 0x28fa24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28FA24u;
    {
        const bool branch_taken_0x28fa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA24u;
        // 0x28fa28: 0xae480000  sw          $t0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa24) {
            ctx->pc = 0x28FA38u;
            goto label_28fa38;
        }
    }
    ctx->pc = 0x28FA2Cu;
label_28fa2c:
    // 0x28fa2c: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x28fa2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28fa30: 0x24092711  addiu       $t1, $zero, 0x2711
    ctx->pc = 0x28fa30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
    // 0x28fa34: 0x2480a  movz        $t1, $zero, $v0
    ctx->pc = 0x28fa34u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_28fa38:
    // 0x28fa38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28fa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28fa3c:
    // 0x28fa3c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x28fa3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa40: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x28fa40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28fa44: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x28fa44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28fa48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28fa48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fa4c: 0x3e00008  jr          $ra
    ctx->pc = 0x28FA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA4Cu;
        // 0x28fa50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FA54u;
    // 0x28fa54: 0x0  nop
    ctx->pc = 0x28fa54u;
    // NOP
    // 0x28fa58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28fa58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28fa5c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x28fa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x28fa60: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x28fa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x28fa64: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28fa64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa68: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x28fa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x28fa6c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28fa6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa70: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x28fa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x28fa74: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x28fa74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28fa78:
    // 0x28fa78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28fa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28fa7c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28fa7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa80: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28fa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28fa84: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x28fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x28fa88: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FA88u;
    {
        const bool branch_taken_0x28fa88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA88u;
        // 0x28fa8c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa88) {
            ctx->pc = 0x28FA98u;
            goto label_28fa98;
        }
    }
    ctx->pc = 0x28FA90u;
    // 0x28fa90: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x28FA90u;
    {
        const bool branch_taken_0x28fa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA90u;
        // 0x28fa94: 0x24082722  addiu       $t0, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa90) {
            ctx->pc = 0x28FB70u;
            goto label_28fb70;
        }
    }
    ctx->pc = 0x28FA98u;
label_28fa98:
    // 0x28fa98: 0x24050103  addiu       $a1, $zero, 0x103
    ctx->pc = 0x28fa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x28fa9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28fa9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28faa0: 0xc0a8186  jal         func_2A0618
    ctx->pc = 0x28FAA0u;
    SET_GPR_U32(ctx, 31, 0x28FAA8u);
    ctx->pc = 0x28FAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAA0u;
    // 0x28faa4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0618u, 0x28FAA0u, 0x28FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAA8u;
label_28faa8:
    // 0x28faa8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28faa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28faac: 0x15000031  bnez        $t0, . + 4 + (0x31 << 2)
    ctx->pc = 0x28FAACu;
    {
        const bool branch_taken_0x28faac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FAACu;
        // 0x28fab0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28faac) {
            ctx->pc = 0x28FB74u;
            goto label_28fb74;
        }
    }
    ctx->pc = 0x28FAB4u;
    // 0x28fab4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fab8: 0x1451002e  bne         $v0, $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x28FAB8u;
    {
        const bool branch_taken_0x28fab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x28FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FAB8u;
        // 0x28fabc: 0x24082711  addiu       $t0, $zero, 0x2711 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fab8) {
            ctx->pc = 0x28FB74u;
            goto label_28fb74;
        }
    }
    ctx->pc = 0x28FAC0u;
    // 0x28fac0: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x28fac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x28fac4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x28fac4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fac8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28fac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28facc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28faccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fad0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28fad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fad4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x28fad4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fad8: 0xc0a8158  jal         func_2A0560
    ctx->pc = 0x28FAD8u;
    SET_GPR_U32(ctx, 31, 0x28FAE0u);
    ctx->pc = 0x28FADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAD8u;
    // 0x28fadc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0560u, 0x28FAD8u, 0x28FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAE0u;
label_28fae0:
    // 0x28fae0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28fae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fae4: 0x51000003  beql        $t0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FAE4u;
    {
        const bool branch_taken_0x28fae4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fae4) {
            ctx->pc = 0x28FAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FAE4u;
            // 0x28fae8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FAF4u;
            goto label_28faf4;
        }
    }
    ctx->pc = 0x28FAECu;
    // 0x28faec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x28FAECu;
    {
        const bool branch_taken_0x28faec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FAECu;
        // 0x28faf0: 0x24082711  addiu       $t0, $zero, 0x2711 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28faec) {
            ctx->pc = 0x28FB70u;
            goto label_28fb70;
        }
    }
    ctx->pc = 0x28FAF4u;
label_28faf4:
    // 0x28faf4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x28faf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28faf8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x28faf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x28fafc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28FAFCu;
    {
        const bool branch_taken_0x28fafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FAFCu;
        // 0x28fb00: 0x2233823  subu        $a3, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fafc) {
            ctx->pc = 0x28FB64u;
            goto label_28fb64;
        }
    }
    ctx->pc = 0x28FB04u;
    // 0x28fb04: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x28fb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x28fb08: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x28fb08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x28fb0c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28FB0Cu;
    {
        const bool branch_taken_0x28fb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB0Cu;
        // 0x28fb10: 0x2466ffff  addiu       $a2, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb0c) {
            ctx->pc = 0x28FB38u;
            goto label_28fb38;
        }
    }
    ctx->pc = 0x28FB14u;
    // 0x28fb14: 0x0  nop
    ctx->pc = 0x28fb14u;
    // NOP
label_28fb18:
    // 0x28fb18: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x28fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x28fb1c: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x28fb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x28fb20: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28fb20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28fb24: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28fb28: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x28fb28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x28fb2c: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x28fb2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x28fb30: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28FB30u;
    {
        const bool branch_taken_0x28fb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB30u;
        // 0x28fb34: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb30) {
            ctx->pc = 0x28FB18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28fb18;
        }
    }
    ctx->pc = 0x28FB38u;
label_28fb38:
    // 0x28fb38: 0x4a2000d  bltzl       $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x28FB38u;
    {
        const bool branch_taken_0x28fb38 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x28fb38) {
            ctx->pc = 0x28FB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FB38u;
            // 0x28fb3c: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FB70u;
            goto label_28fb70;
        }
    }
    ctx->pc = 0x28FB40u;
label_28fb40:
    // 0x28fb40: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x28fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x28fb44: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x28fb44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28fb48: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28fb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28fb4c: 0x0  nop
    ctx->pc = 0x28fb4cu;
    // NOP
    // 0x28fb50: 0x0  nop
    ctx->pc = 0x28fb50u;
    // NOP
    // 0x28fb54: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28FB54u;
    {
        const bool branch_taken_0x28fb54 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x28fb54) {
            ctx->pc = 0x28FB40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28fb40;
        }
    }
    ctx->pc = 0x28FB5Cu;
    // 0x28fb5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28FB5Cu;
    {
        const bool branch_taken_0x28fb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB5Cu;
        // 0x28fb60: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb5c) {
            ctx->pc = 0x28FB70u;
            goto label_28fb70;
        }
    }
    ctx->pc = 0x28FB64u;
label_28fb64:
    // 0x28fb64: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x28fb64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28fb68: 0x24082711  addiu       $t0, $zero, 0x2711
    ctx->pc = 0x28fb68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
    // 0x28fb6c: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x28fb6cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_28fb70:
    // 0x28fb70: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28fb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_28fb74:
    // 0x28fb74: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x28fb74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb78: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x28fb78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28fb7c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x28fb7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28fb80: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x28fb80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28fb84: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x28fb84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28fb88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28fb88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x28FB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB8Cu;
        // 0x28fb90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FB94u;
    // 0x28fb94: 0x0  nop
    ctx->pc = 0x28fb94u;
    // NOP
    // 0x28fb98: 0x3e00008  jr          $ra
    ctx->pc = 0x28FB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB98u;
        // 0x28fb9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FBA0u;
    // 0x28fba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28fba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28fba4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28fba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28fba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28fbac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28fbacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fbb0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28fbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fbb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28fbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28fbb8: 0xc049cb6  jal         func_1272D8
label_28fbbc:
    if (ctx->pc == 0x28FBBCu) {
        ctx->pc = 0x28FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBB8u;
        // 0x28fbbc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FBC0u;
        goto label_28fbc0;
    }
    ctx->pc = 0x28FBB8u;
    SET_GPR_U32(ctx, 31, 0x28FBC0u);
    ctx->pc = 0x28FBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBB8u;
    // 0x28fbbc: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x28FBB8u, 0x28FBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FBC0u;
label_28fbc0:
    // 0x28fbc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FBC0u;
    {
        const bool branch_taken_0x28fbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBC0u;
        // 0x28fbc4: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fbc0) {
            ctx->pc = 0x28FBD0u;
            goto label_28fbd0;
        }
    }
    ctx->pc = 0x28FBC8u;
    // 0x28fbc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28FBC8u;
    {
        const bool branch_taken_0x28fbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBC8u;
        // 0x28fbcc: 0x24022711  addiu       $v0, $zero, 0x2711 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fbc8) {
            ctx->pc = 0x28FBD8u;
            goto label_28fbd8;
        }
    }
    ctx->pc = 0x28FBD0u;
label_28fbd0:
    // 0x28fbd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28fbd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fbd4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28fbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_28fbd8:
    // 0x28fbd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28fbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fbdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28fbdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x28FBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBE0u;
        // 0x28fbe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FBE8u;
    // 0x28fbe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28fbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28fbec: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x28fbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fbf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28fbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28fbf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28fbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fbf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28fbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28fbfc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x28fbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc00: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x28FC00u;
    SET_GPR_U32(ctx, 31, 0x28FC08u);
    ctx->pc = 0x28FC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC00u;
    // 0x28fc04: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x28FC00u, 0x28FC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC08u;
label_28fc08:
    // 0x28fc08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FC08u;
    {
        const bool branch_taken_0x28fc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC08u;
        // 0x28fc0c: 0x24030100  addiu       $v1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc08) {
            ctx->pc = 0x28FC18u;
            goto label_28fc18;
        }
    }
    ctx->pc = 0x28FC10u;
    // 0x28fc10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28FC10u;
    {
        const bool branch_taken_0x28fc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC10u;
        // 0x28fc14: 0x24022711  addiu       $v0, $zero, 0x2711 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc10) {
            ctx->pc = 0x28FC20u;
            goto label_28fc20;
        }
    }
    ctx->pc = 0x28FC18u;
label_28fc18:
    // 0x28fc18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28fc18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28fc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_28fc20:
    // 0x28fc20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28fc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fc24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28fc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fc28: 0x3e00008  jr          $ra
    ctx->pc = 0x28FC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC28u;
        // 0x28fc2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FC30u;
    // 0x28fc30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28fc34: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x28fc34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28fc3c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x28fc3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc40: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x28FC40u;
    {
        const bool branch_taken_0x28fc40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC40u;
        // 0x28fc44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc40) {
            ctx->pc = 0x28FC68u;
            goto label_28fc68;
        }
    }
    ctx->pc = 0x28FC48u;
    // 0x28fc48: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x28fc48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28fc4c: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28FC4Cu;
    {
        const bool branch_taken_0x28fc4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fc4c) {
            ctx->pc = 0x28FC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FC4Cu;
            // 0x28fc50: 0x8ce4001c  lw          $a0, 0x1C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FC6Cu;
            goto label_28fc6c;
        }
    }
    ctx->pc = 0x28FC54u;
    // 0x28fc54: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x28fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x28fc58: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x28fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28fc5c: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x28fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x28fc60: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28FC60u;
    {
        const bool branch_taken_0x28fc60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x28FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC60u;
        // 0x28fc64: 0x24022727  addiu       $v0, $zero, 0x2727 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc60) {
            ctx->pc = 0x28FC84u;
            goto label_28fc84;
        }
    }
    ctx->pc = 0x28FC68u;
label_28fc68:
    // 0x28fc68: 0x8ce4001c  lw          $a0, 0x1C($a3)
    ctx->pc = 0x28fc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_28fc6c:
    // 0x28fc6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28fc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc70: 0xc0a58e8  jal         func_2963A0
    ctx->pc = 0x28FC70u;
    SET_GPR_U32(ctx, 31, 0x28FC78u);
    ctx->pc = 0x28FC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC70u;
    // 0x28fc74: 0x8d070004  lw          $a3, 0x4($t0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2963A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2963A0u, 0x28FC70u, 0x28FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC78u;
label_28fc78:
    // 0x28fc78: 0x24032711  addiu       $v1, $zero, 0x2711
    ctx->pc = 0x28fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
    // 0x28fc7c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x28fc7cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x28fc80: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28fc80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28fc84:
    // 0x28fc84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28fc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fc88: 0x3e00008  jr          $ra
    ctx->pc = 0x28FC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC88u;
        // 0x28fc8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FC90u;
    // 0x28fc90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28fc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28fc94: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x28fc94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28fc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28fc9c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x28fc9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fca0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x28fca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fca4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x28fca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fca8: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x28fca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x28fcac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28fcacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fcb0: 0xc0a5928  jal         func_2964A0
    ctx->pc = 0x28FCB0u;
    SET_GPR_U32(ctx, 31, 0x28FCB8u);
    ctx->pc = 0x28FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FCB0u;
    // 0x28fcb4: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2964A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2964A0u, 0x28FCB0u, 0x28FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCB8u;
label_28fcb8:
    // 0x28fcb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28fcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fcbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28fcbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x28FCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCC0u;
        // 0x28fcc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FCC8u;
    // 0x28fcc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28fcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28fccc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x28fcccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fcd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28fcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28fcd4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x28fcd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fcd8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x28FCD8u;
    {
        const bool branch_taken_0x28fcd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCD8u;
        // 0x28fcdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fcd8) {
            ctx->pc = 0x28FD00u;
            goto label_28fd00;
        }
    }
    ctx->pc = 0x28FCE0u;
    // 0x28fce0: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x28fce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28fce4: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28FCE4u;
    {
        const bool branch_taken_0x28fce4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fce4) {
            ctx->pc = 0x28FCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FCE4u;
            // 0x28fce8: 0x8ce4001c  lw          $a0, 0x1C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FD04u;
            goto label_28fd04;
        }
    }
    ctx->pc = 0x28FCECu;
    // 0x28fcec: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x28fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x28fcf0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x28fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28fcf4: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x28fcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x28fcf8: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28FCF8u;
    {
        const bool branch_taken_0x28fcf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x28FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCF8u;
        // 0x28fcfc: 0x24022727  addiu       $v0, $zero, 0x2727 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fcf8) {
            ctx->pc = 0x28FD1Cu;
            goto label_28fd1c;
        }
    }
    ctx->pc = 0x28FD00u;
label_28fd00:
    // 0x28fd00: 0x8ce4001c  lw          $a0, 0x1C($a3)
    ctx->pc = 0x28fd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_28fd04:
    // 0x28fd04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28fd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd08: 0xc0a5908  jal         func_296420
    ctx->pc = 0x28FD08u;
    SET_GPR_U32(ctx, 31, 0x28FD10u);
    ctx->pc = 0x28FD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD08u;
    // 0x28fd0c: 0x8d070004  lw          $a3, 0x4($t0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296420u, 0x28FD08u, 0x28FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD10u;
label_28fd10:
    // 0x28fd10: 0x24032711  addiu       $v1, $zero, 0x2711
    ctx->pc = 0x28fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
    // 0x28fd14: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x28fd14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x28fd18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28fd18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28fd1c:
    // 0x28fd1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28fd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fd20: 0x3e00008  jr          $ra
    ctx->pc = 0x28FD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD20u;
        // 0x28fd24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FD28u;
    // 0x28fd28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28fd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28fd2c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x28fd2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28fd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28fd34: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x28fd34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd38: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x28fd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd3c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x28fd3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd40: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x28fd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x28fd44: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28fd44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd48: 0xc0a5928  jal         func_2964A0
    ctx->pc = 0x28FD48u;
    SET_GPR_U32(ctx, 31, 0x28FD50u);
    ctx->pc = 0x28FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD48u;
    // 0x28fd4c: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2964A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2964A0u, 0x28FD48u, 0x28FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD50u;
label_28fd50:
    // 0x28fd50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28fd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fd54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28fd54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd58: 0x3e00008  jr          $ra
    ctx->pc = 0x28FD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD58u;
        // 0x28fd5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FD60u;
    // 0x28fd60: 0x3e00008  jr          $ra
    ctx->pc = 0x28FD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD60u;
        // 0x28fd64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FD68u;
    // 0x28fd68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28fd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28fd6c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x28fd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28fd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28fd74: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28fd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28fd78: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28fd78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28fd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28fd80: 0xc049c48  jal         func_127120
    ctx->pc = 0x28FD80u;
    SET_GPR_U32(ctx, 31, 0x28FD88u);
    ctx->pc = 0x28FD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD80u;
    // 0x28fd84: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x28FD80u, 0x28FD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD88u;
label_28fd88:
    // 0x28fd88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FD88u;
    {
        const bool branch_taken_0x28fd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD88u;
        // 0x28fd8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd88) {
            ctx->pc = 0x28FD98u;
            goto label_28fd98;
        }
    }
    ctx->pc = 0x28FD90u;
    // 0x28fd90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28FD90u;
    {
        const bool branch_taken_0x28fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD90u;
        // 0x28fd94: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd90) {
            ctx->pc = 0x28FD9Cu;
            goto label_28fd9c;
        }
    }
    ctx->pc = 0x28FD98u;
label_28fd98:
    // 0x28fd98: 0x24022711  addiu       $v0, $zero, 0x2711
    ctx->pc = 0x28fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
label_28fd9c:
    // 0x28fd9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28fd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28fda0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28fda0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fda4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28fda4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fda8: 0x3e00008  jr          $ra
    ctx->pc = 0x28FDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDA8u;
        // 0x28fdac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FDB0u;
    // 0x28fdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x28FDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDB0u;
        // 0x28fdb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FDB8u;
    // 0x28fdb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28fdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28fdbc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x28fdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28fdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28fdc4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28fdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28fdc8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28fdc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdcc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28fdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28fdd0: 0xc049c48  jal         func_127120
    ctx->pc = 0x28FDD0u;
    SET_GPR_U32(ctx, 31, 0x28FDD8u);
    ctx->pc = 0x28FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FDD0u;
    // 0x28fdd4: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x28FDD0u, 0x28FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDD8u;
label_28fdd8:
    // 0x28fdd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FDD8u;
    {
        const bool branch_taken_0x28fdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDD8u;
        // 0x28fddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fdd8) {
            ctx->pc = 0x28FDE8u;
            goto label_28fde8;
        }
    }
    ctx->pc = 0x28FDE0u;
    // 0x28fde0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28FDE0u;
    {
        const bool branch_taken_0x28fde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDE0u;
        // 0x28fde4: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fde0) {
            ctx->pc = 0x28FDECu;
            goto label_28fdec;
        }
    }
    ctx->pc = 0x28FDE8u;
label_28fde8:
    // 0x28fde8: 0x24022711  addiu       $v0, $zero, 0x2711
    ctx->pc = 0x28fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
label_28fdec:
    // 0x28fdec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28fdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28fdf0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28fdf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fdf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28fdf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x28FDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDF8u;
        // 0x28fdfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FE00u;
    // 0x28fe00: 0x3e00008  jr          $ra
    ctx->pc = 0x28FE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE00u;
        // 0x28fe04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FE08u;
    // 0x28fe08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28fe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28fe0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28fe0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28fe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28fe14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28fe14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe18: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28fe18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28fe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28fe20: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x28FE20u;
    SET_GPR_U32(ctx, 31, 0x28FE28u);
    ctx->pc = 0x28FE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE20u;
    // 0x28fe24: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x28FE20u, 0x28FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE28u;
label_28fe28:
    // 0x28fe28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FE28u;
    {
        const bool branch_taken_0x28fe28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE28u;
        // 0x28fe2c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe28) {
            ctx->pc = 0x28FE38u;
            goto label_28fe38;
        }
    }
    ctx->pc = 0x28FE30u;
    // 0x28fe30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28FE30u;
    {
        const bool branch_taken_0x28fe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE30u;
        // 0x28fe34: 0x24022711  addiu       $v0, $zero, 0x2711 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe30) {
            ctx->pc = 0x28FE40u;
            goto label_28fe40;
        }
    }
    ctx->pc = 0x28FE38u;
label_28fe38:
    // 0x28fe38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28fe38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_28fe40:
    // 0x28fe40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28fe40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fe44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28fe44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fe48: 0x3e00008  jr          $ra
    ctx->pc = 0x28FE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE48u;
        // 0x28fe4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FE50u;
    // 0x28fe50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28fe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28fe54: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x28fe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28fe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28fe5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28fe5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28fe60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28fe64: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x28fe64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe68: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x28FE68u;
    SET_GPR_U32(ctx, 31, 0x28FE70u);
    ctx->pc = 0x28FE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE68u;
    // 0x28fe6c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x28FE68u, 0x28FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE70u;
label_28fe70:
    // 0x28fe70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FE70u;
    {
        const bool branch_taken_0x28fe70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE70u;
        // 0x28fe74: 0x24030100  addiu       $v1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe70) {
            ctx->pc = 0x28FE80u;
            goto label_28fe80;
        }
    }
    ctx->pc = 0x28FE78u;
    // 0x28fe78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28FE78u;
    {
        const bool branch_taken_0x28fe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE78u;
        // 0x28fe7c: 0x24022711  addiu       $v0, $zero, 0x2711 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe78) {
            ctx->pc = 0x28FE88u;
            goto label_28fe88;
        }
    }
    ctx->pc = 0x28FE80u;
label_28fe80:
    // 0x28fe80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28fe80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe84: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_28fe88:
    // 0x28fe88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28fe88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fe8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28fe8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fe90: 0x3e00008  jr          $ra
    ctx->pc = 0x28FE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE90u;
        // 0x28fe94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FE98u;
    // 0x28fe98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28fe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28fe9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28fe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28fea0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28fea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28fea4: 0xc0a8d8a  jal         func_2A3628
    ctx->pc = 0x28FEA4u;
    SET_GPR_U32(ctx, 31, 0x28FEACu);
    ctx->pc = 0x28FEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FEA4u;
    // 0x28fea8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x28FEA4u, 0x28FEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FEACu;
label_28feac:
    // 0x28feac: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x28feacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28feb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28feb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28feb4: 0xc0a8cf4  jal         func_2A33D0
    ctx->pc = 0x28FEB4u;
    SET_GPR_U32(ctx, 31, 0x28FEBCu);
    ctx->pc = 0x28FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FEB4u;
    // 0x28feb8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A33D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A33D0u, 0x28FEB4u, 0x28FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FEBCu;
label_28febc:
    // 0x28febc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28febcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28fec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28fec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fec8: 0x3e00008  jr          $ra
    ctx->pc = 0x28FEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FEC8u;
        // 0x28fecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FED0u;
    // 0x28fed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28fed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28fed4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28fed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28fed8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28fed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28fedc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28fedcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fee0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28fee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28fee4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28fee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fee8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28fee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28feec: 0xc0a8d8a  jal         func_2A3628
    ctx->pc = 0x28FEECu;
    SET_GPR_U32(ctx, 31, 0x28FEF4u);
    ctx->pc = 0x28FEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FEECu;
    // 0x28fef0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x28FEECu, 0x28FEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FEF4u;
label_28fef4:
    // 0x28fef4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28fef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fef8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28fef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fefc: 0xc0a8d02  jal         func_2A3408
    ctx->pc = 0x28FEFCu;
    SET_GPR_U32(ctx, 31, 0x28FF04u);
    ctx->pc = 0x28FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FEFCu;
    // 0x28ff00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3408u, 0x28FEFCu, 0x28FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF04u;
label_28ff04:
    // 0x28ff04: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x28ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x28ff08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28ff08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ff0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ff0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28ff10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ff14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28ff14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ff18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ff18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ff1c: 0x3e00008  jr          $ra
    ctx->pc = 0x28FF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF1Cu;
        // 0x28ff20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FF24u;
    // 0x28ff24: 0x0  nop
    ctx->pc = 0x28ff24u;
    // NOP
    // 0x28ff28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28ff28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28ff2c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x28ff2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x28ff30: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28ff30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28ff34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28ff34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28ff38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28ff3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28ff3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff40: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28ff44: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x28FF44u;
    {
        const bool branch_taken_0x28ff44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF44u;
        // 0x28ff48: 0x24022721  addiu       $v0, $zero, 0x2721 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10017));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff44) {
            ctx->pc = 0x28FFF4u;
            goto label_28fff4;
        }
    }
    ctx->pc = 0x28FF4Cu;
    // 0x28ff4c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x28ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x28ff50: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x28FF50u;
    {
        const bool branch_taken_0x28ff50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF50u;
        // 0x28ff54: 0x24022722  addiu       $v0, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff50) {
            ctx->pc = 0x28FFF4u;
            goto label_28fff4;
        }
    }
    ctx->pc = 0x28FF58u;
    // 0x28ff58: 0xc0a8d8a  jal         func_2A3628
    ctx->pc = 0x28FF58u;
    SET_GPR_U32(ctx, 31, 0x28FF60u);
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x28FF58u, 0x28FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF60u;
label_28ff60:
    // 0x28ff60: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28ff60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ff64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28ff68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ff6c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28ff6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ff70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ff70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28ff74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff78: 0xc0a88fc  jal         func_2A23F0
    ctx->pc = 0x28FF78u;
    SET_GPR_U32(ctx, 31, 0x28FF80u);
    ctx->pc = 0x28FF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF78u;
    // 0x28ff7c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A23F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A23F0u, 0x28FF78u, 0x28FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF80u;
label_28ff80:
    // 0x28ff80: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x28FF80u;
    {
        const bool branch_taken_0x28ff80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF80u;
        // 0x28ff84: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff80) {
            ctx->pc = 0x28FFF8u;
            goto label_28fff8;
        }
    }
    ctx->pc = 0x28FF88u;
    // 0x28ff88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ff88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff8c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x28ff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28ff90: 0x24061001  addiu       $a2, $zero, 0x1001
    ctx->pc = 0x28ff90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x28ff94: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x28ff94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff98: 0x37a80004  ori         $t0, $sp, 0x4
    ctx->pc = 0x28ff98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x28ff9c: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x28FF9Cu;
    SET_GPR_U32(ctx, 31, 0x28FFA4u);
    ctx->pc = 0x28FFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF9Cu;
    // 0x28ffa0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2630u, 0x28FF9Cu, 0x28FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFA4u;
label_28ffa4:
    // 0x28ffa4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28FFA4u;
    {
        const bool branch_taken_0x28ffa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFA4u;
        // 0x28ffa8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffa4) {
            ctx->pc = 0x28FFF8u;
            goto label_28fff8;
        }
    }
    ctx->pc = 0x28FFACu;
    // 0x28ffac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x28ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28ffb0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FFB0u;
    {
        const bool branch_taken_0x28ffb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ffb0) {
            ctx->pc = 0x28FFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FFB0u;
            // 0x28ffb4: 0x8c430010  lw          $v1, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FFC0u;
            goto label_28ffc0;
        }
    }
    ctx->pc = 0x28FFB8u;
    // 0x28ffb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28FFB8u;
    {
        const bool branch_taken_0x28ffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFB8u;
        // 0x28ffbc: 0x24022718  addiu       $v0, $zero, 0x2718 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffb8) {
            ctx->pc = 0x28FFF8u;
            goto label_28fff8;
        }
    }
    ctx->pc = 0x28FFC0u;
label_28ffc0:
    // 0x28ffc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ffc4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28FFC4u;
    {
        const bool branch_taken_0x28ffc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFC4u;
        // 0x28ffc8: 0x2402271b  addiu       $v0, $zero, 0x271B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10011));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffc4) {
            ctx->pc = 0x28FFF4u;
            goto label_28fff4;
        }
    }
    ctx->pc = 0x28FFCCu;
    // 0x28ffcc: 0xc0a8190  jal         func_2A0640
    ctx->pc = 0x28FFCCu;
    SET_GPR_U32(ctx, 31, 0x28FFD4u);
    ctx->pc = 0x2A0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0640u, 0x28FFCCu, 0x28FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFD4u;
label_28ffd4:
    // 0x28ffd4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x28ffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x28ffd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28ffd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffdc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28ffdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ffe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffe4: 0xc0a80dc  jal         func_2A0370
    ctx->pc = 0x28FFE4u;
    SET_GPR_U32(ctx, 31, 0x28FFECu);
    ctx->pc = 0x28FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FFE4u;
    // 0x28ffe8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0370u, 0x28FFE4u, 0x28FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFECu;
label_28ffec:
    // 0x28ffec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28FFECu;
    {
        const bool branch_taken_0x28ffec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFECu;
        // 0x28fff0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffec) {
            ctx->pc = 0x28FFF8u;
            goto label_28fff8;
        }
    }
    ctx->pc = 0x28FFF4u;
label_28fff4:
    // 0x28fff4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28fff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28fff8:
    // 0x28fff8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x28fff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28fffc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28fffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290000: 0x3e00008  jr          $ra
    ctx->pc = 0x290000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290000u;
        // 0x290004: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290008u;
    // 0x290008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29000c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x29000cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290014: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x290014u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290018: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x290018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29001c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x29001cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290020: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x290020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x290024: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x290024u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x290028: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x290028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29002c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x29002cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x290030: 0xc0a8124  jal         func_2A0490
    ctx->pc = 0x290030u;
    SET_GPR_U32(ctx, 31, 0x290038u);
    ctx->pc = 0x290034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290030u;
    // 0x290034: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0490u, 0x290030u, 0x290038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290038u;
label_290038:
    // 0x290038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29003c: 0x3e00008  jr          $ra
    ctx->pc = 0x29003Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29003Cu;
        // 0x290040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29003Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290044u;
    // 0x290044: 0x0  nop
    ctx->pc = 0x290044u;
    // NOP
    // 0x290048: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29004c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29004cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x290050: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x290050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x290054: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x290054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290058: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x290058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29005c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29005cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290060: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x290060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x290064: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x290064u;
    {
        const bool branch_taken_0x290064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x290068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290064u;
        // 0x290068: 0x24022721  addiu       $v0, $zero, 0x2721 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10017));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290064) {
            ctx->pc = 0x290114u;
            goto label_290114;
        }
    }
    ctx->pc = 0x29006Cu;
    // 0x29006c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x29006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x290070: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x290070u;
    {
        const bool branch_taken_0x290070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290070u;
        // 0x290074: 0x24022722  addiu       $v0, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290070) {
            ctx->pc = 0x290114u;
            goto label_290114;
        }
    }
    ctx->pc = 0x290078u;
    // 0x290078: 0xc0a8d8a  jal         func_2A3628
    ctx->pc = 0x290078u;
    SET_GPR_U32(ctx, 31, 0x290080u);
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x290078u, 0x290080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290080u;
label_290080:
    // 0x290080: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x290080u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290088: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x290088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29008c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29008cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290090: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290094: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x290094u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290098: 0xc0a88fc  jal         func_2A23F0
    ctx->pc = 0x290098u;
    SET_GPR_U32(ctx, 31, 0x2900A0u);
    ctx->pc = 0x29009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290098u;
    // 0x29009c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A23F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A23F0u, 0x290098u, 0x2900A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2900A0u;
label_2900a0:
    // 0x2900a0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2900A0u;
    {
        const bool branch_taken_0x2900a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2900A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900A0u;
        // 0x2900a4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900a0) {
            ctx->pc = 0x290118u;
            goto label_290118;
        }
    }
    ctx->pc = 0x2900A8u;
    // 0x2900a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2900a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900ac: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2900acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2900b0: 0x24061001  addiu       $a2, $zero, 0x1001
    ctx->pc = 0x2900b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x2900b4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2900b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900b8: 0x37a80004  ori         $t0, $sp, 0x4
    ctx->pc = 0x2900b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2900bc: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2900BCu;
    SET_GPR_U32(ctx, 31, 0x2900C4u);
    ctx->pc = 0x2900C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2900BCu;
    // 0x2900c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2630u, 0x2900BCu, 0x2900C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2900C4u;
label_2900c4:
    // 0x2900c4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2900C4u;
    {
        const bool branch_taken_0x2900c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2900C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900C4u;
        // 0x2900c8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900c4) {
            ctx->pc = 0x290118u;
            goto label_290118;
        }
    }
    ctx->pc = 0x2900CCu;
    // 0x2900cc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2900ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2900d0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2900D0u;
    {
        const bool branch_taken_0x2900d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2900d0) {
            ctx->pc = 0x2900D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2900D0u;
            // 0x2900d4: 0x8c430010  lw          $v1, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2900E0u;
            goto label_2900e0;
        }
    }
    ctx->pc = 0x2900D8u;
    // 0x2900d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2900D8u;
    {
        const bool branch_taken_0x2900d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2900DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900D8u;
        // 0x2900dc: 0x24022718  addiu       $v0, $zero, 0x2718 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900d8) {
            ctx->pc = 0x290118u;
            goto label_290118;
        }
    }
    ctx->pc = 0x2900E0u;
label_2900e0:
    // 0x2900e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2900e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2900e4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2900E4u;
    {
        const bool branch_taken_0x2900e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2900E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900E4u;
        // 0x2900e8: 0x2402271b  addiu       $v0, $zero, 0x271B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10011));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900e4) {
            ctx->pc = 0x290114u;
            goto label_290114;
        }
    }
    ctx->pc = 0x2900ECu;
    // 0x2900ec: 0xc0a8190  jal         func_2A0640
    ctx->pc = 0x2900ECu;
    SET_GPR_U32(ctx, 31, 0x2900F4u);
    ctx->pc = 0x2A0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0640u, 0x2900ECu, 0x2900F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2900F4u;
label_2900f4:
    // 0x2900f4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2900f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2900f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2900f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2900fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290100: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290104: 0xc0a80dc  jal         func_2A0370
    ctx->pc = 0x290104u;
    SET_GPR_U32(ctx, 31, 0x29010Cu);
    ctx->pc = 0x290108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290104u;
    // 0x290108: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0370u, 0x290104u, 0x29010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29010Cu;
label_29010c:
    // 0x29010c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29010Cu;
    {
        const bool branch_taken_0x29010c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29010Cu;
        // 0x290110: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29010c) {
            ctx->pc = 0x290118u;
            goto label_290118;
        }
    }
    ctx->pc = 0x290114u;
label_290114:
    // 0x290114: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x290114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_290118:
    // 0x290118: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x290118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29011c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29011cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290120: 0x3e00008  jr          $ra
    ctx->pc = 0x290120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290120u;
        // 0x290124: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290128u;
    // 0x290128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29012c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x29012cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290134: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x290134u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290138: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x290138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29013c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x29013cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290140: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x290140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x290144: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x290144u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x290148: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x290148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29014c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x29014cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x290150: 0xc0a80fc  jal         func_2A03F0
    ctx->pc = 0x290150u;
    SET_GPR_U32(ctx, 31, 0x290158u);
    ctx->pc = 0x290154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290150u;
    // 0x290154: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A03F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A03F0u, 0x290150u, 0x290158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290158u;
label_290158:
    // 0x290158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29015c: 0x3e00008  jr          $ra
    ctx->pc = 0x29015Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29015Cu;
        // 0x290160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29015Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290164u;
    // 0x290164: 0x0  nop
    ctx->pc = 0x290164u;
    // NOP
    // 0x290168: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29016c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29016cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x290170: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x290170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x290174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x290174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290178: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x290178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29017c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29017cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290180: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x290180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x290184: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x290184u;
    {
        const bool branch_taken_0x290184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x290188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290184u;
        // 0x290188: 0x24022721  addiu       $v0, $zero, 0x2721 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10017));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290184) {
            ctx->pc = 0x290234u;
            goto label_290234;
        }
    }
    ctx->pc = 0x29018Cu;
    // 0x29018c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x29018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x290190: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x290190u;
    {
        const bool branch_taken_0x290190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290190u;
        // 0x290194: 0x24022722  addiu       $v0, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290190) {
            ctx->pc = 0x290234u;
            goto label_290234;
        }
    }
    ctx->pc = 0x290198u;
    // 0x290198: 0xc0a8d8a  jal         func_2A3628
    ctx->pc = 0x290198u;
    SET_GPR_U32(ctx, 31, 0x2901A0u);
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x290198u, 0x2901A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901A0u;
label_2901a0:
    // 0x2901a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2901a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2901a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2901a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2901ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2901acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2901b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2901b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2901b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901b8: 0xc0a88fc  jal         func_2A23F0
    ctx->pc = 0x2901B8u;
    SET_GPR_U32(ctx, 31, 0x2901C0u);
    ctx->pc = 0x2901BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2901B8u;
    // 0x2901bc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A23F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A23F0u, 0x2901B8u, 0x2901C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901C0u;
label_2901c0:
    // 0x2901c0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2901C0u;
    {
        const bool branch_taken_0x2901c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2901C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901C0u;
        // 0x2901c4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901c0) {
            ctx->pc = 0x290238u;
            goto label_290238;
        }
    }
    ctx->pc = 0x2901C8u;
    // 0x2901c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2901c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901cc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2901ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2901d0: 0x24061001  addiu       $a2, $zero, 0x1001
    ctx->pc = 0x2901d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x2901d4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2901d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901d8: 0x37a80004  ori         $t0, $sp, 0x4
    ctx->pc = 0x2901d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2901dc: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2901DCu;
    SET_GPR_U32(ctx, 31, 0x2901E4u);
    ctx->pc = 0x2901E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2901DCu;
    // 0x2901e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2630u, 0x2901DCu, 0x2901E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901E4u;
label_2901e4:
    // 0x2901e4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2901E4u;
    {
        const bool branch_taken_0x2901e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2901E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901E4u;
        // 0x2901e8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901e4) {
            ctx->pc = 0x290238u;
            goto label_290238;
        }
    }
    ctx->pc = 0x2901ECu;
    // 0x2901ec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2901ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2901f0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2901F0u;
    {
        const bool branch_taken_0x2901f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2901f0) {
            ctx->pc = 0x2901F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2901F0u;
            // 0x2901f4: 0x8c430010  lw          $v1, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290200u;
            goto label_290200;
        }
    }
    ctx->pc = 0x2901F8u;
    // 0x2901f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2901F8u;
    {
        const bool branch_taken_0x2901f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2901FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901F8u;
        // 0x2901fc: 0x24022718  addiu       $v0, $zero, 0x2718 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901f8) {
            ctx->pc = 0x290238u;
            goto label_290238;
        }
    }
    ctx->pc = 0x290200u;
label_290200:
    // 0x290200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290204: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x290204u;
    {
        const bool branch_taken_0x290204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x290208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290204u;
        // 0x290208: 0x2402271b  addiu       $v0, $zero, 0x271B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10011));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290204) {
            ctx->pc = 0x290234u;
            goto label_290234;
        }
    }
    ctx->pc = 0x29020Cu;
    // 0x29020c: 0xc0a8190  jal         func_2A0640
    ctx->pc = 0x29020Cu;
    SET_GPR_U32(ctx, 31, 0x290214u);
    ctx->pc = 0x2A0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0640u, 0x29020Cu, 0x290214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290214u;
label_290214:
    // 0x290214: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x290214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x290218: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x290218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29021c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29021cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290220: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290224: 0xc0a80dc  jal         func_2A0370
    ctx->pc = 0x290224u;
    SET_GPR_U32(ctx, 31, 0x29022Cu);
    ctx->pc = 0x290228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290224u;
    // 0x290228: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0370u, 0x290224u, 0x29022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29022Cu;
label_29022c:
    // 0x29022c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29022Cu;
    {
        const bool branch_taken_0x29022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29022Cu;
        // 0x290230: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29022c) {
            ctx->pc = 0x290238u;
            goto label_290238;
        }
    }
    ctx->pc = 0x290234u;
label_290234:
    // 0x290234: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x290234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_290238:
    // 0x290238: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x290238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29023c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29023cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290240: 0x3e00008  jr          $ra
    ctx->pc = 0x290240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290240u;
        // 0x290244: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290248u;
    // 0x290248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29024c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x29024cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290254: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x290254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290258: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x290258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29025c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x29025cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290260: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x290260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x290264: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x290264u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x290268: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x290268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29026c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x29026cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x290270: 0xc0a80e8  jal         func_2A03A0
    ctx->pc = 0x290270u;
    SET_GPR_U32(ctx, 31, 0x290278u);
    ctx->pc = 0x290274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290270u;
    // 0x290274: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A03A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A03A0u, 0x290270u, 0x290278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290278u;
label_290278:
    // 0x290278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29027c: 0x3e00008  jr          $ra
    ctx->pc = 0x29027Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29027Cu;
        // 0x290280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29027Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290284u;
    // 0x290284: 0x0  nop
    ctx->pc = 0x290284u;
    // NOP
    // 0x290288: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29028c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29028cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x290290: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x290290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x290294: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x290294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290298: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x290298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29029c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29029cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2902a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2902a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2902a4: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2902A4u;
    {
        const bool branch_taken_0x2902a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902A4u;
        // 0x2902a8: 0x24022721  addiu       $v0, $zero, 0x2721 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10017));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902a4) {
            ctx->pc = 0x290354u;
            goto label_290354;
        }
    }
    ctx->pc = 0x2902ACu;
    // 0x2902ac: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2902acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2902b0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2902B0u;
    {
        const bool branch_taken_0x2902b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902B0u;
        // 0x2902b4: 0x24022722  addiu       $v0, $zero, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10018));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902b0) {
            ctx->pc = 0x290354u;
            goto label_290354;
        }
    }
    ctx->pc = 0x2902B8u;
    // 0x2902b8: 0xc0a8d8a  jal         func_2A3628
    ctx->pc = 0x2902B8u;
    SET_GPR_U32(ctx, 31, 0x2902C0u);
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x2902B8u, 0x2902C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2902C0u;
label_2902c0:
    // 0x2902c0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2902c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2902c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2902c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2902c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2902c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2902cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2902ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2902d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2902d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2902d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2902d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2902d8: 0xc0a88fc  jal         func_2A23F0
    ctx->pc = 0x2902D8u;
    SET_GPR_U32(ctx, 31, 0x2902E0u);
    ctx->pc = 0x2902DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2902D8u;
    // 0x2902dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A23F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A23F0u, 0x2902D8u, 0x2902E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2902E0u;
label_2902e0:
    // 0x2902e0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2902E0u;
    {
        const bool branch_taken_0x2902e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2902E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902E0u;
        // 0x2902e4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902e0) {
            ctx->pc = 0x290358u;
            goto label_290358;
        }
    }
    ctx->pc = 0x2902E8u;
    // 0x2902e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2902e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2902ec: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2902ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2902f0: 0x24061001  addiu       $a2, $zero, 0x1001
    ctx->pc = 0x2902f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x2902f4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2902f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2902f8: 0x37a80004  ori         $t0, $sp, 0x4
    ctx->pc = 0x2902f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2902fc: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2902FCu;
    SET_GPR_U32(ctx, 31, 0x290304u);
    ctx->pc = 0x290300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2902FCu;
    // 0x290300: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2630u, 0x2902FCu, 0x290304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290304u;
label_290304:
    // 0x290304: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x290304u;
    {
        const bool branch_taken_0x290304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290304u;
        // 0x290308: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290304) {
            ctx->pc = 0x290358u;
            goto label_290358;
        }
    }
    ctx->pc = 0x29030Cu;
    // 0x29030c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x29030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x290310: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x290310u;
    {
        const bool branch_taken_0x290310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290310) {
            ctx->pc = 0x290314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290310u;
            // 0x290314: 0x8c430010  lw          $v1, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290320u;
            goto label_290320;
        }
    }
    ctx->pc = 0x290318u;
    // 0x290318: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x290318u;
    {
        const bool branch_taken_0x290318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290318u;
        // 0x29031c: 0x24022718  addiu       $v0, $zero, 0x2718 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290318) {
            ctx->pc = 0x290358u;
            goto label_290358;
        }
    }
    ctx->pc = 0x290320u;
label_290320:
    // 0x290320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290324: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x290324u;
    {
        const bool branch_taken_0x290324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x290328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290324u;
        // 0x290328: 0x2402271b  addiu       $v0, $zero, 0x271B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10011));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290324) {
            ctx->pc = 0x290354u;
            goto label_290354;
        }
    }
    ctx->pc = 0x29032Cu;
    // 0x29032c: 0xc0a8190  jal         func_2A0640
    ctx->pc = 0x29032Cu;
    SET_GPR_U32(ctx, 31, 0x290334u);
    ctx->pc = 0x2A0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0640u, 0x29032Cu, 0x290334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290334u;
label_290334:
    // 0x290334: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x290334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x290338: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x290338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29033c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29033cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290340: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x290340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290344: 0xc0a80dc  jal         func_2A0370
    ctx->pc = 0x290344u;
    SET_GPR_U32(ctx, 31, 0x29034Cu);
    ctx->pc = 0x290348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290344u;
    // 0x290348: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0370u, 0x290344u, 0x29034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29034Cu;
label_29034c:
    // 0x29034c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29034Cu;
    {
        const bool branch_taken_0x29034c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29034Cu;
        // 0x290350: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29034c) {
            ctx->pc = 0x290358u;
            goto label_290358;
        }
    }
    ctx->pc = 0x290354u;
label_290354:
    // 0x290354: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x290354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_290358:
    // 0x290358: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x290358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29035c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29035cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290360: 0x3e00008  jr          $ra
    ctx->pc = 0x290360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290360u;
        // 0x290364: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290368u;
    // 0x290368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29036c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x29036cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290374: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x290374u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290378: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x290378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29037c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x29037cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290380: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x290380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x290384: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x290384u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x290388: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x290388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29038c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x29038cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x290390: 0xc0a8138  jal         func_2A04E0
    ctx->pc = 0x290390u;
    SET_GPR_U32(ctx, 31, 0x290398u);
    ctx->pc = 0x290394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290390u;
    // 0x290394: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A04E0u, 0x290390u, 0x290398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290398u;
label_290398:
    // 0x290398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29039c: 0x3e00008  jr          $ra
    ctx->pc = 0x29039Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2903A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29039Cu;
        // 0x2903a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29039Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2903A4u;
    // 0x2903a4: 0x0  nop
    ctx->pc = 0x2903a4u;
    // NOP
    // 0x2903a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2903a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2903ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2903acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2903b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2903b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2903b4: 0xc0a4100  jal         func_290400
    ctx->pc = 0x2903B4u;
    SET_GPR_U32(ctx, 31, 0x2903BCu);
    ctx->pc = 0x2903B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2903B4u;
    // 0x2903b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290400u, 0x2903B4u, 0x2903BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903BCu;
label_2903bc:
    // 0x2903bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2903bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2903c0: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2903C0u;
    {
        const bool branch_taken_0x2903c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2903C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2903C0u;
        // 0x2903c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903c0) {
            ctx->pc = 0x2903F0u;
            goto label_2903f0;
        }
    }
    ctx->pc = 0x2903C8u;
    // 0x2903c8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2903c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2903cc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2903ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2903d0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2903d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2903d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2903d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2903d8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x2903d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x2903dc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2903dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2903e0: 0xac640080  sw          $a0, 0x80($v1)
    ctx->pc = 0x2903e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 4));
    // 0x2903e4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2903e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2903e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2903e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2903ec: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x2903ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_2903f0:
    // 0x2903f0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2903f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2903f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2903f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2903f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2903F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2903FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2903F8u;
        // 0x2903fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2903F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290400u;
}
