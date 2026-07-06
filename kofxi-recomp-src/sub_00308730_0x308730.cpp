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

// Function: sub_00308730
// Address: 0x308730 - 0x3087c0
void sub_00308730_0x308730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308730_0x308730");
#endif

    switch (ctx->pc) {
        case 0x308750u: goto label_308750;
        case 0x308770u: goto label_308770;
        case 0x308794u: goto label_308794;
        default: break;
    }

    ctx->pc = 0x308730u;

label_308730:
    // 0x308730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x308730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x308734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x308734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x308738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x308738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30873c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30873cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x308740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x308740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308744: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x308744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x308748: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x308748u;
    SET_GPR_U32(ctx, 31, 0x308750u);
    ctx->pc = 0x30874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308748u;
    // 0x30874c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x308748u, 0x308750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308750u;
label_308750:
    // 0x308750: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x308750u;
    {
        const bool branch_taken_0x308750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308750) {
            ctx->pc = 0x308754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308750u;
            // 0x308754: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308760u;
            goto label_308760;
        }
    }
    ctx->pc = 0x308758u;
    // 0x308758: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x308758u;
    {
        const bool branch_taken_0x308758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308758u;
        // 0x30875c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308758) {
            ctx->pc = 0x3087A8u;
            goto label_3087a8;
        }
    }
    ctx->pc = 0x308760u;
label_308760:
    // 0x308760: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x308760u;
    {
        const bool branch_taken_0x308760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308760) {
            ctx->pc = 0x308764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308760u;
            // 0x308764: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308784u;
            goto label_308784;
        }
    }
    ctx->pc = 0x308768u;
    // 0x308768: 0xc0c21cc  jal         func_308730
    ctx->pc = 0x308768u;
    SET_GPR_U32(ctx, 31, 0x308770u);
    ctx->pc = 0x30876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308768u;
    // 0x30876c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308730u;
    goto label_308730;
    ctx->pc = 0x308770u;
label_308770:
    // 0x308770: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308770u;
    {
        const bool branch_taken_0x308770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308770) {
            ctx->pc = 0x308780u;
            goto label_308780;
        }
    }
    ctx->pc = 0x308778u;
    // 0x308778: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x308778u;
    {
        const bool branch_taken_0x308778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308778u;
        // 0x30877c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308778) {
            ctx->pc = 0x3087ACu;
            goto label_3087ac;
        }
    }
    ctx->pc = 0x308780u;
label_308780:
    // 0x308780: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x308780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_308784:
    // 0x308784: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x308784u;
    {
        const bool branch_taken_0x308784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308784) {
            ctx->pc = 0x308788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308784u;
            // 0x308788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3087A8u;
            goto label_3087a8;
        }
    }
    ctx->pc = 0x30878Cu;
    // 0x30878c: 0xc0c21cc  jal         func_308730
    ctx->pc = 0x30878Cu;
    SET_GPR_U32(ctx, 31, 0x308794u);
    ctx->pc = 0x308790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30878Cu;
    // 0x308790: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308730u;
    goto label_308730;
    ctx->pc = 0x308794u;
label_308794:
    // 0x308794: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308794u;
    {
        const bool branch_taken_0x308794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308794) {
            ctx->pc = 0x3087A4u;
            goto label_3087a4;
        }
    }
    ctx->pc = 0x30879Cu;
    // 0x30879c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30879Cu;
    {
        const bool branch_taken_0x30879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30879c) {
            ctx->pc = 0x3087A8u;
            goto label_3087a8;
        }
    }
    ctx->pc = 0x3087A4u;
label_3087a4:
    // 0x3087a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3087a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3087a8:
    // 0x3087a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3087a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3087ac:
    // 0x3087ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3087acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3087b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3087b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3087b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3087B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3087B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087B4u;
        // 0x3087b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3087B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3087BCu;
    // 0x3087bc: 0x0  nop
    ctx->pc = 0x3087bcu;
    // NOP
    if (ctx->pc == 0x3087bcu) { ctx->pc = 0x3087c0u; }
}
