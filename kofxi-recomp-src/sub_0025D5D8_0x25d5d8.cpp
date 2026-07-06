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

// Function: sub_0025D5D8
// Address: 0x25d5d8 - 0x25d6a0
void sub_0025D5D8_0x25d5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D5D8_0x25d5d8");
#endif

    switch (ctx->pc) {
        case 0x25d618u: goto label_25d618;
        case 0x25d65cu: goto label_25d65c;
        case 0x25d668u: goto label_25d668;
        default: break;
    }

    ctx->pc = 0x25d5d8u;

    // 0x25d5d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x25d5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x25d5dc: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x25d5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x25d5e0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x25d5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x25d5e4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x25d5e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d5e8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x25d5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x25d5ec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x25d5ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d5f0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x25d5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x25d5f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x25d5f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d5f8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x25d5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x25d5fc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x25d5fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d600: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x25d600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x25d604: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x25d604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d608: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x25d608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x25d60c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x25d60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x25d610: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25D610u;
    SET_GPR_U32(ctx, 31, 0x25D618u);
    ctx->pc = 0x25D614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D610u;
    // 0x25d614: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25D610u, 0x25D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D618u;
label_25d618:
    // 0x25d618: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d61c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25D61Cu;
    {
        const bool branch_taken_0x25d61c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D61Cu;
        // 0x25d620: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d61c) {
            ctx->pc = 0x25D670u;
            goto label_25d670;
        }
    }
    ctx->pc = 0x25D624u;
    // 0x25d624: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d628: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x25d628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x25d62c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25d62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d630: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x25d630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x25d634: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25d634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d638: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x25d638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x25d63c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d640: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x25d640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x25d644: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x25d644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d648: 0xafb50020  sw          $s5, 0x20($sp)
    ctx->pc = 0x25d648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 21));
    // 0x25d64c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x25d64cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d650: 0xafb60024  sw          $s6, 0x24($sp)
    ctx->pc = 0x25d650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 22));
    // 0x25d654: 0xc0975ea  jal         func_25D7A8
    ctx->pc = 0x25D654u;
    SET_GPR_U32(ctx, 31, 0x25D65Cu);
    ctx->pc = 0x25D658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D654u;
    // 0x25d658: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D7A8u, 0x25D654u, 0x25D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D65Cu;
label_25d65c:
    // 0x25d65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d660: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25D660u;
    SET_GPR_U32(ctx, 31, 0x25D668u);
    ctx->pc = 0x25D664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D660u;
    // 0x25d664: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25D660u, 0x25D668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D668u;
label_25d668:
    // 0x25d668: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D668u;
    {
        const bool branch_taken_0x25d668 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D668u;
        // 0x25d66c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d668) {
            ctx->pc = 0x25D674u;
            goto label_25d674;
        }
    }
    ctx->pc = 0x25D670u;
label_25d670:
    // 0x25d670: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25d670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25d674:
    // 0x25d674: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x25d674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25d678: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x25d678u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25d67c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x25d67cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25d680: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x25d680u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25d684: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x25d684u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25d688: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x25d688u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25d68c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x25d68cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25d690: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x25d690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d694: 0x3e00008  jr          $ra
    ctx->pc = 0x25D694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D694u;
        // 0x25d698: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D69Cu;
    // 0x25d69c: 0x0  nop
    ctx->pc = 0x25d69cu;
    // NOP
}
