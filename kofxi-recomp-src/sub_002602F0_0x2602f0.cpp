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

// Function: sub_002602F0
// Address: 0x2602f0 - 0x260398
void sub_002602F0_0x2602f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002602F0_0x2602f0");
#endif

    switch (ctx->pc) {
        case 0x260318u: goto label_260318;
        case 0x260358u: goto label_260358;
        case 0x26036cu: goto label_26036c;
        default: break;
    }

    ctx->pc = 0x2602f0u;

    // 0x2602f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2602f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2602f4: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2602f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2602f8: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2602f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2602fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2602fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260300: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x260300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x260304: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x260304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260308: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x260308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x26030c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x26030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x260310: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x260310u;
    SET_GPR_U32(ctx, 31, 0x260318u);
    ctx->pc = 0x260314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260310u;
    // 0x260314: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x260310u, 0x260318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260318u;
label_260318:
    // 0x260318: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x260318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26031c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26031Cu;
    {
        const bool branch_taken_0x26031c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x260320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26031Cu;
        // 0x260320: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26031c) {
            ctx->pc = 0x26032Cu;
            goto label_26032c;
        }
    }
    ctx->pc = 0x260324u;
    // 0x260324: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x260324u;
    {
        const bool branch_taken_0x260324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260324u;
        // 0x260328: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260324) {
            ctx->pc = 0x26037Cu;
            goto label_26037c;
        }
    }
    ctx->pc = 0x26032Cu;
label_26032c:
    // 0x26032c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x26032cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x260330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260334: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x260334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x260338: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x260338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x26033c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26033cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260340: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x260340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x260344: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x260344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x260348: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x260348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x26034c: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x26034cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x260350: 0xc08cb3a  jal         func_232CE8
    ctx->pc = 0x260350u;
    SET_GPR_U32(ctx, 31, 0x260358u);
    ctx->pc = 0x260354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260350u;
    // 0x260354: 0xafb10024  sw          $s1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232CE8u, 0x260350u, 0x260358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260358u;
label_260358:
    // 0x260358: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x260358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26035c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26035cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260360: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x260360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260364: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x260364u;
    SET_GPR_U32(ctx, 31, 0x26036Cu);
    ctx->pc = 0x260368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260364u;
    // 0x260368: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x260364u, 0x26036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26036Cu;
label_26036c:
    // 0x26036c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26036cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x260370: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x260370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x260374: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x260374u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x260378: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x260378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26037c:
    // 0x26037c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26037cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x260380: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x260380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260384: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x260384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260388: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x260388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26038c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x26038cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260390: 0x3e00008  jr          $ra
    ctx->pc = 0x260390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260390u;
        // 0x260394: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260398u;
}
