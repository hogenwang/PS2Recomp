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

// Function: sub_00298770
// Address: 0x298770 - 0x298860
void sub_00298770_0x298770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298770_0x298770");
#endif

    switch (ctx->pc) {
        case 0x2987a0u: goto label_2987a0;
        case 0x2987b8u: goto label_2987b8;
        case 0x2987c8u: goto label_2987c8;
        case 0x2987e0u: goto label_2987e0;
        default: break;
    }

    ctx->pc = 0x298770u;

    // 0x298770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x298770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x298774: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x298774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x298778: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x298778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29877c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29877cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298780: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x298780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x298784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298788: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x298788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29878c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x29878cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x298790: 0xde040030  ld          $a0, 0x30($s0)
    ctx->pc = 0x298790u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x298794: 0x9e05000c  lwu         $a1, 0xC($s0)
    ctx->pc = 0x298794u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x298798: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x298798u;
    SET_GPR_U32(ctx, 31, 0x2987A0u);
    ctx->pc = 0x29879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298798u;
    // 0x29879c: 0x42238  dsll        $a0, $a0, 8 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x298798u, 0x2987A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987A0u;
label_2987a0:
    // 0x2987a0: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x2987a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2987a4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2987a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2987a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2987A8u;
    {
        const bool branch_taken_0x2987a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2987ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987A8u;
        // 0x2987ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987a8) {
            ctx->pc = 0x2987BCu;
            goto label_2987bc;
        }
    }
    ctx->pc = 0x2987B0u;
    // 0x2987b0: 0xc0a6284  jal         func_298A10
    ctx->pc = 0x2987B0u;
    SET_GPR_U32(ctx, 31, 0x2987B8u);
    ctx->pc = 0x2987B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987B0u;
    // 0x2987b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298A10u, 0x2987B0u, 0x2987B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987B8u;
label_2987b8:
    // 0x2987b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2987b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2987bc:
    // 0x2987bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2987bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987c0: 0xc0a632c  jal         func_298CB0
    ctx->pc = 0x2987C0u;
    SET_GPR_U32(ctx, 31, 0x2987C8u);
    ctx->pc = 0x2987C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987C0u;
    // 0x2987c4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298CB0u, 0x2987C0u, 0x2987C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987C8u;
label_2987c8:
    // 0x2987c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2987c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2987ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2987d0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2987D0u;
    {
        const bool branch_taken_0x2987d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2987d0) {
            ctx->pc = 0x2987D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2987D0u;
            // 0x2987d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298830u;
            goto label_298830;
        }
    }
    ctx->pc = 0x2987D8u;
    // 0x2987d8: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2987D8u;
    SET_GPR_U32(ctx, 31, 0x2987E0u);
    ctx->pc = 0x2987DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987D8u;
    // 0x2987dc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2987D8u, 0x2987E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987E0u;
label_2987e0:
    // 0x2987e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2987e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987e4: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2987E4u;
    {
        const bool branch_taken_0x2987e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2987e4) {
            ctx->pc = 0x2987E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2987E4u;
            // 0x2987e8: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298800u;
            goto label_298800;
        }
    }
    ctx->pc = 0x2987ECu;
    // 0x2987ec: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x2987ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x2987f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2987f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2987f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2987f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2987F8u;
    {
        const bool branch_taken_0x2987f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2987FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987F8u;
        // 0x2987fc: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987f8) {
            ctx->pc = 0x298844u;
            goto label_298844;
        }
    }
    ctx->pc = 0x298800u;
label_298800:
    // 0x298800: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x298800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298804: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x298804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x298808: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x298808u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29880c: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x29880cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x298810: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x298810u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x298814: 0xde020068  ld          $v0, 0x68($s0)
    ctx->pc = 0x298814u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x298818: 0xde030030  ld          $v1, 0x30($s0)
    ctx->pc = 0x298818u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x29881c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x29881cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x298820: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x298820u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x298824: 0xfe020068  sd          $v0, 0x68($s0)
    ctx->pc = 0x298824u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 2));
    // 0x298828: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x298828u;
    {
        const bool branch_taken_0x298828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298828u;
        // 0x29882c: 0xfe030030  sd          $v1, 0x30($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298828) {
            ctx->pc = 0x298840u;
            goto label_298840;
        }
    }
    ctx->pc = 0x298830u;
label_298830:
    // 0x298830: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x298830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x298834: 0xde020070  ld          $v0, 0x70($s0)
    ctx->pc = 0x298834u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x298838: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x298838u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x29883c: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x29883cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
label_298840:
    // 0x298840: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x298840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_298844:
    // 0x298844: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x298844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298848: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x298848u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29884c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29884cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298850: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x298850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298854: 0x3e00008  jr          $ra
    ctx->pc = 0x298854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298854u;
        // 0x298858: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29885Cu;
    // 0x29885c: 0x0  nop
    ctx->pc = 0x29885cu;
    // NOP
    if (ctx->pc == 0x29885cu) { ctx->pc = 0x298860u; }
}
