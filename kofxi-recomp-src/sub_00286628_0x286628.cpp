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

// Function: sub_00286628
// Address: 0x286628 - 0x286718
void sub_00286628_0x286628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286628_0x286628");
#endif

    switch (ctx->pc) {
        case 0x28666cu: goto label_28666c;
        case 0x286678u: goto label_286678;
        case 0x286684u: goto label_286684;
        case 0x28669cu: goto label_28669c;
        case 0x2866acu: goto label_2866ac;
        case 0x2866e0u: goto label_2866e0;
        default: break;
    }

    ctx->pc = 0x286628u;

    // 0x286628: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x286628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x28662c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28662cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x286630: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x286630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286634: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x286634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x286638: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x286638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x28663c: 0x14202f  dsubu       $a0, $zero, $s4
    ctx->pc = 0x28663cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 20));
    // 0x286640: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x286640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x286644: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x286644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286648: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x286648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28664c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28664cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286650: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x286650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x286654: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x286654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286658: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x286658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28665c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x28665cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286664: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x286664u;
    SET_GPR_U32(ctx, 31, 0x28666Cu);
    ctx->pc = 0x286668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286664u;
    // 0x286668: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x286664u, 0x28666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28666Cu;
label_28666c:
    // 0x28666c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28666cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286670: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x286670u;
    {
        const bool branch_taken_0x286670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x286674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286670u;
        // 0x286674: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286670) {
            ctx->pc = 0x2866C0u;
            goto label_2866c0;
        }
    }
    ctx->pc = 0x286678u;
label_286678:
    // 0x286678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x286678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28667c: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x28667Cu;
    SET_GPR_U32(ctx, 31, 0x286684u);
    ctx->pc = 0x286680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28667Cu;
    // 0x286680: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x28667Cu, 0x286684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286684u;
label_286684:
    // 0x286684: 0x16b023  negu        $s6, $s6
    ctx->pc = 0x286684u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
    // 0x286688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28668c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28668cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286694: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x286694u;
    SET_GPR_U32(ctx, 31, 0x28669Cu);
    ctx->pc = 0x286698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286694u;
    // 0x286698: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x286694u, 0x28669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28669Cu;
label_28669c:
    // 0x28669c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28669cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2866a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866a4: 0xc048082  jal         func_120208
    ctx->pc = 0x2866A4u;
    SET_GPR_U32(ctx, 31, 0x2866ACu);
    ctx->pc = 0x2866A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2866A4u;
    // 0x2866a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2866A4u, 0x2866ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2866ACu;
label_2866ac:
    // 0x2866ac: 0x53102d  daddu       $v0, $v0, $s3
    ctx->pc = 0x2866acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 19));
    // 0x2866b0: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x2866b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866b4: 0x1620fff0  bnez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2866B4u;
    {
        const bool branch_taken_0x2866b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2866B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866B4u;
        // 0x2866b8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866b4) {
            ctx->pc = 0x286678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_286678;
        }
    }
    ctx->pc = 0x2866BCu;
    // 0x2866bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2866bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2866c0:
    // 0x2866c0: 0x293202f  dsubu       $a0, $s4, $s3
    ctx->pc = 0x2866c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) - GPR_U64(ctx, 19));
    // 0x2866c4: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x2866c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2866c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2866c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2866cc: 0x16430006  bne         $s2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2866CCu;
    {
        const bool branch_taken_0x2866cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x2866D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866CCu;
        // 0x2866d0: 0x82980a  movz        $s3, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866cc) {
            ctx->pc = 0x2866E8u;
            goto label_2866e8;
        }
    }
    ctx->pc = 0x2866D4u;
    // 0x2866d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2866d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866d8: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x2866D8u;
    SET_GPR_U32(ctx, 31, 0x2866E0u);
    ctx->pc = 0x2866DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2866D8u;
    // 0x2866dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x2866D8u, 0x2866E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2866E0u;
label_2866e0:
    // 0x2866e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2866E0u;
    {
        const bool branch_taken_0x2866e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2866E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866E0u;
        // 0x2866e4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866e0) {
            ctx->pc = 0x2866F0u;
            goto label_2866f0;
        }
    }
    ctx->pc = 0x2866E8u;
label_2866e8:
    // 0x2866e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2866e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2866ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2866f0:
    // 0x2866f0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2866f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2866f4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2866f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2866f8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2866f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2866fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2866fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286700: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x286700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286704: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28670c: 0x3e00008  jr          $ra
    ctx->pc = 0x28670Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28670Cu;
        // 0x286710: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28670Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286714u;
    // 0x286714: 0x0  nop
    ctx->pc = 0x286714u;
    // NOP
}
