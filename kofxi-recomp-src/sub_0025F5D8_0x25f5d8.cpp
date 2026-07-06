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

// Function: sub_0025F5D8
// Address: 0x25f5d8 - 0x25f668
void sub_0025F5D8_0x25f5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F5D8_0x25f5d8");
#endif

    switch (ctx->pc) {
        case 0x25f5fcu: goto label_25f5fc;
        case 0x25f610u: goto label_25f610;
        case 0x25f61cu: goto label_25f61c;
        case 0x25f634u: goto label_25f634;
        case 0x25f63cu: goto label_25f63c;
        case 0x25f648u: goto label_25f648;
        default: break;
    }

    ctx->pc = 0x25f5d8u;

    // 0x25f5d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25f5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25f5dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25f5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25f5e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25f5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25f5e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25f5e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f5e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25f5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25f5ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25f5ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f5f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25f5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25f5f4: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25F5F4u;
    SET_GPR_U32(ctx, 31, 0x25F5FCu);
    ctx->pc = 0x25F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5F4u;
    // 0x25f5f8: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25F5F4u, 0x25F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5FCu;
label_25f5fc:
    // 0x25f5fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25f5fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f600: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x25F600u;
    {
        const bool branch_taken_0x25f600 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F600u;
        // 0x25f604: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f600) {
            ctx->pc = 0x25F648u;
            goto label_25f648;
        }
    }
    ctx->pc = 0x25F608u;
    // 0x25f608: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25F608u;
    SET_GPR_U32(ctx, 31, 0x25F610u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x25F608u, 0x25F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F610u;
label_25f610:
    // 0x25f610: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25f610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f614: 0xc08c0ca  jal         func_230328
    ctx->pc = 0x25F614u;
    SET_GPR_U32(ctx, 31, 0x25F61Cu);
    ctx->pc = 0x25F618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F614u;
    // 0x25f618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x25F614u, 0x25F61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F61Cu;
label_25f61c:
    // 0x25f61c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F61Cu;
    {
        const bool branch_taken_0x25f61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f61c) {
            ctx->pc = 0x25F62Cu;
            goto label_25f62c;
        }
    }
    ctx->pc = 0x25F624u;
    // 0x25f624: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F624u;
    {
        const bool branch_taken_0x25f624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F624u;
        // 0x25f628: 0x24130009  addiu       $s3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f624) {
            ctx->pc = 0x25F634u;
            goto label_25f634;
        }
    }
    ctx->pc = 0x25F62Cu;
label_25f62c:
    // 0x25f62c: 0xc08b732  jal         func_22DCC8
    ctx->pc = 0x25F62Cu;
    SET_GPR_U32(ctx, 31, 0x25F634u);
    ctx->pc = 0x25F630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F62Cu;
    // 0x25f630: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DCC8u, 0x25F62Cu, 0x25F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F634u;
label_25f634:
    // 0x25f634: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25F634u;
    SET_GPR_U32(ctx, 31, 0x25F63Cu);
    ctx->pc = 0x25F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F634u;
    // 0x25f638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25F634u, 0x25F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F63Cu;
label_25f63c:
    // 0x25f63c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f640: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25F640u;
    SET_GPR_U32(ctx, 31, 0x25F648u);
    ctx->pc = 0x25F644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F640u;
    // 0x25f644: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25F640u, 0x25F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F648u;
label_25f648:
    // 0x25f648: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25f648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f64c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25f64cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f650: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25f650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f654: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25f654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25f658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f65c: 0x3e00008  jr          $ra
    ctx->pc = 0x25F65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F65Cu;
        // 0x25f660: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F664u;
    // 0x25f664: 0x0  nop
    ctx->pc = 0x25f664u;
    // NOP
    if (ctx->pc == 0x25f664u) { ctx->pc = 0x25f668u; }
}
