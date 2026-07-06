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

// Function: sub_0027F700
// Address: 0x27f700 - 0x27f7e0
void sub_0027F700_0x27f700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F700_0x27f700");
#endif

    switch (ctx->pc) {
        case 0x27f750u: goto label_27f750;
        case 0x27f768u: goto label_27f768;
        case 0x27f794u: goto label_27f794;
        case 0x27f7a4u: goto label_27f7a4;
        default: break;
    }

    ctx->pc = 0x27f700u;

    // 0x27f700: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27f700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27f704: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x27f704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27f708: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27f708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27f70c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x27f70cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f710: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27f710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27f714: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27f714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f718: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27f718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27f71c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27f71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f720: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27f720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x27f724: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x27f724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f728: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27f728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27f72c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27f72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27f730: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x27F730u;
    {
        const bool branch_taken_0x27f730 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F730u;
        // 0x27f734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f730) {
            ctx->pc = 0x27F7BCu;
            goto label_27f7bc;
        }
    }
    ctx->pc = 0x27F738u;
    // 0x27f738: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27f738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27f73c: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F73Cu;
    {
        const bool branch_taken_0x27f73c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f73c) {
            ctx->pc = 0x27F740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F73Cu;
            // 0x27f740: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F758u;
            goto label_27f758;
        }
    }
    ctx->pc = 0x27F744u;
    // 0x27f744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f748: 0xc09fc32  jal         func_27F0C8
    ctx->pc = 0x27F748u;
    SET_GPR_U32(ctx, 31, 0x27F750u);
    ctx->pc = 0x27F74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F748u;
    // 0x27f74c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C8u, 0x27F748u, 0x27F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F750u;
label_27f750:
    // 0x27f750: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x27F750u;
    {
        const bool branch_taken_0x27f750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F750u;
        // 0x27f754: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f750) {
            ctx->pc = 0x27F7C0u;
            goto label_27f7c0;
        }
    }
    ctx->pc = 0x27F758u;
label_27f758:
    // 0x27f758: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27f758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f75c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27f75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f760: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x27F760u;
    SET_GPR_U32(ctx, 31, 0x27F768u);
    ctx->pc = 0x27F764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F760u;
    // 0x27f764: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x27F760u, 0x27F768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F768u;
label_27f768:
    // 0x27f768: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x27F768u;
    {
        const bool branch_taken_0x27f768 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F768u;
        // 0x27f76c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f768) {
            ctx->pc = 0x27F7BCu;
            goto label_27f7bc;
        }
    }
    ctx->pc = 0x27F770u;
    // 0x27f770: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x27f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27f774: 0x2605fff0  addiu       $a1, $s0, -0x10
    ctx->pc = 0x27f774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x27f778: 0x2ca50002  sltiu       $a1, $a1, 0x2
    ctx->pc = 0x27f778u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x27f77c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27f77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f780: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x27f780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x27f784: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27f784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f788: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x27f788u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f78c: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x27F78Cu;
    SET_GPR_U32(ctx, 31, 0x27F794u);
    ctx->pc = 0x27F790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F78Cu;
    // 0x27f790: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x27F78Cu, 0x27F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F794u;
label_27f794:
    // 0x27f794: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x27f794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f798: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x27f798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27f79c: 0xc049c48  jal         func_127120
    ctx->pc = 0x27F79Cu;
    SET_GPR_U32(ctx, 31, 0x27F7A4u);
    ctx->pc = 0x27F7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F79Cu;
    // 0x27f7a0: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x27F79Cu, 0x27F7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F7A4u;
label_27f7a4:
    // 0x27f7a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27f7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27f7a8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x27f7a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f7ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f7b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27f7b4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x27f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x27f7b8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x27f7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_27f7bc:
    // 0x27f7bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27f7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_27f7c0:
    // 0x27f7c0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x27f7c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f7c4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27f7c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f7c8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27f7c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f7cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27f7ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f7d0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27f7d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f7d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27f7d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x27F7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F7D8u;
        // 0x27f7dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F7E0u;
}
